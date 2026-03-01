// Problem: Merge Close Characters
// Link to the problem: https://leetcode.com/problems/merge-close-characters/
class Solution
{
public:
    string mergeCharacters(string s, int k)
    {
        bool x = true;
        while (x)
        {
            x = false;
            const int n = s.length();
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n && j <= i + k; j++)
                {
                    if (s[i] == s[j])
                    {
                        s.erase(j, 1);
                        x = true;
                        break;
                    }
                }
                if (x)
                {
                    break;
                }
            }
        }
        return s;
    }
};