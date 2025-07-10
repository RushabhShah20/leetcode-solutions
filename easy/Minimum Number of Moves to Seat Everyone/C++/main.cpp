// Problem: Minimum Number of Moves to Seat Everyone
// Link to the problem: https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/
class Solution
{
public:
    int minMovesToSeat(vector<int> &seats, vector<int> &students)
    {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int ans = 0;
        for (int i = 0; i < seats.size(); i++)
        {
            ans += abs(seats[i] - students[i]);
        }
        return ans;
    }
};