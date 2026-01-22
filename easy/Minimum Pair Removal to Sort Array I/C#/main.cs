// Problem: Minimum Pair Removal to Sort Array I
// Link to the problem: https://leetcode.com/problems/minimum-pair-removal-to-sort-array-i/
public class Solution

{
    public bool IsSorted(List<int> nums)
    {
        for (int i = 0; i < nums.Count - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                return false;
            }
        }
        return true;
    }
    public int MinimumPairRemoval(int[] nums)
    {
        int ans = 0;
        List<int> numsList = new List<int>(nums);
        while (!IsSorted(numsList))
        {
            int minSum = numsList[0] + numsList[1];
            for (int i = 1; i < numsList.Count - 1; i++)
            {
                int currSum = numsList[i] + numsList[i + 1];
                minSum = Math.Min(minSum, currSum);
            }
            for (int i = 0; i < numsList.Count - 1; i++)
            {
                int currSum = numsList[i] + numsList[i + 1];
                if (currSum == minSum)
                {
                    numsList.RemoveRange(i, 2);
                    numsList.Insert(i, currSum);
                    break;
                }
            }
            ans++;
        }
        return ans;
    }
}