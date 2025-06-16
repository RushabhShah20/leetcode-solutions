// Problem: Latest Time by Replacing Hidden Digits
// Link to the problem: https://leetcode.com/problems/latest-time-by-replacing-hidden-digits/
class Solution
{
public:
    string maximumTime(string time)
    {
        if (time[4] == '?')
        {
            time[4] = '9';
        }
        if (time[3] == '?')
        {
            time[3] = '5';
        }
        if (time[1] == '?')
        {
            if (time[0] == '0' || time[0] == '1')
            {
                time[1] = '9';
            }
            else
            {
                time[1] = '3';
            }
        }
        if (time[0] == '?')
        {
            if (time[1] == '4' || time[1] == '5' || time[1] == '6' || time[1] == '7' || time[1] == '8' || time[1] == '9')
            {
                time[0] = '1';
            }
            else
            {
                time[0] = '2';
            }
        }
        return time;
    }
};