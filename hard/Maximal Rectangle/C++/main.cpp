// Problem: Maximal Rectangle
// Link to the problem: https://leetcode.com/problems/maximal-rectangle/
class Solution
{
public:
    int maximalRectangle(vector<vector<char>> &matrix)
    {
        const int n = matrix.size(), m = matrix[0].size();
        vector<int> a(m + 1, 0);
        int ans = 0;
        for (const vector<char> &rows : matrix)
        {
            for (int i = 0; i < m; i++)
            {
                if (rows[i] == '1')
                {
                    a[i]++;
                }
                else
                {
                    a[i] = 0;
                }
            }
            stack<int> st;
            st.push(-1);
            for (int i = 0; i <= m; i++)
            {
                int b;
                if (i < m)
                {
                    b = a[i];
                }
                else
                {
                    b = 0;
                }
                while (st.top() != -1 && a[st.top()] >= b)
                {
                    int c = a[st.top()];
                    st.pop();
                    int d = i - st.top() - 1;
                    ans = max(ans, c * d);
                }
                st.push(i);
            }
        }
        return ans;
    }
};