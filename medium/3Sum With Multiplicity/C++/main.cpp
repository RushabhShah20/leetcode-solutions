// Problem: 3Sum With Multiplicity
// Link to the problem: https://leetcode.com/problems/3sum-with-multiplicity/
class Solution
{
public:
    int threeSumMulti(vector<int> &arr, int target)
    {
        const int n = arr.size(), mod = 1000000007;
        unordered_map<int, int> m;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = (ans + m[target - arr[i]]) % mod;
            for (int j = 0; j < i; j++)
            {
                m[arr[i] + arr[j]]++;
            }
        }
        return ans;
    }
};