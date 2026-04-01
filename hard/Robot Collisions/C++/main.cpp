// Problem: Robot Collisions
// Link to the problem: https://leetcode.com/problems/robot-collisions/
class Solution
{
public:
    vector<int> survivedRobotsHealths(vector<int> &positions, vector<int> &healths, string directions)
    {
        const int n = positions.size();
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = i;
        }
        sort(a.begin(), a.end(), [&](const int a, const int b)
             { return positions[a] < positions[b]; });
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            if (directions[a[i]] == 'R')
            {
                st.push(a[i]);
            }
            else
            {
                while (!st.empty() && healths[a[i]] > 0)
                {
                    const int x = st.top();
                    st.pop();
                    if (healths[x] > healths[a[i]])
                    {
                        healths[x] -= 1;
                        healths[a[i]] = 0;
                        st.push(x);
                    }
                    else if (healths[x] < healths[a[i]])
                    {
                        healths[a[i]] -= 1;
                        healths[x] = 0;
                    }
                    else
                    {
                        healths[x] = 0;
                        healths[a[i]] = 0;
                    }
                }
            }
        }
        vector<int> ans;
        for (const int health : healths)
        {
            if (health > 0)
            {
                ans.push_back(health);
            }
        }
        return ans;
    }
};