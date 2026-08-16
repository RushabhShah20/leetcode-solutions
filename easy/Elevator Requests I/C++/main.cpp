// Problem: Elevator Requests I
// Link to the problem: https://leetcode.com/problems/elevator-requests-i/
class Solution
{
public:
    int elevatorRequests(int n, vector<int> &requests)
    {
        const int m = requests.size();
        int ans = 0, y = 0;
        for (int i = 0; i < m; i++)
        {
            const int x = requests[i];
            ans += abs(x - y);
            y = x;
        }
        return ans;
    }
};