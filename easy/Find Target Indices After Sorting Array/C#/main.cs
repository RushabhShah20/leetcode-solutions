// Problem: Find Target Indices After Sorting Array
// Link to the problem: https://leetcode.com/problems/find-target-indices-after-sorting-array/
public class Solution
{
    public IList<int> TargetIndices(int[] nums, int target)
    {
        int n = nums.Length, x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] < target)
            {
                x++;
            }
            else if (nums[i] == target)
            {
                y++;
            }
        }
        IList<int> ans = new List<int>();
        for (int i = x; i < x + y; i++)
        {
            ans.Add(i);
        }
        return ans;
    }
}