// Problem: Make Array Elements Equal to Zero
// Link to the problem: https://leetcode.com/problems/make-array-elements-equal-to-zero/
int countValidSelections(int *nums, int numsSize)
{
    int n = numsSize;
    int ans = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }
    int leftSum = 0;
    int rightSum = sum;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            if (leftSum - rightSum >= 0 && leftSum - rightSum <= 1)
            {
                ans++;
            }
            if (rightSum - leftSum >= 0 && rightSum - leftSum <= 1)
            {
                ans++;
            }
        }
        else
        {
            leftSum += nums[i];
            rightSum -= nums[i];
        }
    }
    return ans;
}