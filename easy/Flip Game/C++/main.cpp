// Problem: Flip Game
// Link to the problem: https://leetcode.com/problems/flip-game/
class Solution
{
public:
    vector<string> generatePossibleNextMoves(string currentState)
    {
        const int n = currentState.size();
        vector<string> ans;
        for (int i = 0; i < n - 1; i++)
        {
            if (currentState[i] == '+' && currentState[i + 1] == '+')
            {
                currentState[i] = currentState[i + 1] = '-';
                ans.push_back(currentState);
                currentState[i] = currentState[i + 1] = '+';
            }
        }
        return ans;
    }
};