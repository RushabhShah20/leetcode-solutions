// Problem: Find the Length of the Longest Common Prefix
// Link to the problem: https://leetcode.com/problems/find-the-length-of-the-longest-common-prefix/
class Solution
{
public:
    int longestCommonPrefix(vector<int> &arr1, vector<int> &arr2)
    {
        unordered_set<int> s;
        const int n = arr1.size(), m = arr2.size();
        for (int i = 0; i < n; i++)
        {
            while (s.find(arr1[i]) == s.end() && arr1[i] > 0)
            {
                s.insert(arr1[i]);
                arr1[i] /= 10;
            }
        }
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            while (s.find(arr2[i]) == s.end() && arr2[i] > 0)
            {
                arr2[i] /= 10;
            }
            if (arr2[i] > 0)
            {
                ans = max(ans, (int)log10(arr2[i]) + 1);
            }
        }
        return ans;
    }
};