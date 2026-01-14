// Problem: Separate Squares II
// Link to the problem: https://leetcode.com/problems/separate-squares-ii/
class SegmentTree
{
public:
    vector<int> xs;
    vector<int> count;
    vector<long long> covered;
    int n;
    SegmentTree(vector<int> &coords) : xs(coords)
    {
        n = (int)xs.size() - 1;
        if (n > 0)
        {
            count.assign(4 * n, 0);
            covered.assign(4 * n, 0);
        }
    }
    void update(int ql, int qr, int val, int l, int r, int pos)
    {
        if (n <= 0 || xs[r + 1] <= ql || xs[l] >= qr)
        {
            return;
        }
        if (ql <= xs[l] && xs[r + 1] <= qr)
        {
            count[pos] += val;
        }
        else
        {
            int m = l + (r - l) / 2;
            update(ql, qr, val, l, m, pos * 2 + 1);
            update(ql, qr, val, m + 1, r, pos * 2 + 2);
        }
        if (count[pos] > 0)
        {
            covered[pos] = (long long)xs[r + 1] - xs[l];
        }
        else if (l != r)
        {
            covered[pos] = covered[pos * 2 + 1] + covered[pos * 2 + 2];
        }
        else
        {
            covered[pos] = 0;
        }
    }
};

class Solution
{
public:
    double separateSquares(vector<vector<int>> &squares)
    {
        set<int> x_set;
        for (const auto &s : squares)
        {
            x_set.insert(s[0]);
            x_set.insert(s[0] + s[2]);
        }
        vector<int> xs(x_set.begin(), x_set.end());
        SegmentTree st(xs);
        struct Event
        {
            double y;
            int type, x1, x2;
            bool operator<(const Event &other) const
            {
                return y < other.y;
            }
        };
        vector<Event> events;
        for (const auto &s : squares)
        {
            events.push_back({(double)s[1], 1, s[0], s[0] + s[2]});
            events.push_back({(double)s[1] + s[2], -1, s[0], s[0] + s[2]});
        }
        sort(events.begin(), events.end());
        vector<tuple<double, long long, double>> history;
        long double totalArea = 0;
        double lastY = events[0].y;
        for (const auto &event : events)
        {
            long long width = st.covered.empty() ? 0 : st.covered[0];
            double dy = event.y - lastY;
            if (dy > 0)
            {
                totalArea += (long double)width * dy;
                history.emplace_back(dy, width, lastY);
            }
            st.update(event.x1, event.x2, event.type, 0, st.n - 1, 0);
            lastY = event.y;
        }
        long double target = totalArea / 2.0L;
        long double currentArea = 0;
        for (const auto &[dy, width, bottomY] : history)
        {
            long double chunk = (long double)width * dy;
            if (currentArea + chunk >= target - 1e-12L)
            {
                if (width == 0)
                {
                    return bottomY;
                }
                return (double)((long double)bottomY + (target - currentArea) / (long double)width);
            }
            currentArea += chunk;
        }
        return lastY;
    }
};