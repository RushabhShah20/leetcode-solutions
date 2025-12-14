// Problem: Reverse Words With Same Vowel Count
// Link to the problem: https://leetcode.com/problems/reverse-words-with-same-vowel-count/
class Solution
{
public:
    vector<string> split(string str, char delimiter)
    {
        stringstream ss(str);
        vector<string> res;
        string token;
        while (getline(ss, token, delimiter))
        {
            res.push_back(token);
        }
        return res;
    }
    string reverseWords(string s)
    {
        vector<string> a = split(s, ' ');
        int x = 0;
        for (int i = 0; i < a[0].size(); i++)
        {
            if (a[0][i] == 'a' || a[0][i] == 'e' || a[0][i] == 'i' || a[0][i] == 'o' || a[0][i] == 'u')
            {
                x++;
            }
        }
        string ans;
        ans.append(a[0]);
        if (a.size() > 1)
        {
            ans.append(1, ' ');
        }
        for (int i = 1; i < a.size(); i++)
        {
            int y = 0;
            for (int j = 0; j < a[i].size(); j++)
            {
                if (a[i][j] == 'a' || a[i][j] == 'e' || a[i][j] == 'i' || a[i][j] == 'o' || a[i][j] == 'u')
                {
                    y++;
                }
            }
            if (x == y)
            {
                reverse(a[i].begin(), a[i].end());
            }
            ans.append(a[i]);
            if (i < a.size() - 1)
            {
                ans.append(1, ' ');
            }
        }
        return ans;
    }
};