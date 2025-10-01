// Problem: Water Bottles
// Link to the problem: https://leetcode.com/problems/water-bottles/
function numWaterBottles(numBottles: number, numExchange: number): number {
    let ans: number = numBottles;
    while (numBottles >= numExchange) {
        let x: number = Math.floor(numBottles / numExchange);
        let y: number = numBottles % numExchange;
        numBottles = x + y;
        ans += x;
    }
    return ans;
};