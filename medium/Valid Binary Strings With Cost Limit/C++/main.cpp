// Problem: Valid Binary Strings With Cost Limit
// Link to the problem: https://leetcode.com/problems/valid-binary-strings-with-cost-limit/
class Solution
{
public:
    void generate(const int idx, const int currCost, const bool isPrevOne, const string &curr, const int n, const int k, vector<string> &ans)
    {
        if (idx == n)
        {
            ans.push_back(curr);
            return;
        }
        generate(idx + 1, currCost, false, curr + "0", n, k, ans);
        if (!isPrevOne && currCost + idx <= k)
        {
            generate(idx + 1, currCost + idx, true, curr + "1", n, k, ans);
        }
    }
    vector<string> generateValidStrings(int n, int k)
    {
        vector<string> ans;
        generate(0, 0, false, "", n, k, ans);
        return ans;
    }
};