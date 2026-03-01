// Problem: Partitioning Into Minimum Number Of Deci-Binary Numbers
// Link to the problem: https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/
impl Solution {
    pub fn min_partitions(n: String) -> i32 {
        let mut ans: i32 = 0;
        for c in n.bytes() {
            ans = ans.max((c - b'0') as i32);
        }
        return ans;
    }
}
