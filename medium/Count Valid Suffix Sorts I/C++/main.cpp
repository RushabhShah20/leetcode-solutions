// Problem: Count Valid Suffix Sorts I
// Link to the problem: https://leetcode.com/problems/count-valid-suffix-sorts-i/
class Solution
{
public:
    int countSuffix(vector<int> &nums, vector<int> &target)
    {
        const int n = nums.size();
        int j = n;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != target[i])
            {
                j = i;
                break;
            }
        }
        sort(nums.begin() + j, nums.end(), greater<>());
        if (nums != target)
        {
            return 0;
        }
        int ans = 1;
        for (int i = min(j - 1, n - 2); i >= 0; i--)
        {
            if (nums[i] >= nums[i + 1])
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};