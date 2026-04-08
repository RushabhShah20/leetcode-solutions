// Problem: XOR After Range Multiplication Queries I
// Link to the problem: https://leetcode.com/problems/xor-after-range-multiplication-queries-i/
public class Solution
{
    public int XorAfterQueries(int[] nums, int[][] queries)
    {
        int mod = 1000000007;
        foreach (int[] query in queries)
        {
            for (int i = query[0]; i <= query[1]; i += query[2])
            {
                nums[i] = (int)(((long)nums[i] * (long)query[3]) % mod);
            }
        }
        int ans = 0;
        foreach (int num in nums)
        {
            ans ^= num;
        }
        return ans;
    }
}