// Problem: Lexicographically Smallest String After Reverse
// Link to the problem: https://leetcode.com/problems/lexicographically-smallest-string-after-reverse/
class Solution
{
public:
    string lexSmallest(string s)
    {
        set<string> x;
        for (int i = 1; i <= s.size(); i++)
        {
            string a = s;
            string b = s;
            reverse(a.begin(), a.begin() + i);
            reverse(b.end() - i, b.end());
            x.insert(a);
            x.insert(b);
        }
        return *x.begin();
    }
};