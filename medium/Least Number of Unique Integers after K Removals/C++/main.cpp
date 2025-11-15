// Problem: Least Number of Unique Integers after K Removals
// Link to the problem: https://leetcode.com/problems/least-number-of-unique-integers-after-k-removals/
class Solution
{
public:
    int findLeastNumOfUniqueInts(vector<int> &arr, int k)
    {
        map<int, int> x;
        for (int i : arr)
        {
            x[i]++;
        }
        vector<pair<int, int>> y;
        for (pair<int, int> i : x)
        {
            y.push_back(i);
        }
        sort(y.begin(), y.end(), [](const pair<int, int> &a, const pair<int, int> &b)
             { return a.second < b.second; });
        for (pair<int, int> &i : y)
        {
            if (i.second > k)
            {
                i.second -= k;
                k = 0;
                break;
            }
            else
            {
                k -= i.second;
                i.second = 0;
            }
        }
        int ans = 0;
        for (pair<int, int> i : y)
        {
            if (i.second > 0)
            {
                ans++;
            }
        }
        return ans;
    }
};