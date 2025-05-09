// Problem: Prime Number of Set Bits in Binary Representation
// Link to the problem: https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/
class Solution
{
public:
    vector<int> toBinary(int n)
    {
        vector<int> ans;
        while (n > 0)
        {
            int rem = n % 2;
            ans.push_back(rem);
            n /= 2;
        }
        return ans;
    }
    int countOnes(vector<int> &res)
    {
        int ans = 0;
        for (int i = 0; i < res.size(); i++)
        {
            if (res[i] == 1)
            {
                ans++;
            }
        }
        return ans;
    }
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
    int countPrimeSetBits(int left, int right)
    {
        int ans = 0;
        for (int i = left; i <= right; i++)
        {
            vector<int> binary = toBinary(i);
            int x = countOnes(binary);
            if (isPrime(x))
            {
                ans++;
            }
        }
        return ans;
    }
};