// Problem: Determine if Two Events Have Conflict
// Link to the problem: https://leetcode.com/problems/determine-if-two-events-have-conflict/
class Solution
{
public:
    bool haveConflict(vector<string> &event1, vector<string> &event2)
    {
        int a = ((stoi(event1[0].substr(0, 2)) * 60) + (stoi(event1[0].substr(3, 2)))), b = ((stoi(event1[1].substr(0, 2)) * 60) + (stoi(event1[1].substr(3, 2)))), c = ((stoi(event2[0].substr(0, 2)) * 60) + (stoi(event2[0].substr(3, 2)))), d = ((stoi(event2[1].substr(0, 2)) * 60) + (stoi(event2[1].substr(3, 2))));
        if (a >= c && a <= d)
        {
            return true;
        }
        else if (b >= c && b <= d)
        {
            return true;
        }
        else if (c >= a && c <= b)
        {
            return true;
        }
        else if (d >= a && d <= b)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};