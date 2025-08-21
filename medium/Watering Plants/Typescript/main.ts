// Problem: Watering Plants
// Link to the problem: https://leetcode.com/problems/watering-plants/
function wateringPlants(plants: number[], capacity: number): number {
    let ans: number = 0, x: number = capacity;
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