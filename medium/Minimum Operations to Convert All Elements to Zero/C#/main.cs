// Problem: Minimum Operations to Convert All Elements to Zero
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-convert-all-elements-to-zero/
public class Solution
{
    public int MinOperations(int[] nums)
    {
        int ans = 0, n = nums.Length;
        Stack<int> s = new Stack<int>();
        foreach (int num in nums)
        {
            while (s.Count != 0 && s.Peek() > num)
            {
                s.Pop();
            }
            if (num == 0)
            {
                continue;
            }
            if (s.Count == 0 || s.Peek() < num)
            {
                ans++;
                s.Push(num);
            }
        }
        return ans;
    }
}