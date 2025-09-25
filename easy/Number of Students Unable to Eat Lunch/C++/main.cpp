// Problem: Number of Students Unable to Eat Lunch
// Link to the problem: https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/
class Solution
{
public:
    int countStudents(vector<int> &students, vector<int> &sandwiches)
    {
        int count = 0;
        queue<int> q(students.begin(), students.end());
        reverse(sandwiches.begin(), sandwiches.end());
        stack<int> s(sandwiches.begin(), sandwiches.end());
        while (!q.empty())
        {
            if (q.front() == s.top())
            {
                s.pop();
                q.pop();
                count = 0;
            }
            else
            {
                int x = q.front();
                q.pop();
                q.push(x);
                count++;
            }
            if (count == q.size())
            {
                break;
            }
        }
        return q.size();
    }
};