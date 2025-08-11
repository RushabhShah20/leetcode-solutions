// Problem: Destroying Asteroids
// Link to the problem: https://leetcode.com/problems/destroying-asteroids/
class Solution
{
public:
    bool asteroidsDestroyed(int mass, vector<int> &asteroids)
    {
        unsigned long long x = mass;
        sort(asteroids.begin(), asteroids.end());
        for (int i = 0; i < asteroids.size(); i++)
        {
            if (asteroids[i] > x)
            {
                return false;
            }
            else
            {
                x += asteroids[i];
            }
        }
        return true;
    }
};