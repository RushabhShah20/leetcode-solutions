// Problem: Subarrays Distinct Element Sum of Squares I
// Link to the problem: https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/
class Solution
{
public:
    int sumCounts(vector<int> &nums)
    {
        int ans = 0;
        for (auto it = nums.begin(); it != nums.end(); it++)
        {
            for (auto jt = it; jt != nums.end(); jt++)
            {
                set<int> s(it, jt + 1);
                int n = s.size();
                int x = n * n;
                ans += x;
            }
        }
        return ans;
    }
};