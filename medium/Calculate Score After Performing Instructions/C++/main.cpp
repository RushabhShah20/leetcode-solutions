// Problem: Calculate Score After Performing Instructions
// Link to the problem: https://leetcode.com/problems/calculate-score-after-performing-instructions/
class Solution
{
public:
    long long calculateScore(vector<string> &instructions, vector<int> &values)
    {
        long long ans = 0;
        vector<bool> visited(instructions.size(), false);
        int i = 0;
        while (i >= 0 && i < instructions.size() && visited[i] == true)
        {
            if (instructions[i] == "jump")
            {
                visited[i] = true;
                i += values[i];
            }
            else if (instructions[i] == "add")
            {
                visited[i] = true;
                ans += values[i];
                i++;
            }
        }
        return ans;
    }
};