// Problem: Count Good Triplets
// Link to the problem: https://leetcode.com/problems/count-good-triplets/
public class Solution
{
    public int CountGoodTriplets(int[] arr, int a, int b, int c)
    {
        int n = arr.Length, ans = 0;
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (Math.Abs(arr[i] - arr[j]) > a)
                    {
                        continue;
                    }
                    if (Math.Abs(arr[j] - arr[k]) > b)
                    {
                        continue;
                    }
                    if (Math.Abs(arr[i] - arr[k]) > c)
                    {
                        continue;
                    }
                    ans++;
                }
            }
        }
        return ans;
    }
}