// Problem: Total Hamming Distance
// Link to the problem: https://leetcode.com/problems/total-hamming-distance/
class Solution
{
public:
    int totalHammingDistance(vector<int> &nums)
    {
        const int n = nums.size();
        int ans = 0;
        for (int i = 0; i < 32; i++)
        {
            int c = 0;
            for (const int &num : nums)
            {
                if ((num >> i) & 1)
                {
                    c++;
                }
            }
            ans += (c * (n - c));
        }
        return ans;
    }
};