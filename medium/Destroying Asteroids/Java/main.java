// Problem: Destroying Asteroids
// Link to the problem: https://leetcode.com/problems/destroying-asteroids/
class Solution {
    public boolean asteroidsDestroyed(int mass, int[] asteroids) {
        final int n = asteroids.length;
        long x = mass;
        Arrays.sort(asteroids);
        for (int i = 0; i < n; i++) {
            if (asteroids[i] > x) {
                return false;
            }
            x += asteroids[i];
        }
        return true;
    }
}