// Problem: Goat Latin
// Link to the problem: https://leetcode.com/problems/goat-latin/
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
    string toGoatLatin(string sentence)
    {
        vector<string> words = split(sentence, ' ');
        string ans = "";
        for (int i = 0; i < words.size(); i++)
        {
            if (words[i][0] == 'a' || words[i][0] == 'A' || words[i][0] == 'e' || words[i][0] == 'E' || words[i][0] == 'i' || words[i][0] == 'I' || words[i][0] == 'o' || words[i][0] == 'O' || words[i][0] == 'u' || words[i][0] == 'U')
            {
                words[i].append("ma");
                words[i].append(i + 1, 'a');
            }
            else
            {
                char ch = words[i][0];
                words[i].erase(words[i].begin());
                words[i].append(1, ch);
                words[i].append("ma");
                words[i].append(i + 1, 'a');
            }
            ans += words[i];
            ans += ' ';
        }
        ans.erase(ans.end() - 1);
        return ans;
    }
};