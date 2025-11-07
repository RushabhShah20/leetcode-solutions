// Problem: Longest Harmonious Subsequence
// Link to the problem: https://leetcode.com/problems/longest-harmonious-subsequence/
class Solution
{
public:
    int findLHS(vector<int> &nums)
    {
        int ans = 0;
        map<int, int> m;
        for (int num : nums)
        {
            m[num]++;
        }
        if (m.size() == 1)
        {
            return 0;
        }
        map<int, int>::iterator it1 = next(m.begin(), 1);
        while (it1 != m.end())
        {
            map<int, int>::iterator it2 = prev(it1, 1);
            if ((it1->first - it2->first) == 1)
            {
                ans = max(ans, it1->second + it2->second);
            }
            it1++;
        }
        return ans;
    }
};