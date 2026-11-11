// Problem: Rearrange Words in a Sentence
// Link to the problem: https://leetcode.com/problems/rearrange-words-in-a-sentence/
class Solution
{
public:
    string arrangeWords(string text)
    {
        vector<pair<string, int>> a;
        const int n = text.size();
        string s;
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (text[i] == ' ')
            {
                if (!s.empty())
                {
                    a.push_back({s, j});
                }
                s.clear();
                j++;
            }
            else
            {
                s.append(1, tolower(text[i]));
            }
        }
        if (!s.empty())
        {
            a.push_back({s, j});
        }
        const int m = a.size();
        sort(a.begin(), a.end(), [](const pair<string, int> &x, const pair<string, int> &y)
             {if(x.first.size()==y.first.size()){return x.second<y.second;}return x.first.size()<y.first.size(); });
        string ans;
        for (int i = 0; i < m; i++)
        {
            ans.append(a[i].first);
            if (i < m - 1)
            {
                ans.append(1, ' ');
            }
        }
        ans[0] = toupper(ans[0]);
        return ans;
    }
};