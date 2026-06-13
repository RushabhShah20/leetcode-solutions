// Problem: Weighted Word Mapping
// Link to the problem: https://leetcode.com/problems/weighted-word-mapping/
char *mapWordWeights(char **words, int wordsSize, int *weights, int weightsSize)
{
    char *ans = (char *)malloc((wordsSize + 1) * sizeof(char));
    for (int i = 0; i < wordsSize; i++)
    {
        int sum = 0;
        int m = strlen(words[i]);
        for (int j = 0; j < m; j++)
        {
            sum += weights[words[i][j] - 'a'];
        }
        ans[i] = (char)('z' - (sum % 26));
    }
    ans[wordsSize] = '\0';
    return ans;
}