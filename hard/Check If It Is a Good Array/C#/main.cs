// Problem: Check If It Is a Good Array
// Link to the problem: https://leetcode.com/problems/check-if-it-is-a-good-array/
public class Solution
{
    public int gcd(int a, int b)
    {
        if (b == 0)
        {
            return a;
        }
        else
        {
            return gcd(b, a % b);
        }
    }
    public bool IsGoodArray(int[] nums)
    {
        int ans = nums[0];
        for (int i = 1; i < nums.Length; i++)
        {
            ans = gcd(ans, nums[i]);
            if (ans == 1)
            {
                break;
            }
        }
        if (ans == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}