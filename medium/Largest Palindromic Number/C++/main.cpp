// Problem: Largest Palindromic Number
// Link to the problem: https://leetcode.com/problems/largest-palindromic-number/
class Solution
{
public:
    string largestPalindromic(string num)
    {
        string ans = "";
        vector<int> freq(10, 0);
        for (int i = 0; i < num.size(); i++)
        {
            freq[num[i] - '0']++;
        }
        string x;
        for (int i = freq.size() - 1; i >= 0; i--)
        {
            if (freq[i] > 1)
            {
                if (i == 0)
                {
                    if (x.size() != 0)
                    {
                        int y = freq[i] / 2;
                        x.append(y, (i + '0'));
                        freq[i] -= (2 * y);
                    }
                }
                else
                {
                    int y = freq[i] / 2;
                    x.append(y, (i + '0'));
                    freq[i] -= (2 * y);
                }
            }
        }
        ans.append(x);
        for (int i = freq.size() - 1; i >= 0; i--)
        {
            if (freq[i] > 0)
            {
                ans.append(1, (i + '0'));
                break;
            }
        }
        reverse(x.begin(), x.end());
        ans.append(x);
        return ans;
    }
};