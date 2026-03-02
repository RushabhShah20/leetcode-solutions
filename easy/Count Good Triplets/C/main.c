// Problem: Count Good Triplets
// Link to the problem: https://leetcode.com/problems/count-good-triplets/

int countGoodTriplets(int *arr, int arrSize, int a, int b, int c)
{
    const int n = arrSize;
    int ans = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (abs(arr[i] - arr[j]) > a)
                {
                    continue;
                }
                if (abs(arr[j] - arr[k]) > b)
                {
                    continue;
                }
                if (abs(arr[i] - arr[k]) > c)
                {
                    continue;
                }
                ans++;
            }
        }
    }
    return ans;
}