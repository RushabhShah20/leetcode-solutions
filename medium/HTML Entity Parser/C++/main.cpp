// Problem: HTML Entity Parser
// Link to the problem: https://leetcode.com/problems/html-entity-parser/
class Solution
{
public:
    string entityParser(string text)
    {
        for (int i = 0; i < text.size(); i++)
        {
            if (text[i] == '&')
            {
                string a = text.substr(i, 6), b = text.substr(i, 5), c = text.substr(i, 4), d = text.substr(i, 7);
                if (a == "&quot;")
                {
                    text.erase(i, 6);
                    text.insert(i, "\"");
                }
                else if (a == "&apos;")
                {
                    text.erase(i, 6);
                    text.insert(i, "'");
                }
                if (b == "&amp;")
                {
                    text.erase(i, 5);
                    text.insert(i, "&");
                }
                if (c == "&gt;")
                {
                    text.erase(i, 4);
                    text.insert(i, ">");
                }
                else if (c == "&lt;")
                {
                    text.erase(i, 4);
                    text.insert(i, "<");
                }
                if (d == "&frasl;")
                {
                    text.erase(i, 7);
                    text.insert(i, "\/");
                }
            }
        }
        return text;
    }
};