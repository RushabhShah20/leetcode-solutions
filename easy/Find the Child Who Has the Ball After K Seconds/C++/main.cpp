// Problem: Find the Child Who Has the Ball After K Seconds
// Link to the problem: https://leetcode.com/problems/find-the-child-who-has-the-ball-after-k-seconds/
class Solution
{
public:
    int numberOfChild(int n, int k)
    {
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            ans.push_back(i);
        }
        for (int i = n - 2; i > 0; i--)
        {
            ans.push_back(i);
        }
        return ans[(k % ans.size())];
    }
};