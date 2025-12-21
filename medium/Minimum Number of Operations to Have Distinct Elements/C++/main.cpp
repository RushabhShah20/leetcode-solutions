// Problem: Minimum Number of Operations to Have Distinct Elements
// Link to the problem: https://leetcode.com/problems/minimum-number-of-operations-to-have-distinct-elements/
class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        unordered_set<int> s;
        int i = 0, n = nums.size();
        for (i = n - 1; i >= 0; i--)
        {
            if (s.count(nums[i]))
            {
                break;
            }
            s.insert(nums[i]);
        }
        const int ans = ((i + 3) / 3);
        return ans;
    }
};