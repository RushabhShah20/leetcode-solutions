// Problem: Minimum Number of Chairs in a Waiting Room
// Link to the problem: https://leetcode.com/problems/minimum-number-of-chairs-in-a-waiting-room/
class Solution
{
public:
    int minimumChairs(string s)
    {
        int ans = 0, count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'E')
            {
                count++;
            }
            else
            {
                count--;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};