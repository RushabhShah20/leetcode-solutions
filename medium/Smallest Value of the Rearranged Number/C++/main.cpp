// Problem: Smallest Value of the Rearranged Number
// Link to the problem: https://leetcode.com/problems/smallest-value-of-the-rearranged-number/
class Solution
{
public:
    long long smallestNumber(long long num)
    {
        if (num > 0)
        {
            string x = to_string(num);
            vector<int> digits;
            int countZer0 = 0;
            for (int i = 0; i < x.size(); i++)
            {
                if (x[i] == '0')
                {
                    countZer0++;
                }
                else
                {
                    digits.push_back(x[i] - '0');
                }
            }
            sort(digits.begin(), digits.end());
            string a = "";
            a.push_back((digits[0] + '0'));
            for (int i = 0; i < countZer0; i++)
            {
                a.push_back('0');
            }
            for (int i = 1; i < digits.size(); i++)
            {
                a.push_back((digits[i] + '0'));
            }
            long long ans = stoll(a);
            return ans;
        }
        else if (num < 0)
        {
            string x = to_string(num);
            vector<int> digits;
            for (int i = 1; i < x.size(); i++)
            {
                digits.push_back(x[i] - '0');
            }
            sort(digits.begin(), digits.end(), greater<int>());
            string a = "-";
            for (int i = 0; i < digits.size(); i++)
            {
                a.push_back(digits[i] + '0');
            }
            long long ans = stoll(a);
            return ans;
        }
        else
        {
            return num;
        }
    }
};