// Problem: Asteroid Collision
// Link to the problem: https://leetcode.com/problems/asteroid-collision/
class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        stack<int> st;
        for (int i = 0; i < asteroids.size(); i++)
        {
            bool z = false;
            while (!st.empty() && st.top() > 0 && asteroids[i] < 0)
            {
                int x = st.top();
                if (abs(x) < abs(asteroids[i]))
                {
                    st.pop();
                }
                else if (abs(x) == abs(asteroids[i]))
                {
                    st.pop();
                    z = true;
                    break;
                }
                else
                {
                    z = true;
                    break;
                }
            }
            if (!z)
            {
                st.push(asteroids[i]);
            }
        }
        vector<int> ans;
        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};