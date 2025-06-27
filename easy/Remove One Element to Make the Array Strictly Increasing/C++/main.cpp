// Problem: Remove One Element to Make the Array Strictly Increasing
// Link to the problem: https://leetcode.com/problems/remove-one-element-to-make-the-array-strictly-increasing/
class Solution
{
public:
    bool isArrayIncreasing(vector<int> &arr)
    {
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] <= arr[i - 1])
            {
                return false;
            }
        }
        return true;
    }
    bool canBeIncreasing(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            vector<int> arr = nums;
            arr.erase(arr.begin() + i);
            if (isArrayIncreasing(arr))
            {
                return true;
            }
        }
        return false;
    }
};