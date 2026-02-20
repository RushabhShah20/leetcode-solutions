// Problem: Special Binary String
// Link to the problem: https://leetcode.com/problems/special-binary-string/
class Solution
{
public:
    string makeLargestSpecial(string s)
    {
        const int n = s.size();
        int i = 0, count = 0;
        vector<string> words;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == '1')
            {
                count++;
            }
            else
            {
                count--;
            }
            if (count == 0)
            {
                const string m = s.substr(i + 1, j - (i + 1)), t = makeLargestSpecial(m);
                words.push_back("1" + t + "0");
                i = j + 1;
            }
        }
        sort(words.begin(), words.end(), greater<>());
        string ans;
        for (const string word : words)
        {
            ans += word;
        }
        return ans;
    }
};
