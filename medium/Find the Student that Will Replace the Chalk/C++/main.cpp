// Problem: Find the Student that Will Replace the Chalk
// Link to the problem: https://leetcode.com/problems/find-the-student-that-will-replace-the-chalk/
class Solution
{
public:
    int chalkReplacer(vector<int> &chalk, int k)
    {
        unsigned long long sum = 0;
        for (int i = 0; i < chalk.size(); i++)
        {
            sum += chalk[i];
        }
        k %= sum;
        int ans = -1;
        for (int i = 0; i < chalk.size(); i++)
        {
            if (k >= chalk[i])
            {
                k -= chalk[i];
            }
            else
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
};