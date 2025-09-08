// Problem: Construct K Palindrome Strings
// Link to the problem: https://leetcode.com/problems/construct-k-palindrome-strings/
class Solution
{
public:
    bool canConstruct(string s, int k)
    {
        if (s.size() < k)
        {
            return false;
        }
        else
        {
            map<char, int> m;
            for (int i = 0; i < s.size(); i++)
            {
                m[s[i]]++;
            }
            int count = 0;
            for (auto i : m)
            {
                if (i.second % 2 != 0)
                {
                    count++;
                }
            }
            if (count > k)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }
};