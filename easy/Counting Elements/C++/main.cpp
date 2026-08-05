// Problem: Counting Elements
// Link to the problem: https://leetcode.com/problems/counting-elements/
class Solution
{
public:
    int countElements(vector<int> &arr)
    {
        const int n = arr.size();
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[arr[i]]++;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += m[arr[i] + 1] > 0 ? 1 : 0;
        }
        return ans;
    }
};