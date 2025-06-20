// Problem: Goal Parser Interpretation
// Link to the problem: https://leetcode.com/problems/goal-parser-interpretation/
class Solution
{
public:
    string interpret(string command)
    {
        string ans = "";
        for (int i = 0; i < command.size(); i++)
        {
            if (command.substr(i, 2) == "()")
            {
                ans += "o";
            }
            else if (command.substr(i, 4) == "(al)")
            {
                ans += "al";
            }
            else if (command[i] != '(' && command[i] != ')' && command[i] != 'a' && command[i] != 'l')
            {
                ans += command[i];
            }
        }
        return ans;
    }
};