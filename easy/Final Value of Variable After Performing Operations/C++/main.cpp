// Problem: Final Value of Variable After Performing Operations
// Link to the problem: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int ans = 0;
        for (string operation : operations)
        {
            if (operation == "--X" || operation == "X--")
            {
                ans--;
            }
            else
            {
                ans++;
            }
        }
        return ans;
    }
};