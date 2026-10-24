// Problem: Count Days Spent Together
// Link to the problem: https://leetcode.com/problems/count-days-spent-together/
class Solution
{
public:
    int dayOfTheYear(const string &date, const vector<int> &a)
    {
        const int x = stoi(date.substr(0, 2)), y = stoi(date.substr(3, 2));
        const int ans = a[x - 1] + y;
        return ans;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob)
    {
        const vector<int> x = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        vector<int> y(13, 0);
        for (int i = 1; i < 13; i++)
        {
            y[i] = y[i - 1] + x[i - 1];
        }
        const int a = dayOfTheYear(arriveAlice, y), b = dayOfTheYear(leaveAlice, y), c = dayOfTheYear(arriveBob, y), d = dayOfTheYear(leaveBob, y);
        const int ans = max(0, min(b, d) - max(a, c) + 1);
        return ans;
    }
};