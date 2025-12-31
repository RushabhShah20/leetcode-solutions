// Problem: Minimize Length of Array Using Operations
// Link to the problem: https://leetcode.com/problems/minimize-length-of-array-using-operations/
class Solution
{
public:
    int minimumArrayLength(vector<int> &nums)
    {
        int minVal = nums[0];
        for (const int &num : nums)
        {
            minVal = min(minVal, num);
        }
        for (const int &num : nums)
        {
            if (num % minVal > 0)
            {
                return 1;
            }
        }
        int count = 0;
        for (const int &num : nums)
        {
            if (num == minVal)
            {
                count++;
            }
        }
        const int ans = ((count + 1) / 2);
        return ans;
    }
};