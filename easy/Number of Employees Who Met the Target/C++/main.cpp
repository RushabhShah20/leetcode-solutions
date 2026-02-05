// Problem: Number of Employees Who Met the Target
// Link to the problem: https://leetcode.com/problems/number-of-employees-who-met-the-target/
class Solution
{
public:
    int numberOfEmployeesWhoMetTarget(vector<int> &hours, int target)
    {
        int ans = 0;
        for (const int &hour : hours)
        {
            if (hour >= target)
            {
                ans++;
            }
        }
        return ans;
    }
};