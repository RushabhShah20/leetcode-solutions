// Problem: Total Waviness of Numbers in Range I
// Link to the problem: https://leetcode.com/problems/total-waviness-of-numbers-in-range-i/
class Solution
{
public:
    int totalWaviness(int num1, int num2)
    {
        int ans = 0;
        for (int i = num1; i <= num2; i++)
        {
            string x = to_string(i);
            for (int j = 1; j < x.size() - 1; j++)
            {
                if (((x[j] - '0') > (x[j - 1] - '0')) && ((x[j] - '0') > (x[j + 1] - '0')))
                {
                    ans++;
                }
                if ((x[j] - '0') < (x[j - 1] - '0') && (x[j] - '0') < (x[j + 1] - '0'))
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};