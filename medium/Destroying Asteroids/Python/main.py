# Problem: Destroying Asteroids
# Link to the problem: https://leetcode.com/problems/destroying-asteroids/
class Solution:
    def asteroidsDestroyed(self, mass: int, asteroids: List[int]) -> bool:
        n: int = len(asteroids)
        x: int = mass
        asteroids.sort()
        for i in range(0, n):
            if asteroids[i] > x:
                return False
            x += asteroids[i]
        return True
