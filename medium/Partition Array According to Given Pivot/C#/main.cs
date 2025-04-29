// Problem: Partition Array According to Given Pivot
// Link to the problem: https://leetcode.com/problems/partition-array-according-to-given-pivot/
public class Solution
{
    public int[] PivotArray(int[] nums, int pivot)
    {
        List<int> ans = new List<int>();
        List<int> less = new List<int>();
        List<int> equal = new List<int>();
        List<int> greater = new List<int>();
        for (int i = 0; i < nums.Length; i++)
        {
            if (nums[i] < pivot)
            {
                less.Add(nums[i]);
            }
            else if (nums[i] > pivot)
            {
                greater.Add(nums[i]);
            }
            else
            {
                equal.Add(nums[i]);
            }
        }
        ans.AddRange(less);
        ans.AddRange(equal);
        ans.AddRange(greater);
        return ans.ToArray();
    }
}