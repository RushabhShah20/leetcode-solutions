// Problem: Destroying Asteroids
// Link to the problem: https://leetcode.com/problems/destroying-asteroids/
class Solution
{
public:
    bool asteroidsDestroyed(int mass, vector<int> &asteroids)
    {
        const int n = asteroids.size();
        long long x = mass;
        sort(asteroids.begin(), asteroids.end());
        for (int i = 0; i < n; i++)
        {
            if (asteroids[i] > x)
            {
                return false;
            }
            x += asteroids[i];
        }
        return true;
    }
};