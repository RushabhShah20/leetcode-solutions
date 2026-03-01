// Problem: Partitioning Into Minimum Number Of Deci-Binary Numbers
// Link to the problem: https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/
class Solution {
    public int minPartitions(String n) {
        int ans = 0;
        for (final char c : n.toCharArray()) {
            ans = Math.max(ans, c - '0');
        }
        return ans;
    }
}