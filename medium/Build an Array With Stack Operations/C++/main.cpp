// Problem: Build an Array With Stack Operations
// Link to the problem: https://leetcode.com/problems/build-an-array-with-stack-operations/
class Solution
{
public:
    vector<string> buildArray(vector<int> &target, int n)
    {
        vector<string> ans;
        vector<int> dup;
        for (int i = 1; i <= n; i++)
        {
            if (dup == target)
            {
                break;
            }
            if (find(target.begin(), target.end(), i) == target.end())
            {
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            else
            {
                ans.push_back("Push");
                dup.push_back(i);
            }
        }
        return ans;
    }
};