// Problem: Maximum Number of Operations With the Same Score I
// Link to the problem: https://leetcode.com/problems/maximum-number-of-operations-with-the-same-score-i/
class Solution
{
public:
    int maxOperations(vector<int> &nums)
    {
        int ans = 1;
        int score = nums[0] + nums[1];
        nums.erase(nums.begin());
        nums.erase(nums.begin());
        while (nums.size() >= 2)
        {
            if ((nums[0] + nums[1]) == score)
            {
                ans++;
                nums.erase(nums.begin());
                nums.erase(nums.begin());
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};