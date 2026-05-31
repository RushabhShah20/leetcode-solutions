// Problem: Destroying Asteroids
// Link to the problem: https://leetcode.com/problems/destroying-asteroids/
public class Solution
{
    public bool AsteroidsDestroyed(int mass, int[] asteroids)
    {
        int n = asteroids.Length;
        long x = mass;
        Array.Sort(asteroids);
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
}