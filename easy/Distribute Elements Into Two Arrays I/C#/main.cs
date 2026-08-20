// Problem: Distribute Elements Into Two Arrays I
// Link to the problem: https://leetcode.com/problems/distribute-elements-into-two-arrays-i/
public class Solution
{
    public void reverse(int[] arr, int l, int r)
    {
        while (l <= r)
        {
            int x = arr[l];
            arr[l] = arr[r];
            arr[r] = x;
            l++;
            r--;
        }
    }
    public int[] ResultArray(int[] nums)
    {
        int n = nums.Length;
        int[] ans = new int[n];
        ans[0] = nums[0];
        ans[n - 1] = nums[1];
        int l = 0, r = n - 1;
        for (int i = 2; i < n; i++)
        {
            if (ans[l] > ans[r])
            {
                l++;
                ans[l] = nums[i];
            }
            else
            {
                r--;
                ans[r] = nums[i];
            }
        }
        reverse(ans, r, n - 1);
        return ans;
    }
}