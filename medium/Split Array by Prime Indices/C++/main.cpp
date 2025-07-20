// Problem: Split Array by Prime Indices
// Link to the problem: https://leetcode.com/problems/split-array-by-prime-indices/
class Solution
{
public:
    bool isPrime(int n)
    {
        if (n <= 1)
        {
            return false;
        }
        if (n == 2 || n == 3)
        {
            return true;
        }
        if (n % 2 == 0 || n % 3 == 0)
        {
            return false;
        }
        else
        {
            for (int i = 5; i <= sqrt(n); i = i + 6)
            {
                if ((n % i == 0) || (n % (i + 2) == 0))
                {
                    return false;
                }
            }
        }
        return true;
    }
    long long splitArray(vector<int> &nums)
    {
        long long ans = 0;
        vector<long long> a, b;
        for (int i = 0; i < nums.size(); i++)
        {
            if (isPrime(i))
            {
                a.push_back(nums[i]);
            }
            else
            {
                b.push_back(nums[i]);
            }
        }
        long long sumA = 0, sumB = 0;
        for (int i = 0; i < a.size(); i++)
        {
            sumA += a[i];
        }
        for (int i = 0; i < b.size(); i++)
        {
            sumB += b[i];
        }
        ans = abs(sumA - sumB);
        return ans;
    }
};