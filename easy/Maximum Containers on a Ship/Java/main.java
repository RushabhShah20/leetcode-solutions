// Problem: Maximum Containers on a Ship
// Link to the problem: https://leetcode.com/problems/maximum-containers-on-a-ship/
class Solution {
    public int maxContainers(int n, int w, int maxWeight) {
        return ((int) (Math.pow(n, 2) * w) <= maxWeight ? (int) (Math.pow(n, 2)) : (maxWeight / w));
    }
}