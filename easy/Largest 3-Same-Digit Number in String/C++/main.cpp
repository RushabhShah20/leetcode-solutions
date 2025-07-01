// Problem: Largest 3-Same-Digit Number in String
// Link to the problem: https://leetcode.com/problems/largest-3-same-digit-number-in-string/
class Solution
{
public:
    string largestGoodInteger(string num)
    {
        string ans = "";
        int count = 1;
        for (int i = 1; i < num.size(); i++)
        {
            if (num[i] == num[i - 1])
            {
                count++;
            }
            else
            {
                count = 1;
            }
            if (count == 3)
            {
                string x = num.substr(i - 2, 3);
                if (ans == "")
                {
                    ans = x;
                }
                else
                {
                    if (stoi(x) > stoi(ans))
                    {
                        ans = x;
                    }
                }
            }
        }
        return ans;
    }
};