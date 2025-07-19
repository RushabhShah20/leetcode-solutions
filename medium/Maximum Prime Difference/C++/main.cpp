// Problem: Maximum Prime Difference
// Link to the problem: https://leetcode.com/problems/maximum-prime-difference/
class Solution
{
public:
    bool isPrime(int n)
    {
        int count = 0;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                count++;
                if (n / i != i)
                {
                    count++;
                }
            }
        }
        if (count == 2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int maximumPrimeDifference(vector<int> &nums)
    {
        int ans = 0, left = 0, right = nums.size() - 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (isPrime(nums[i]))
            {
                left = i;
                break;
            }
        }
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (isPrime(nums[i]))
            {
                right = i;
                break;
            }
        }
        return abs(left - right);
    }
};