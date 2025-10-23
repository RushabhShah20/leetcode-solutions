// Problem: Remove Digit From Number to Maximize Result
// Link to the problem: https://leetcode.com/problems/remove-digit-from-number-to-maximize-result/
class Solution
{
public:
    string removeDigit(string number, char digit)
    {
        set<string> s;
        for (int i = 0; i < number.size(); i++)
        {
            if (number[i] == digit)
            {
                string x = number;
                x.erase(i, 1);
                s.insert(x);
            }
        }
        return *s.rbegin();
    }
};