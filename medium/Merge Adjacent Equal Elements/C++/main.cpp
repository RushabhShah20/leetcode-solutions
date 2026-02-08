// Problem: Merge Adjacent Equal Elements
// Link to the problem: https://leetcode.com/problems/merge-adjacent-equal-elements/
class Solution
{
public:
    vector<long long> mergeAdjacent(vector<int> &nums)
    {
        stack<long long> st;
        for (const int num : nums)
        {
            long long x = num;
            while (!st.empty() && st.top() == x)
            {
                st.pop();
                x *= 2;
            }
            st.push(x);
        }
        vector<long long> ans;
        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};