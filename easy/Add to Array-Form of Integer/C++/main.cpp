// Problem: Add to Array-Form of Integer
// Link to the problem: https://leetcode.com/problems/add-to-array-form-of-integer/
class Solution
{
public:
    vector<int> addToArrayForm(vector<int> &num, int k)
    {
        vector<int> ans;
        for (int i = num.size() - 1; i >= 0; i--)
        {
            ans.insert(ans.begin(), (num[i] + k) % 10);
            k = (num[i] + k) / 10;
        }
        while (k > 0)
        {
            ans.insert(ans.begin(), k % 10);
            k /= 10;
        }
        return ans;
    }
};