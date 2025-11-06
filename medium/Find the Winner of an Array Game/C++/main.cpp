// Problem: Find the Winner of an Array Game
// Link to the problem: https://leetcode.com/problems/find-the-winner-of-an-array-game/
class Solution
{
public:
    int getWinner(vector<int> &arr, int k)
    {
        deque<int> q(arr.begin(), arr.end());
        int n = arr.size();
        int y = *max_element(arr.begin(), arr.end());
        if (k >= n)
        {
            return y;
        }
        else
        {
            map<int, int> x;
            int ans = q[0];
            while (x[q[0]] != k)
            {
                if (q[0] > q[1])
                {
                    int z = q[1];
                    x[q[0]]++;
                    ans = q[0];
                    q.erase(q.begin() + 1);
                    q.push_back(z);
                    if (x[q[0]] == k)
                    {
                        break;
                    }
                }
                else
                {
                    int z = q[0];
                    x[q[1]]++;
                    ans = q[1];
                    q.erase(q.begin());
                    q.push_back(z);
                    if (x[q[1]] == k)
                    {
                        break;
                    }
                }
            }
            return ans;
        }
    }
};