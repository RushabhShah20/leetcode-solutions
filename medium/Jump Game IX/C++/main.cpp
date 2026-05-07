// Problem: Jump Game IX
// Link to the problem: https://leetcode.com/problems/jump-game-ix/
class Solution
{
public:
    vector<int> maxValue(vector<int> &nums)
    {
        const int n = nums.size();
        vector<int> ans(n);
        stack<vector<int>> st;
        for (int i = 0; i < n; i++)
        {
            int x = nums[i], l = i, r = i;
            while (!st.empty() && st.top()[0] > nums[i])
            {
                const vector<int> a = st.top();
                st.pop();
                x = max(x, a[0]);
                l = a[1];
            }
            st.push({x, l, r});
        }
        while (!st.empty())
        {
            const vector<int> a = st.top();
            for (int j = a[1]; j <= a[2]; j++)
            {
                ans[j] = a[0];
            }
            st.pop();
        }
        return ans;
    }
};