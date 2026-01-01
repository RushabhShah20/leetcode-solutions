// Problem: Bulls and Cows
// Link to the problem: https://leetcode.com/problems/bulls-and-cows/
class Solution
{
public:
    string getHint(string secret, string guess)
    {
        const int n = secret.size();
        int a = 0, b = 0;
        vector<int> x(10, 0), y(10, 0);
        for (int i = 0; i < n; i++)
        {
            if (secret[i] == guess[i])
            {
                a++;
            }
            else
            {
                x[secret[i] - '0']++;
                y[guess[i] - '0']++;
            }
        }
        for (int i = 0; i < 10; i++)
        {
            b += min(x[i], y[i]);
        }
        const string ans = to_string(a) + "A" + to_string(b) + "B";
        return ans;
    }
};