// Problem: Watering Plants
// Link to the problem: https://leetcode.com/problems/watering-plants/
/**
 * @param {number[]} plants
 * @param {number} capacity
 * @return {number}
 */
var wateringPlants = function (plants, capacity) {
    let ans = 0, x = capacity;
    for (let i = 0; i < plants.length; i++) {
        if (plants[i] <= capacity) {
            ans++;
            capacity -= plants[i];
        }
        else {
            ans += (2 * (i)) + 1;
            capacity = x;
            capacity -= plants[i];
        }
    }
    return ans;
};