// Problem: Two Sum II - Input Array Is Sorted
// Link to the problem: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int l = 0, r = numbers.size() - 1;
        vector<int> nums = numbers;
        while (l < r)
        {
            if (nums[l] + nums[r] == target)
                return vector<int>{l + 1, r + 1};
            else if (nums[l] + nums[r] < target)
            {
                int left = l, right = r - 1;
                while (left < right)
                {
                    int mid = (left + right) / 2;
                    if (nums[mid] + nums[r] >= target)
                        right = mid;
                    else
                        left = mid + 1;
                }
                l = left;
            }
            else
            {
                int left = l + 1, right = r;
                while (left < right)
                {
                    int mid = (left + right + 1) / 2;
                    if (nums[mid] + nums[l] <= target)
                        left = mid;
                    else
                        right = mid - 1;
                }
                r = right;
            }
        }
        return vector<int>{0, 0};
    }
};