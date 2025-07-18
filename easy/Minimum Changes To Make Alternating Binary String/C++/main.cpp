// Problem: Minimum Changes To Make Alternating Binary String
// Link to the problem: https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/
class Solution
{
public:
    int minOperations(string s)
    {
        int ansEven = 0, ansOdd = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i % 2 == 0)
            {
                if (s[i] == '0')
                {
                    ansEven++;
                }
            }
            else
            {
                if (s[i] == '1')
                {
                    ansEven++;
                }
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (i % 2 == 0)
            {
                if (s[i] == '1')
                {
                    ansOdd++;
                }
            }
            else
            {
                if (s[i] == '0')
                {
                    ansOdd++;
                }
            }
        }
        return min(ansEven, ansOdd);
    }
};