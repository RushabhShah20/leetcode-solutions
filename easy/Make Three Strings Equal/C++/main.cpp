// Problem: Make Three Strings Equal
// Link to the problem: https://leetcode.com/problems/make-three-strings-equal/
class Solution
{
public:
    int findMinimumOperations(string s1, string s2, string s3)
    {
        if (s1[0] != s2[0] || s1[0] != s3[0])
        {
            return -1;
        }
        else
        {
            int ans = 0;
            for (int i = 0; i < min({s1.size(), s1.size(), s3.size()}); i++)
            {
                if (s1[i] != s2[i] || s1[i] != s3[i])
                {
                    break;
                }
                ans++;
            }
            return ((s1.size() + s2.size() + s3.size()) - (3 * ans));
        }
    }
};