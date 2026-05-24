// Problem: Password Strength
// Link to the problem: https://leetcode.com/problems/password-strength/
class Solution
{
public:
    int passwordStrength(string password)
    {
        unordered_set<char> a, b, c, d;
        const int n = password.size();
        for (int i = 0; i < n; i++)
        {
            if (islower(password[i]))
            {
                a.insert(password[i]);
            }
            else if (isupper(password[i]))
            {
                b.insert(password[i]);
            }
            else if (isdigit(password[i]))
            {
                c.insert(password[i]);
            }
            else
            {
                d.insert(password[i]);
            }
        }
        const int ans = a.size() + 2 * b.size() + 3 * c.size() + 5 * d.size();
        return ans;
    }
};