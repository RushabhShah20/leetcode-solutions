// Problem: Day of the Year
// Link to the problem: https://leetcode.com/problems/day-of-the-year/
class Solution
{
public:
    int dayOfYear(string date)
    {
        int yyyy = stoi(date.substr(0, 4));
        int mm = stoi(date.substr(5, 2));
        int dd = stoi(date.substr(8, 2));
        if ((yyyy % 4 == 0) && (yyyy % 100 != 0 || yyyy % 400 == 0))
        {
            int ans = 0;
            vector<int> months = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            for (int i = 0; i < months.size(); i++)
            {
                if (i != (mm - 1))
                {
                    ans += months[i];
                }
                else
                {
                    break;
                }
            }
            ans += dd;
            return ans;
        }
        else
        {
            int ans = 0;
            vector<int> months = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            for (int i = 0; i < months.size(); i++)
            {
                if (i != (mm - 1))
                {
                    ans += months[i];
                }
                else
                {
                    break;
                }
            }
            ans += dd;
            return ans;
        }
    }
};