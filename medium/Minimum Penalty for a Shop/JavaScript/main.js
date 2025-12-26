// Problem: Minimum Penalty for a Shop
// Link to the problem: https://leetcode.com/problems/minimum-penalty-for-a-shop/
/**
 * @param {string} customers
 * @return {number}
 */
var bestClosingTime = function (customers) {
    let n = customers.length, minPenalty = 0, currPenalty = 0, ans = 0;
    for (let i = 0; i < n; i++) {
        if (customers[i] == 'Y') {
            currPenalty--;
        }
        else {
            currPenalty++;
        }
        if (currPenalty < minPenalty) {
            minPenalty = currPenalty;
            ans = i + 1;
        }
    }
    return ans;
};