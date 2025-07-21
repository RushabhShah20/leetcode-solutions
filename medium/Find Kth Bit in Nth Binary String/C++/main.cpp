// Problem: Find Kth Bit in Nth Binary String
// Link to the problem: https://leetcode.com/problems/find-kth-bit-in-nth-binary-string/
class Solution
{
public:
    char findKthBit(int n, int k)
    {
        string ans = "0";
        for (int i = 1; i < n; i++)
        {
            string x = ans;
            for (int j = 0; j < x.size(); j++)
            {
                if (x[j] == '1')
                {
                    x[j] = '0';
                }
                else if (x[j] == '0')
                {
                    x[j] = '1';
                }
            }
            reverse(x.begin(), x.end());
            ans += ('1' + x);
        }
        return ans[k - 1];
    }
};