// Problem: Maximum Containers on a Ship
// Link to the problem: https://leetcode.com/problems/maximum-containers-on-a-ship/
/**
 * @param {number} n
 * @param {number} w
 * @param {number} maxWeight
 * @return {number}
 */
var maxContainers = function (n, w, maxWeight) {
    return Math.pow(n, 2) * w <= maxWeight
        ? Math.pow(n, 2)
        : (maxWeight / w) >> 0;
};
