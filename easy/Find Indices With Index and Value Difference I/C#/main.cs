// Problem: Find Indices With Index and Value Difference I
// Link to the problem: https://leetcode.com/problems/find-indices-with-index-and-value-difference-i/
public class Solution
{
    public int[] FindIndices(int[] nums, int indexDifference, int valueDifference)
    {
        int[] ans = new int[2] { -1, -1 };
        for (int i = 0; i < nums.Length; i++)
        {
            for (int j = 0; j < nums.Length; j++)
            {
                if ((Math.Abs(i - j) >= indexDifference) && (Math.Abs(nums[i] - nums[j]) >= valueDifference))
                {
                    ans[0] = i;
                    ans[1] = j;
                    break;
                }
            }
        }
        return ans;
    }
}