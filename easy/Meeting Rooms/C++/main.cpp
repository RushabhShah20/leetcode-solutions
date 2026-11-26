// Problem: Meeting Rooms
// Link to the problem: https://leetcode.com/problems/meeting-rooms/
class Solution
{
public:
    bool canAttendMeetings(vector<vector<int>> &intervals)
    {
        const int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        for (int i = 1; i < n; i++)
        {
            if (intervals[i][0] < intervals[i - 1][1])
            {
                return false;
            }
        }
        return true;
    }
};