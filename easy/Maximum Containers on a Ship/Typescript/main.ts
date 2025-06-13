// Problem: Maximum Containers on a Ship
// Link to the problem: https://leetcode.com/problems/maximum-containers-on-a-ship/
function maxContainers(n: number, w: number, maxWeight: number): number {
    return Math.pow(n, 2) * w <= maxWeight
        ? Math.pow(n, 2)
        : (maxWeight / w) >> 0;
};