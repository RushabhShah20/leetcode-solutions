// Problem: Pass the Pillow
// Link to the problem: https://leetcode.com/problems/pass-the-pillow/
class Solution
{
public:
    int passThePillow(int n, int time)
    {
        vector<int> ans;
        for (int i = 1; i <= n; i++)
        {
            ans.push_back(i);
        }
        for (int i = n - 1; i > 1; i--)
        {
            ans.push_back(i);
        }
        return ans[(time % ans.size())];
    }
};