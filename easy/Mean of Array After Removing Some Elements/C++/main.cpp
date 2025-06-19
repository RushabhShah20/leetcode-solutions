// Problem: Mean of Array After Removing Some Elements
// Link to the problem: https://leetcode.com/problems/mean-of-array-after-removing-some-elements/
class Solution
{
public:
    double trimMean(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        int total = 0;
        for (int i = arr.size() / 20; i < (arr.size() - (arr.size() / 20)); i++)
        {
            total += arr[i];
        }
        double ans = ((double)total) / (arr.size() * 0.9);
        return ans;
    }
};