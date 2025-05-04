// Problem: Self Dividing Numbers
// Link to the problem: https://leetcode.com/problems/self-dividing-numbers/
class Solution
{
public:
    vector<int> split(int num)
    {
        vector<int> result;
        while (num > 0)
        {
            result.push_back(num % 10);
            num /= 10;
        }
        return result;
    }
    bool hasZero(int num)
    {
        if (num == 0)
            return true;
        if (num < 0)
            num = -num;
        while (num > 0)
        {
            if (num % 10 == 0)
                return true;
            num /= 10;
        }
        return false;
    }
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> ans;
        for (int i = left; i <= right; i++)
        {
            if (!hasZero(i))
            {
                vector<int> digits = split(i);
                bool x = true;
                for (int j = 0; j < digits.size(); j++)
                {
                    if (i % digits[j] != 0)
                    {
                        x = false;
                        break;
                    }
                }
                if (x == true)
                {
                    ans.push_back(i);
                }
            }
        }
        return ans;
    }
};