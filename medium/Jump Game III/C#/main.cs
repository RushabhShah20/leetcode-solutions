// Problem: Jump Game III
// Link to the problem: https://leetcode.com/problems/jump-game-iii/
public class Solution
{
    public bool CanReach(int[] arr, int start)
    {
        int n = arr.Length;
        Queue<int> q = new Queue<int>();
        q.Enqueue(start);
        while (q.Count != 0)
        {
            start = q.Peek();
            q.Dequeue();
            if (arr[start] == 0)
            {
                return true;
            }
            if (arr[start] < 0)
            {
                continue;
            }
            if (start + arr[start] < n)
            {
                q.Enqueue(start + arr[start]);
            }
            if (start - arr[start] >= 0)
            {
                q.Enqueue(start - arr[start]);
            }
            arr[start] *= -1;
        }
        return false;
    }
}