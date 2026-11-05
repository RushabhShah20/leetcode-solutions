// Problem: Find the Distance Value Between Two Arrays
// Link to the problem: https://leetcode.com/problems/find-the-distance-value-between-two-arrays/
class Solution
{
public:
    int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
    {
        const int n = arr1.size(), m = arr2.size();
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
};