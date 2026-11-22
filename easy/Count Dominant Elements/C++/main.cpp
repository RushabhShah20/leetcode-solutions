// Problem: Count Dominant Elements
// Link to the problem: https://leetcode.com/problems/count-dominant-elements/
class Solution
{
public:
    int countDominantElements(vector<int> &nums)
    {
        const int n = nums.size();
        if (n == 1)
        {
            return 1;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (nums[i] >= nums[i + 1])
                {
                    ans++;
                }
            }
            else if (i == n - 1)
            {
                if (nums[i] >= nums[i - 1])
                {
                    ans++;
                }
            }
            else
            {
                if (nums[i] << 1 >= nums[i - 1] + nums[i + 1])
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};