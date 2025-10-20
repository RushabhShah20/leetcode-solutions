// Problem: Final Value of Variable After Performing Operations
// Link to the problem: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
public class Solution
{
    public int FinalValueAfterOperations(string[] operations)
    {
        int ans = 0;
        foreach (string operation in operations)
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
}