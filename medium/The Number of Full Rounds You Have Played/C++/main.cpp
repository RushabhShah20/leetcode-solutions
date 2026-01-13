// Problem: The Number of Full Rounds You Have Played
// Link to the problem: https://leetcode.com/problems/the-number-of-full-rounds-you-have-played/
class Solution
{
public:
    int minutes(string time)
    {
        const string hh = time.substr(0, 2), mm = time.substr(3, 2);
        const int h = stoi(hh), m = stoi(mm);
        return h * 60 + m;
    }
    int numberOfRounds(string loginTime, string logoutTime)
    {
        int x = minutes(loginTime), y = minutes(logoutTime);
        if (y < x)
        {
            y += 1440;
        }
        int ans = 0;
        for (int i = x; i <= y; i++)
        {
            if (i % 15 == 0)
            {
                ans++;
            }
        }
        if (ans > 0)
        {
            ans--;
        }
        return ans;
    }
};