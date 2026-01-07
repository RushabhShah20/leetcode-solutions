// Problem: Check if Numbers Are Ascending in a Sentence
// Link to the problem: https://leetcode.com/problems/check-if-numbers-are-ascending-in-a-sentence/
class Solution
{
public:
    bool areNumbersAscending(string s)
    {
        const int n = s.size();
        vector<int> a;
        string x = "";
        for (const char &c : s)
        {
            if (isdigit(c))
            {
                x += c;
            }
            else
            {
                if (!x.empty())
                {
                    a.push_back(stoi(x));
                }
                x = "";
            }
        }
        if (!x.empty())
        {
            a.push_back(stoi(x));
        }
        for (int i = 1; i < a.size(); i++)
        {
            if (a[i] <= a[i - 1])
            {
                return false;
            }
        }
        return true;
    }
};