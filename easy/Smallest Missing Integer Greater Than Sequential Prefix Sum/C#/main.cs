// Problem: Smallest Missing Integer Greater Than Sequential Prefix Sum
// Link to the problem: https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/
public class Solution
{
    public int MissingInteger(int[] nums)
    {
        int n = nums.Length;
        HashSet<int> s = new HashSet<int>(nums);
        int m = 1;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == nums[i - 1] + 1)
            {
                m++;
            }
            else
            {
                break;
            }
        }
        int ans = (nums[m - 1] + nums[0]) * m / 2;
        while (s.Contains(ans))
        {
            ans++;
        }
        return ans;
    }
}
