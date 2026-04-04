// Problem: Decode the Slanted Ciphertext
// Link to the problem: https://leetcode.com/problems/decode-the-slanted-ciphertext/
class Solution
{
public:
    string decodeCiphertext(string encodedText, int rows)
    {
        string ans;
        const int m = rows, n = encodedText.size() / m;
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < m; i++)
            {
                if (i + j >= n)
                {
                    break;
                }
                ans += encodedText[i * n + j + i];
            }
        }
        while (!ans.empty() && ans.back() == ' ')
        {
            ans.pop_back();
        }
        return ans;
    }
};