// Problem: Number of Alternating XOR Partitions
// Link to the problem: https://leetcode.com/problems/number-of-alternating-xor-partitions/
class Solution
{
public:
    int alternatingXOR(vector<int> &nums, int target1, int target2)
    {
        const int n = nums.size(), mod = 1000000007;
        vector<int> dp1(n, 0), dp2(n, 0);
        unordered_map<int, int> mp1, mp2;
        mp1[0]++;
        mp2[0]++;
        int x = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            x ^= nums[i];
            dp1[i] = mp2[x ^ target1];
            dp2[i] = mp1[x ^ target2];
            mp1[x] = (mp1[x] + dp1[i]) % mod;
            mp2[x] = (mp2[x] + dp2[i]) % mod;
        }
        const int ans = dp1[0];
        return ans;
    }
};