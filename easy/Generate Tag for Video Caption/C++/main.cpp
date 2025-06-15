// Problem: Generate Tag for Video Caption
// Link to the problem: https://leetcode.com/problems/generate-tag-for-video-caption/
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
    string generateTag(string caption)
    {
        caption.erase(caption.begin(), std::find_if(caption.begin(), caption.end(), [](unsigned char ch)
                                                    { return !isspace(ch); }));
        if (caption == "")
        {
            return "#";
        }
        string ans = "#";
        vector<string> words = split(caption, ' ');
        words[0][0] = tolower(words[0][0]);
        for (int i = 1; i < words[0].size(); i++)
        {
            words[0][i] = tolower(words[0][i]);
        }
        ans = ans + words[0];
        for (int i = 1; i < words.size(); i++)
        {
            words[i][0] = toupper(words[i][0]);
            for (int j = 1; j < words[i].size(); j++)
            {
                words[i][j] = tolower(words[i][j]);
            }
            ans = ans + words[i];
        }
        if (ans.length() > 100)
        {
            ans.erase(ans.begin() + 100, ans.end());
        }
        return ans;
    }
};