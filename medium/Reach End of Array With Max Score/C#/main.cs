// Problem: Reach End of Array With Max Score
// Link to the problem: https://leetcode.com/problems/reach-end-of-array-with-max-score/
public class Solution
{
    public long FindMaximumScore(IList<int> nums)
    {
        long ans = 0, maxElement = 0;
        for (int i = 0; i < nums.Count; i++)
        {
            ans += maxElement;
            maxElement = Math.Max(maxElement, (long)(nums[i]));
        }
        return ans;
    }
}