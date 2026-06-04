// Problem: Total Waviness of Numbers in Range I
// Link to the problem: https://leetcode.com/problems/total-waviness-of-numbers-in-range-i/
int totalWaviness(int num1, int num2)
{
    int ans = 0;
    for (int i = num1; i <= num2; i++)
    {
        char x[12];
        sprintf(x, "%d", i);
        int n = 0;
        while (x[n] != '\0')
        {
            n++;
        }
        for (int j = 1; j < n - 1; j++)
        {
            if (x[j] > x[j - 1] && x[j] > x[j + 1])
            {
                ans++;
            }
            if (x[j] < x[j - 1] && x[j] < x[j + 1])
            {
                ans++;
            }
        }
    }
    return ans;
}