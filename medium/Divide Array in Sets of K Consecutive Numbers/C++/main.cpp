// Problem: Divide Array in Sets of K Consecutive Numbers
// Link to the problem: https://leetcode.com/problems/divide-array-in-sets-of-k-consecutive-numbers/
class Solution
{
public:
    bool findSuccessor(vector<int> &nums, int k, int i, int n)
    {
        int x = nums[i] + 1;
        nums[i] = -1;
        int count = 1;
        i += 1;
        while (i < n && count < k)
        {
            if (nums[i] == x)
            {
                x = nums[i] + 1;
                nums[i] = -1;
                count++;
            }
            i++;
        }
        return count == k;
    }
    bool isPossibleDivide(vector<int> &nums, int k)
    {
        int n = nums.size();
        if (n % k != 0)
        {
            return false;
        }
        else
        {
            sort(nums.begin(), nums.end());
            for (int i = 0; i < n; i++)
            {
                if (nums[i] >= 0)
                {
                    if (findSuccessor(nums, k, i, n) == false)
                    {
                        return false;
                    }
                }
            }
            return true;
        }
    }
};