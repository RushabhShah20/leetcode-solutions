// Problem: Number of Laser Beams in a Bank
// Link to the problem: https://leetcode.com/problems/number-of-laser-beams-in-a-bank/
class Solution
{
public:
    int numberOfBeams(vector<string> &bank)
    {
        int ans = 0, prev = 0;
        for (string s : bank)
        {
            int count = 0;
            for (char c : s)
            {
                if (c == '1')
                {
                    count++;
                }
            }
            ans += (count * prev);
            if (count > 0)
            {
                prev = count;
            }
        }
        return ans;
    }
};