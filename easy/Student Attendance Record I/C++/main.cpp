// Problem: Student Attendance Record I
// Link to the problem: https://leetcode.com/problems/student-attendance-record-i/
class Solution
{
public:
    bool checkRecord(string s)
    {
        int countLate = 0, countAbsent = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
            {
                countAbsent++;
                if (countAbsent == 2)
                {
                    return false;
                }
            }
            if (s[i] == 'L')
            {
                countLate++;
                if (countLate == 3)
                {
                    return false;
                }
            }
            else
            {
                countLate = 0;
            }
        }
        return true;
    }
};