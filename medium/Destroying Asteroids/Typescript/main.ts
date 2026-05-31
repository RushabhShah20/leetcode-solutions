// Problem: Destroying Asteroids
// Link to the problem: https://leetcode.com/problems/destroying-asteroids/
function asteroidsDestroyed(mass: number, asteroids: number[]): boolean {
    const n: number = asteroids.length;
    let x: number = mass;
    asteroids.sort((a, b) => a - b);
    for (let i = 0; i < n; i++) {
        if (asteroids[i] > x) {
            return false;
        }
        x += asteroids[i];
    }
    return true;
};