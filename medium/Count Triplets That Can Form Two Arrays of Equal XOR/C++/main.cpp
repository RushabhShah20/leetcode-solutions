// Problem: Count Triplets That Can Form Two Arrays of Equal XOR
// Link to the problem: https://leetcode.com/problems/count-triplets-that-can-form-two-arrays-of-equal-xor/
class Solution
{
public:
    int countTriplets(vector<int> &arr)
    {
        int n = arr.size(), ans = 0;
        vector<int> prefix(n + 1, 0);
        prefix[0] = arr[0];
        for (int i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i] ^ arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int k = i + 1; k <= n; k++)
            {
                if (prefix[i] == prefix[k])
                {
                    ans += (k - i - 1);
                }
            }
        }
        return ans;
    }
};