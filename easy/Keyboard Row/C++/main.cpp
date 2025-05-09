// Problem: Keyboard Row
// Link to the problem: https://leetcode.com/problems/keyboard-row/
class Solution
{
public:
    vector<string> findWords(vector<string> &words)
    {
        string first_row = "qwertyuiop";
        string second_row = "asdfghjkl";
        string third_row = "zxcvbnm";
        vector<string> ans;
        for (int i = 0; i < words.size(); i++)
        {
            if (first_row.find(tolower(words[i][0])) != string::npos)
            {
                bool x = true;
                for (int j = 1; j < words[i].size(); j++)
                {
                    if (first_row.find(tolower(words[i][j])) == string::npos)
                    {
                        x = false;
                        break;
                    }
                }
                if (x == true)
                {
                    ans.push_back(words[i]);
                }
            }
            else if (second_row.find(tolower(words[i][0])) != string::npos)
            {
                bool x = true;
                for (int j = 1; j < words[i].size(); j++)
                {
                    if (second_row.find(tolower(words[i][j])) == string::npos)
                    {
                        x = false;
                        break;
                    }
                }
                if (x == true)
                {
                    ans.push_back(words[i]);
                }
            }
            else if (third_row.find(tolower(words[i][0])) != string::npos)
            {
                bool x = true;
                for (int j = 1; j < words[i].size(); j++)
                {
                    if (third_row.find(tolower(words[i][j])) == string::npos)
                    {
                        x = false;
                        break;
                    }
                }
                if (x == true)
                {
                    ans.push_back(words[i]);
                }
            }
        }
        return ans;
    }
};