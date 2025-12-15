// Problem: Decode XORed Permutation
// Link to the problem: https://leetcode.com/problems/decode-xored-permutation/
class Solution
{
public:
    vector<int> decode(vector<int> &encoded)
    {
        int n = encoded.size() + 1;
        int x;
        switch (n % 4)
        {
        case 1:
            x = 1;
            break;
        case 2:
            x = n + 1;
            break;
        case 3:
            x = 0;
            break;
        default:
            x = n;
            break;
        }
        vector<int> ans(n);
        ans[0] = x;
        for (int i = 1; i < n - 1; i += 2)
        {
            ans[0] ^= encoded[i];
        }
        for (int i = 1; i < n; i++)
        {
            ans[i] = ans[i - 1] ^ encoded[i - 1];
        }
        return ans;
    }
};