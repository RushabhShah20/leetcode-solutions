// Problem: Reformat The String
// Link to the problem: https://leetcode.com/problems/reformat-the-string/
class Solution
{
public:
    string reformat(string s)
    {
        string ans = "";
        int chars = 0, digits = 0;
        vector<char> charsArray, digitsArray;
        for (int i = 0; i < s.size(); i++)
        {
            if (isdigit(s[i]))
            {
                digits++;
                digitsArray.push_back(s[i]);
            }
            else
            {
                chars++;
                charsArray.push_back(s[i]);
            }
        }
        if (abs(digits - chars) > 1)
        {
            return ans;
        }
        else
        {
            if (chars > digits)
            {
                ans.append(1, charsArray[0]);
                for (int i = 0; i < digits; i++)
                {
                    ans.append(1, digitsArray[i]);
                    ans.append(1, charsArray[i + 1]);
                }
            }
            else if (chars < digits)
            {
                ans.append(1, digitsArray[0]);
                for (int i = 0; i < chars; i++)
                {
                    ans.append(1, charsArray[i]);
                    ans.append(1, digitsArray[i + 1]);
                }
            }
            else
            {
                for (int i = 0; i < digits; i++)
                {
                    ans.append(1, digitsArray[i]);
                    ans.append(1, charsArray[i]);
                }
            }
            return ans;
        }
    }
};