// Problem: Sum of Values at Indices With K Set Bits
// Link to the problem: https://leetcode.com/problems/sum-of-values-at-indices-with-k-set-bits/
class Solution
{
public:
    vector<int> toBinary(int n)
    {
        vector<int> ans;
        while (n > 0)
        {
            int rem = n % 2;
            ans.push_back(rem);
            n /= 2;
        }
        return ans;
    }
    int setBits(vector<int> &arr)
    {
        int ans = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 1)
            {
                ans++;
            }
        }
        return ans;
    }
    int sumIndicesWithKSetBits(vector<int> &nums, int k)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            vector<int> a = toBinary(i);
            if (setBits(a) == k)
            {
                ans += nums[i];
            }
        }
        return ans;
    }
};