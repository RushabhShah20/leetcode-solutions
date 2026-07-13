// Problem: Number of Elapsed Seconds Between Two Times
// Link to the problem: https://leetcode.com/problems/number-of-elapsed-seconds-between-two-times/
class Solution
{
public:
    int seconds(const string &time)
    {
        const int ans = stoi(time.substr(0, 2)) * 3600 + stoi(time.substr(3, 2)) * 60 + stoi(time.substr(6, 2));
        return ans;
    }
    int secondsBetweenTimes(string startTime, string endTime)
    {
        const int x = seconds(startTime), y = seconds(endTime), ans = y - x;
        return ans;
    }
};