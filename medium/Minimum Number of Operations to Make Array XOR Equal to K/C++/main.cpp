// Problem: Minimum Number of Operations to Make Array XOR Equal to K
// Link to the problem: https://leetcode.com/problems/minimum-number-of-operations-to-make-array-xor-equal-to-k/
class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        int ans = 0, n = nums.size();
        bitset<20> x(k);
        vector<bitset<20>> y(n);
        for (int i = 0; i < n; i++)
        {
            bitset<20> z(nums[i]);
            y[i] = z;
        }
        for (int j = 0; j < 20; j++)
        {
            int a = 0;
            for (int i = 0; i < n; i++)
            {
                a ^= y[i][j];
            }
            if (a != x[j])
            {
                ans++;
            }
        }
        return ans;
    }
};