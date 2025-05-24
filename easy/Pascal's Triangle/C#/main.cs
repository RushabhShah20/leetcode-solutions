// Problem: Pascal's Triangle
// Link to the problem: https://leetcode.com/problems/pascals-triangle/
public class Solution
{
    public IList<IList<int>> Generate(int numRows)
    {
        IList<IList<int>> ans = new List<IList<int>>();
        if (numRows <= 0)
        {
            return ans;
        }
        IList<int> pre = new List<int>();
        pre.Add(1);
        ans.Add(pre);
        for (int i = 2; i <= numRows; i++)
        {
            IList<int> cur = new List<int>();
            cur.Add(1);
            for (int j = 0; j < pre.Count - 1; j++)
            {
                cur.Add(pre[j] + pre[j + 1]);
            }
            cur.Add(1);
            ans.Add(cur);
            pre = cur;
        }
        return ans;
    }
}