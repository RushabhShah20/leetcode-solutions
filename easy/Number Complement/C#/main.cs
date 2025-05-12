// Problem: Number Complement
// Link to the problem: https://leetcode.com/problems/number-complement/
public class Solution
{
    List<int> toBinary(int n)
    {
        List<int> ans = new List<int>();
        while (n > 0)
        {
            int rem = n % 2;
            ans.Add(rem);
            n /= 2;
        }
        return ans;
    }
    List<int> complement(List<int> res)
    {
        for (int i = 0; i < res.Count; i++)
        {
            if (res[i] == 1)
            {
                res[i] = 0;
            }
            else if (res[i] == 0)
            {
                res[i] = 1;
            }
        }
        return res;
    }
    public int FindComplement(int num)
    {
        int ans = 0;
        List<int> binary = toBinary(num);
        List<int> com = complement(binary);
        for (int i = 0; i < com.Count; i++)
        {
            ans += (int)Math.Pow(2, i) * com[i];
        }
        return ans;
    }
}