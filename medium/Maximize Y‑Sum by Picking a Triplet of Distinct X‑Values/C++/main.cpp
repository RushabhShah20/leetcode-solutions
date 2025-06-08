// Problem: Maximize Y‑Sum by Picking a Triplet of Distinct X‑Values
// Link to the problem: https://leetcode.com/problems/maximize-ysum-by-picking-a-triplet-of-distinct-xvalues/
class Solution
{
public:
    int maxSumDistinctTriplet(vector<int> &x, vector<int> &y)
    {
        int ans = 0;
        set<int> s;
        s.insert(x.begin(), x.end());
        if (s.size() <= 2)
        {
            return -1;
        }
        else
        {
            map<int, vector<int>> m;
            for (int i = 0; i < x.size(); i++)
            {
                m[x[i]].push_back(y[i]);
            }
            map<int, int> y;
            for (auto i : m)
            {
                y[i.first] = *max_element(i.second.begin(), i.second.end());
            }
            vector<int> z;
            for (auto i : y)
            {
                z.push_back(i.second);
            }
            for (int i = 0; i < 3; i++)
            {
                ans += *max_element(z.begin(), z.end());
                z.erase(max_element(z.begin(), z.end()));
            }
            return ans;
        }
    }
};