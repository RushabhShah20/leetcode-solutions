// Problem: Check if Any Element Has Prime Frequency
// Link to the problem: https://leetcode.com/problems/check-if-any-element-has-prime-frequency/
class Solution
{
public:
    bool isPrime(int n)
    {
        bool x = true;
        if (n <= 1)
        {
            return false;
        }
        else
        {
            for (int i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    x = false;
                    break;
                }
            }
            return x;
        }
    }
    bool checkPrimeFrequency(vector<int> &nums)
    {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        for (auto i : m)
        {
            if (isPrime(i.second))
            {
                return true;
            }
        }
        return false;
    }
};