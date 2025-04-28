// Problem: Find the Distance Value Between Two Arrays
// Link to the problem: https://leetcode.com/problems/find-the-distance-value-between-two-arrays/
public class Solution
{
    public int FindTheDistanceValue(int[] arr1, int[] arr2, int d)
    {
        int ans = 0;
        for (int i = 0; i < arr1.Length; i++)
        {
            bool x = true;
            for (int j = 0; j < arr2.Length; j++)
            {
                if (arr1[i] == arr2[j] || Math.Abs(arr1[i] - arr2[j]) <= d)
                {
                    x = false;
                    break;
                }
            }
            if (x == true)
            {
                ans++;
            }
        }
        return ans;
    }
}