// Problem: Last Moment Before All Ants Fall Out of a Plank
// Link to the problem: https://leetcode.com/problems/last-moment-before-all-ants-fall-out-of-a-plank/
class Solution
{
public:
    int getLastMoment(int n, vector<int> &left, vector<int> &right)
    {
        if (left.empty() && !right.empty())
        {
            int y = n - *min_element(right.begin(), right.end());
            return y;
        }
        else if (!left.empty() && right.empty())
        {
            int x = *max_element(left.begin(), left.end());
            return x;
        }
        else if (!left.empty() && !right.empty())
        {
            int x = *max_element(left.begin(), left.end()), y = n - *min_element(right.begin(), right.end());
            return max(x, y);
        }
        else
        {
            return 0;
        }
    }
};
