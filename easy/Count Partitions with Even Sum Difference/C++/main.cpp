// Problem: Count Partitions with Even Sum Difference
// Link to the problem: https://leetcode.com/problems/count-partitions-with-even-sum-difference/
class Solution
{
public:
    int countPartitions(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            vector<int> prefix(nums.begin(), nums.begin() + i + 1);
            vector<int> suffix(nums.begin() + i + 1, nums.end());
            int prefixSum = 0, suffixSum = 0;
            for (int j = 0; j < prefix.size(); j++)
            {
                prefixSum += prefix[j];
            }
            for (int j = 0; j < suffix.size(); j++)
            {
                suffixSum += suffix[j];
            }
            if ((prefixSum - suffixSum) % 2 == 0)
            {
                ans++;
            }
        }
        return ans;
    }
};