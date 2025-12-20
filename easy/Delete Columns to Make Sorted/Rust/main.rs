// Problem: Delete Columns to Make Sorted
// Link to the problem: https://leetcode.com/problems/delete-columns-to-make-sorted/
impl Solution {
    pub fn min_deletion_size(strs: Vec<String>) -> i32 {
        let n: usize = strs.len();
        let m: usize = strs[0].len();
        let mut ans: i32 = 0;
        for j in 0..m {
            for i in 0..n - 1 {
                let p_bytes = strs[i].as_bytes();
                let q_bytes = strs[i + 1].as_bytes();
                if ((p_bytes[j]) > (q_bytes[j])) {
                    ans += 1;
                    break;
                }
            }
        }
        return ans;
    }
}
