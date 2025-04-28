// Problem: Find the Distance Value Between Two Arrays
// Link to the problem: https://leetcode.com/problems/find-the-distance-value-between-two-arrays/
class Solution
{
public:
    int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
    {
        int ans = 0;
        for (int i = 0; i < arr1.size(); i++)
        {
            bool x = true;
            for (int j = 0; j < arr2.size(); j++)
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