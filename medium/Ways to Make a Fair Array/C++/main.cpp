// Problem: Ways to Make a Fair Array
// Link to the problem: https://leetcode.com/problems/ways-to-make-a-fair-array/
class Solution
{
public:
    int waysToMakeFair(vector<int> &nums)
    {
        const int n = nums.size();
        int leftEven = 0, leftOdd = 0, rightEven = 0, rightOdd = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                rightEven += nums[i];
            }
            else
            {
                rightOdd += nums[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                rightEven -= nums[i];
            }
            else
            {
                rightOdd -= nums[i];
            }
            if (leftEven + rightOdd == leftOdd + rightEven)
            {
                ans++;
            }
            if (i % 2 == 0)
            {
                leftEven += nums[i];
            }
            else
            {
                leftOdd += nums[i];
            }
        }
        return ans;
    }
};