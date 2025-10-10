// Problem: Design a Stack With Increment Operation
// Link to the problem: https://leetcode.com/problems/design-a-stack-with-increment-operation/
public class CustomStack
{
    List<int> ans = new List<int>();
    int n = 0;

    public CustomStack(int maxSize)
    {
        n = maxSize;
    }

    public void Push(int x)
    {
        if (ans.Count < n)
        {
            ans.Add(x);
        }
    }

    public int Pop()
    {
        if (ans.Count == 0)
        {
            return -1;
        }
        else
        {
            int x = ans[ans.Count - 1];
            ans.RemoveAt(ans.Count - 1);
            return x;
        }
    }

    public void Increment(int k, int val)
    {
        for (int i = 0; i < Math.Min(k, ans.Count); i++)
        {
            ans[i] += val;
        }
    }
}

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack obj = new CustomStack(maxSize);
 * obj.Push(x);
 * int param_2 = obj.Pop();
 * obj.Increment(k,val);
 */