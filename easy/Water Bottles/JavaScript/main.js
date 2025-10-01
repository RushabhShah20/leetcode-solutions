// Problem: Water Bottles
// Link to the problem: https://leetcode.com/problems/water-bottles/
/**
 * @param {number} numBottles
 * @param {number} numExchange
 * @return {number}
 */
var numWaterBottles = function (numBottles, numExchange) {
    let ans = numBottles;
    while (numBottles >= numExchange) {
        let x = Math.floor(numBottles / numExchange);
        let y = numBottles % numExchange;
        numBottles = x + y;
        ans += x;
    }
    return ans;
};