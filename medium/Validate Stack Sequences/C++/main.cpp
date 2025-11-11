// Problem: Validate Stack Sequences
// Link to the problem: https://leetcode.com/problems/validate-stack-sequences/
class Solution
{
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {
        stack<int> s;
        int i = 0, j = 0, n = pushed.size();
        s.push(pushed[i]);
        i++;
        while (i < n && j < n)
        {
            if (s.empty())
            {
                s.push(pushed[i]);
                i++;
            }
            if (s.top() == popped[j])
            {
                s.pop();
                j++;
            }
            else
            {
                s.push(pushed[i]);
                i++;
            }
        }
        while (j < n)
        {
            if (s.top() == popped[j])
            {
                s.pop();
                j++;
            }
            else
            {
                break;
            }
        }
        if (s.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};