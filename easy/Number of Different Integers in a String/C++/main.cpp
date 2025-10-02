// Problem: Number of Different Integers in a String
// Link to the problem: https://leetcode.com/problems/number-of-different-integers-in-a-string/
class Solution
{
public:
    int numDifferentIntegers(string word)
    {
        int len = 0;
        set<string> ans;
        for (int i = 0; i < word.size(); i++)
        {
            if (isdigit(word[i]))
            {
                len++;
            }
            else
            {
                if (len != 0)
                {
                    string x = word.substr(i - len, len);
                    x.erase(0, x.find_first_not_of('0'));
                    ans.insert(x);
                }
                len = 0;
            }
        }
        if (len != 0)
        {
            string x = word.substr(word.length() - len, len);
            x.erase(0, x.find_first_not_of('0'));
            ans.insert(x);
        }
        return ans.size();
    }
};