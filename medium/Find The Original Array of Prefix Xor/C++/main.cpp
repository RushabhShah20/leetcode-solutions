// Problem: Find The Original Array of Prefix Xor
// Link to the problem: https://leetcode.com/problems/find-the-original-array-of-prefix-xor/
class Solution
{
public:
    vector<int> findArray(vector<int> &pref)
    {
        vector<int> ans(pref.size());
        ans[0] = pref[0];
        for (int i = 1; i < pref.size(); i++)
        {
            ans[i] = pref[i] ^ pref[i - 1];
        }
        return ans;
    }
};