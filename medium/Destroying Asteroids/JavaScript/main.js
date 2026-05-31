// Problem: Destroying Asteroids
// Link to the problem: https://leetcode.com/problems/destroying-asteroids/
/**
 * @param {number} mass
 * @param {number[]} asteroids
 * @return {boolean}
 */
var asteroidsDestroyed = function (mass, asteroids) {
    const n = asteroids.length;
    let x = mass;
    asteroids.sort((a, b) => a - b);
    for (let i = 0; i < n; i++) {
        if (asteroids[i] > x) {
            return false;
        }
        x += asteroids[i];
    }
    return true;
};