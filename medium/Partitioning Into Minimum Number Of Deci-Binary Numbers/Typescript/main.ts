// Problem: Partitioning Into Minimum Number Of Deci-Binary Numbers
// Link to the problem: https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/
function minPartitions(n: string): number {
    let ans = 0;
    for (const c of n) {
        ans = Math.max(ans, c.charCodeAt(0) - '0'.charCodeAt(0));
    }
    return ans;
};