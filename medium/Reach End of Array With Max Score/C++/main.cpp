// Problem: Reach End of Array With Max Score
// Link to the problem: https://leetcode.com/problems/reach-end-of-array-with-max-score/
class Solution
{
public:
    long long findMaximumScore(vector<int> &nums)
    {
        long long ans = 0, maxElement = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            ans += maxElement;
            maxElement = max(maxElement, (long long)(nums[i]));
        }
        return ans;
    }
};