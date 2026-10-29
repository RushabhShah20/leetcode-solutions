// Problem: Unique Email Addresses
// Link to the problem: https://leetcode.com/problems/unique-email-addresses/
class Solution
{
public:
    int numUniqueEmails(vector<string> &emails)
    {
        const int n = emails.size();
        unordered_set<string> s;
        for (int i = 0; i < n; i++)
        {
            const int m = emails[i].size();
            bool x = true, y = false;
            string t;
            for (int j = 0; j < m; j++)
            {
                if (emails[i][j] == '+')
                {
                    x = false;
                }
                if (emails[i][j] == '@')
                {
                    y = true;
                }
                if ((x && islower(emails[i][j])) || y)
                {
                    t.append(1, emails[i][j]);
                }
            }
            s.insert(t);
        }
        const int ans = s.size();
        return ans;
    }
};