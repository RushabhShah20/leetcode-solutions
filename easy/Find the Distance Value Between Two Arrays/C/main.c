// Problem: Find the Distance Value Between Two Arrays
// Link to the problem: https://leetcode.com/problems/find-the-distance-value-between-two-arrays/
int findTheDistanceValue(int *arr1, int arr1Size, int *arr2, int arr2Size, int d)
{
    const int n = arr1Size, m = arr2Size;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        bool x = true;
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j] || abs(arr1[i] - arr2[j]) <= d)
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