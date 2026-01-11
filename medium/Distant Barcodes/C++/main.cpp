// Problem: Distant Barcodes
// Link to the problem: https://leetcode.com/problems/distant-barcodes/
class Solution
{
public:
    vector<int> rearrangeBarcodes(vector<int> &barcodes)
    {
        unordered_map<int, int> m;
        for (const int &barcode : barcodes)
        {
            m[barcode]++;
        }
        vector<int> ans;
        auto comp = [](const pair<int, int> &a, const pair<int, int> &b)
        {
            return a.second < b.second;
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(comp)> pq(comp);
        for (const pair<int, int> i : m)
        {
            pq.push({i.first, i.second});
        }
        while (!pq.empty())
        {
            if (ans.empty())
            {
                pair<int, int> x = pq.top();
                pq.pop();
                ans.push_back(x.first);
                if (x.second - 1 > 0)
                {
                    pair<int, int> y = make_pair(x.first, x.second - 1);
                    pq.push(y);
                }
            }
            else
            {
                pair<int, int> x = pq.top();
                pq.pop();
                if (x.first == ans.back())
                {
                    pair<int, int> y = pq.top();
                    pq.pop();
                    ans.push_back(y.first);
                    if (y.second - 1 > 0)
                    {
                        pair<int, int> z = make_pair(y.first, y.second - 1);
                        pq.push(z);
                    }
                    pq.push(x);
                }
                else
                {
                    ans.push_back(x.first);
                    if (x.second - 1 > 0)
                    {
                        pair<int, int> y = make_pair(x.first, x.second - 1);
                        pq.push(y);
                    }
                }
            }
        }
        return ans;
    }
};