// Problem: Water Bottles II
// Link to the problem: https://leetcode.com/problems/water-bottles-ii/
/**
 * @param {number} numBottles
 * @param {number} numExchange
 * @return {number}
 */
var maxBottlesDrunk = function (numBottles, numExchange) {
    let ans = 0;
    let emptyBottles = 0;
    while (true) {
        if (numBottles > 0) {
            ans += numBottles;
            emptyBottles += numBottles;
            numBottles = 0;
        }
        while (emptyBottles >= numExchange) {
            numBottles++;
            emptyBottles -= numExchange;
            numExchange++;
        }
        if (numBottles == 0) {
            return ans;
        }
    }
};