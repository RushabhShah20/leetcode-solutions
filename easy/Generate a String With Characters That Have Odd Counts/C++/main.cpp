// Problem: Generate a String With Characters That Have Odd Counts
// Link to the problem: https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/
class Solution
{
public:
    string generateTheString(int n)
    {
        if (n % 2 == 0)
        {
            string ans(n - 1, 'a');
            ans += 'b';
            return ans;
        }
        else
        {
            string ans(n, 'a');
            return ans;
        }
    }
};