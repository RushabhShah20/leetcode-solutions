// Problem: Largest Rectangle in Histogram
// Link to the problem: https://leetcode.com/problems/largest-rectangle-in-histogram/
class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size(), ans = 0;
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && heights[st.top()] >= heights[i])
            {
                int t = st.top();
                st.pop();
                int m = st.empty() ? i : i - st.top() - 1;
                ans = max(ans, heights[t] * m);
            }
            st.push(i);
        }
        while (!st.empty())
        {
            int t = st.top();
            st.pop();
            int m = st.empty() ? n : n - st.top() - 1;
            ans = max(ans, heights[t] * m);
        }
        return ans;
    }
};