// Problem: Final Value of Variable After Performing Operations
// Link to the problem: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
int finalValueAfterOperations(char **operations, int operationsSize)
{
    int ans = 0;
    for (int i = 0; i < operationsSize; i++)
    {
        if (strcmp(operations[i], "--X") == 0 || strcmp(operations[i], "X--") == 0)
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