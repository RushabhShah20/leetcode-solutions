// Problem: Minimum Operations to Convert All Elements to Zero
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-convert-all-elements-to-zero/
class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        int ans = 0, n = nums.size();
        stack<int> s;
        for (int num : nums)
        {
            while (!s.empty() && s.top() > num)
            {
                s.pop();
            }
            if (num == 0)
            {
                continue;
            }
            if (s.empty() || s.top() < num)
            {
                ans++;
                s.push(num);
            }
        }
        return ans;
    }
};