// Problem: Water Bottles II
// Link to the problem: https://leetcode.com/problems/water-bottles-ii/
function maxBottlesDrunk(numBottles: number, numExchange: number): number {
    let ans: number = 0;
    let emptyBottles: number = 0;
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