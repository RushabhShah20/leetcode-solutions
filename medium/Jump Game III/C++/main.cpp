// Problem: Jump Game III
// Link to the problem: https://leetcode.com/problems/jump-game-iii/
class Solution
{
public:
    bool canReach(vector<int> &arr, int start)
    {
        const int n = arr.size();
        queue<int> q;
        q.push(start);
        while (!q.empty())
        {
            start = q.front();
            q.pop();
            if (arr[start] == 0)
            {
                return true;
            }
            if (arr[start] < 0)
            {
                continue;
            }
            if (start + arr[start] < n)
            {
                q.push(start + arr[start]);
            }
            if (start - arr[start] >= 0)
            {
                q.push(start - arr[start]);
            }
            arr[start] *= -1;
        }
        return false;
    }
};