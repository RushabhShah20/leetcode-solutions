// Problem: Next Greater Element I
// Link to the problem: https://leetcode.com/problems/next-greater-element-i/
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        const int n = nums1.size();
        stack<int> st;
        unordered_map<int, int> m;
        vector<int> ans(n);
        for (const int &num : nums2)
        {
            while (!st.empty() && st.top() < num)
            {
                m[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }
        for (int i = 0; i < n; i++)
        {
            if (m.count(nums1[i]))
            {
                ans[i] = m[nums1[i]];
            }
            else
            {
                ans[i] = -1;
            }
        }
        return ans;
    }
};