// Problem: Unique Morse Code Words
// Link to the problem: https://leetcode.com/problems/unique-morse-code-words/
class Solution
{
public:
    int uniqueMorseRepresentations(vector<string> &words)
    {
        vector<string> morseCode = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
        for (int i = 0; i < words.size(); i++)
        {
            for (int j = 0; j < words[i].size(); j++)
            {
                if (words[i][j] == 'a')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[0]);
                }
                else if (words[i][j] == 'b')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[1]);
                }
                else if (words[i][j] == 'c')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[2]);
                }
                else if (words[i][j] == 'd')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[3]);
                }
                else if (words[i][j] == 'e')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[4]);
                }
                else if (words[i][j] == 'f')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[5]);
                }
                else if (words[i][j] == 'g')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[6]);
                }
                else if (words[i][j] == 'h')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[7]);
                }
                else if (words[i][j] == 'i')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[8]);
                }
                else if (words[i][j] == 'j')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[9]);
                }
                else if (words[i][j] == 'k')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[10]);
                }
                else if (words[i][j] == 'l')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[11]);
                }
                else if (words[i][j] == 'm')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[12]);
                }
                else if (words[i][j] == 'n')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[13]);
                }
                else if (words[i][j] == 'o')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[14]);
                }
                else if (words[i][j] == 'p')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[15]);
                }
                else if (words[i][j] == 'q')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[16]);
                }
                else if (words[i][j] == 'r')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[17]);
                }
                else if (words[i][j] == 's')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[18]);
                }
                else if (words[i][j] == 't')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[19]);
                }
                else if (words[i][j] == 'u')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[20]);
                }
                else if (words[i][j] == 'v')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[21]);
                }
                else if (words[i][j] == 'w')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[22]);
                }
                else if (words[i][j] == 'x')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[23]);
                }
                else if (words[i][j] == 'y')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[24]);
                }
                else if (words[i][j] == 'z')
                {
                    words[i].erase(j, 1);
                    words[i].insert(j, morseCode[25]);
                }
            }
        }
        set<string> s(words.begin(), words.end());
        return s.size();
    }
};