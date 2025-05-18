// Problem: Smallest Index With Digit Sum Equal to Index
// Link to the problem: https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/
class Solution
{
public:
    int split(int num)
    {
        int result;
        while (num > 0)
        {
            result += (num % 10);
            num /= 10;
        }
        return result;
    }
    int smallestIndex(vector<int> &nums)
    {
        if (nums.size() == 0 && nums[0] == 0)
        {
            return 0;
        }
        else
        {

            bool x = false;
            int ans = -1;
            for (int i = 0; i < nums.size(); i++)
            {
                if (split(nums[i]) == i)
                {
                    x = true;
                    ans = i;
                    break;
                }
            }
            if (x == false)
            {
                return -1;
            }
            else
            {
                return ans;
            }
        }
    }
};