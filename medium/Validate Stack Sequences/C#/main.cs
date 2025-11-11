// Problem: Validate Stack Sequences
// Link to the problem: https://leetcode.com/problems/validate-stack-sequences/
public class Solution
{
    public bool ValidateStackSequences(int[] pushed, int[] popped)
    {
        Stack<int> s = new Stack<int>();
        int i = 0, j = 0, n = pushed.Length;
        s.Push(pushed[i]);
        i++;
        while (i < n && j < n)
        {
            if (s.Count == 0)
            {
                s.Push(pushed[i]);
                i++;
            }
            if (s.Peek() == popped[j])
            {
                s.Pop();
                j++;
            }
            else
            {
                s.Push(pushed[i]);
                i++;
            }
        }
        while (j < n)
        {
            if (s.Peek() == popped[j])
            {
                s.Pop();
                j++;
            }
            else
            {
                break;
            }
        }
        if (s.Count == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}