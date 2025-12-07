// Problem: Complete Prime Number
// Link to the problem: https://leetcode.com/problems/complete-prime-number/
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
                if ((n / i) == (i))
                {
                    count += 1;
                }
                else
                {
                    count += 2;
                }
            }
        }
        return count == 2;
    }
    bool completePrime(int num)
    {
        if (!isPrime(num))
        {
            return false;
        }
        else
        {
            string s = to_string(num);
            for (int i = 1; i < s.size(); i++)
            {
                string x = s.substr(0, i), y = s.substr(i, s.size() - i);
                int a = stoi(x), b = stoi(y);
                if (!isPrime(a) || !isPrime(b))
                {
                    return false;
                }
            }
            return true;
        }
    }
};