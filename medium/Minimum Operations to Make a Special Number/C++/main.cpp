// Problem: Minimum Operations to Make a Special Number
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-a-special-number/
class Solution
{
public:
    int minimumOperations(string num)
    {
        const int n = num.size();
        int ans = (num.find('0') != string::npos ? n - 1 : n);
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                const int x = (((num[i] - '0') * 10) + (num[j] - '0'));
                if (x % 25 == 0)
                {
                    ans = min(ans, n - i - 2);
                }
            }
        }
        return ans;
    }
};