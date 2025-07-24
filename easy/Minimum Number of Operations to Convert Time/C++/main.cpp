// Problem: Minimum Number of Operations to Convert Time
// Link to the problem: https://leetcode.com/problems/minimum-number-of-operations-to-convert-time/
class Solution
{
public:
    int minutes(string time)
    {
        string hh = time.substr(0, 2), mm = time.substr(3, 2);
        int h = stoi(hh), m = stoi(mm);
        return h * 60 + m;
    }
    int convertTime(string current, string correct)
    {
        int currMins = minutes(current), corrMins = minutes(correct);
        int diff = corrMins - currMins;
        int ans = (diff / 60) + ((diff % 60) / 15) + (((diff % 60) % 15) / 5) + (((diff % 60) % 15) % 5);
        return ans;
    }
};