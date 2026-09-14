// Problem: Even Number of Knight Moves
// Link to the problem: https://leetcode.com/problems/even-number-of-knight-moves/
class Solution
{
public:
    bool canReach(vector<int> &start, vector<int> &target)
    {
        const bool ans = (start[0] + start[1] & 1) == (target[0] + target[1] & 1);
        return ans;
    }
};