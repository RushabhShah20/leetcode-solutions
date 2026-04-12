// Problem: Minimum Operations to Transform Array into Alternating Prime
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-transform-array-into-alternating-prime/
class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        vector<bool> isPrime(200001, true);
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i * i <= 200000; i++)
        {
            if (isPrime[i])
            {
                for (int j = i * i; j <= 200000; j += i)
                {
                    isPrime[j] = false;
                }
            }
        }
        const int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
            {
                while (isPrime[nums[i]])
                {
                    ans++;
                    nums[i]++;
                }
            }
            else
            {
                while (!isPrime[nums[i]])
                {
                    ans++;
                    nums[i]++;
                }
            }
        }
        return ans;
    }
};