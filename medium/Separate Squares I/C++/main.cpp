// Problem: Separate Squares I
// Link to the problem: https://leetcode.com/problems/separate-squares-i/
class Solution
{
public:
    double separateSquares(vector<vector<int>> &squares)
    {
        double area = 0;
        vector<pair<double, double>> events;
        for (const vector<int> &square : squares)
        {
            double x = square[1];
            double y = square[2];
            area += (y * y);
            events.push_back({x, y});
            events.push_back({x + y, -y});
        }
        sort(events.begin(), events.end());
        double a = 0, b = 0;
        for (int i = 0; i < events.size() - 1; i++)
        {
            a += events[i].second;
            double c = events[i].first, d = events[i + 1].first;
            if (c == d)
            {
                continue;
            }
            double e = a * (d - c);
            if (b + e >= area / 2.0)
            {
                double f = (area / 2.0) - b;
                return c + f / a;
            }
            b += e;
        }
        const double ans = events.back().first;
        return ans;
    }
};