// Problem: Minimum Deletions to Make Array Divisible
// Link to the problem: https://leetcode.com/problems/minimum-deletions-to-make-array-divisible/
public class Solution
{
    public int Gcd(int a, int b)
    {
        return b == 0 ? a : Gcd(b, a % b);
    }
    public int MinOperations(int[] nums, int[] numsDivide)
    {
        int x = numsDivide[0];
        for (int i = 1; i < numsDivide.Length; i++)
        {
            x = Gcd(x, numsDivide[i]);
        }
        int ans = 0;
        SortedDictionary<int, int> y = new SortedDictionary<int, int>();
        for (int i = 0; i < nums.Length; i++)
        {
            if (y.ContainsKey(nums[i]))
            {
                y[nums[i]]++;
            }
            else
            {
                y[nums[i]] = 1;
            }
        }
        foreach (var kvp in y)
        {
            if (x % kvp.Key == 0)
            {
                break;
            }
            else
            {
                ans += kvp.Value;
            }
        }
        if (ans == nums.Length)
        {
            return -1;
        }
        else
        {
            return ans;
        }
    }
}