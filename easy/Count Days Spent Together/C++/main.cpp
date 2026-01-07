// Problem: Count Days Spent Together
// Link to the problem: https://leetcode.com/problems/count-days-spent-together/
class Solution
{
public:
    int dayOfTheYear(string date)
    {
        const int mm = stoi(date.substr(0, 2)), dd = stoi(date.substr(3, 2));
        int ans = 0;
        vector<int> months = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for (int i = 0; i < 12; i++)
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
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob)
    {
        const int arriveA = dayOfTheYear(arriveAlice), leaveA = dayOfTheYear(leaveAlice), arriveB = dayOfTheYear(arriveBob), leaveB = dayOfTheYear(leaveBob);
        int ans = 0;
        for (int i = 1; i <= 365; i++)
        {
            if (i >= arriveA && i <= leaveA && i >= arriveB && i <= leaveB)
            {
                ans++;
            }
        }
        return ans;
    }
};