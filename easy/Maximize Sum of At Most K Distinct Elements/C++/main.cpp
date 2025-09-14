// Problem: Maximize Sum of At Most K Distinct Elements
// Link to the problem: https://leetcode.com/problems/maximize-sum-of-at-most-k-distinct-elements/
class Solution
{
public:
    vector<int> maxKDistinct(vector<int> &nums, int k)
    {
        set<int> s(nums.begin(), nums.end());
        vector<int> a(s.begin(), s.end());
        sort(a.begin(), a.end(), greater<int>());
        vector<int> ans;
        int n = a.size();
        for (int i = 0; i < min(n, k); i++)
        {
            ans.push_back(a[i]);
        }
        return ans;
    }
};