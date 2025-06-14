// Problem: Count Symmetric Integers
// Link to the problem: https://leetcode.com/problems/count-symmetric-integers/
class Solution
{
public:
    vector<int> digits(int n)
    {
        vector<int> ans;
        while (n > 0)
        {
            ans.push_back(n % 10);
            n /= 10;
        }
        return ans;
    }
    bool isSumEqual(int n)
    {
        vector<int> nDigits = digits(n);
        if (nDigits.size() % 2 != 0)
        {
            return false;
        }
        else
        {
            int firstHalf = 0, secondHalf = 0;
            for (int i = 0; i < nDigits.size(); i++)
            {
                if (i < (nDigits.size() / 2))
                {
                    firstHalf += nDigits[i];
                }
                else
                {
                    secondHalf += nDigits[i];
                }
            }
            return firstHalf == secondHalf;
        }
    }
    int countSymmetricIntegers(int low, int high)
    {
        int ans = 0;
        for (int i = low; i <= high; i++)
        {
            if (isSumEqual(i))
            {
                ans++;
            }
        }
        return ans;
    }
};