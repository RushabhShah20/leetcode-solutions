// Problem: Decode the Message
// Link to the problem: https://leetcode.com/problems/decode-the-message/
class Solution
{
public:
    string decodeMessage(string key, string message)
    {
        vector<char> characters;
        for (int i = 0; i < key.size(); i++)
        {
            if (key[i] == ' ')
            {
                continue;
            }
            else
            {
                if (find(characters.begin(), characters.end(), key[i]) == characters.end())
                {
                    characters.push_back(key[i]);
                }
            }
        }
        map<char, char> m;
        int i = 0;
        for (char character : characters)
        {
            m[character] = ('a' + i);
            i++;
        }
        for (int i = 0; i < message.size(); i++)
        {
            if (message[i] != ' ')
            {
                message[i] = m[message[i]];
            }
        }
        return message;
    }
};