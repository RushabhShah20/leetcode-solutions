// Problem: Find the Middle Index in Array
// Link to the problem: https://leetcode.com/problems/find-the-middle-index-in-array/
class Solution
{
public:
    int findMiddleIndex(vector<int> &nums)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }
        int j = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            j += nums[i];
            if (j == sum)
            {
                return i;
            }
            sum -= nums[i];
        }
        return -1;
    }
};