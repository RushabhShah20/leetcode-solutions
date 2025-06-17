// Problem: Binary Number with Alternating Bits
// Link to the problem: https://leetcode.com/problems/binary-number-with-alternating-bits/
class Solution
{
public:
    vector<int> toBinary(int n)
    {
        vector<int> ans;
        while (n > 0)
        {
            ans.push_back(n % 2);
            n /= 2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    bool isAlternating(vector<int> ans)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            if (i % 2 == 0)
            {
                if (ans[i] == 0)
                {
                    return false;
                }
            }
            else
            {
                if (ans[i] == 1)
                {
                    return false;
                }
            }
        }
        return true;
    }
    bool hasAlternatingBits(int n)
    {
        vector<int> ans = toBinary(n);
        return isAlternating(ans);
    }
};