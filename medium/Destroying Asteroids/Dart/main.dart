// Problem: Destroying Asteroids
// Link to the problem: https://leetcode.com/problems/destroying-asteroids/
class Solution {
  bool asteroidsDestroyed(int mass, List<int> asteroids) {
    final int n = asteroids.length;
    int x = mass;
    asteroids.sort();
    for (int i = 0; i < n; i++) {
      if (asteroids[i] > x) {
        return false;
      }
      x += asteroids[i];
    }
    return true;
  }
}
