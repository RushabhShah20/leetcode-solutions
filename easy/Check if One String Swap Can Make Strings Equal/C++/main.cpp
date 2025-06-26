// Problem: Check if One String Swap Can Make Strings Equal
// Link to the problem: https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/
class Solution
{
public:
    bool areAlmostEqual(string s1, string s2)
    {
        vector<int> indices;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] != s2[i])
            {
                indices.push_back(i);
            }
        }
        if (indices.size() == 0 || indices.size() == 2)
        {
            if (indices.size() == 0)
            {
                return true;
            }
            else
            {
                char temp = s1[indices[0]];
                s1[indices[0]] = s1[indices[1]];
                s1[indices[1]] = temp;
                if (s1 == s2)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else
        {
            return false;
        }
    }
};