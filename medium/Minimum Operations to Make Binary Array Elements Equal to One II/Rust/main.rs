// Problem: Minimum Operations to Make Binary Array Elements Equal to One II
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-ii/
impl Solution {
    pub fn min_operations(nums: Vec<i32>) -> i32 {
        let mut ans: i32 = 0;
        for num in nums {
            if (ans % 2 == 0) {
                if (num == 0) {
                    ans += 1;
                }
            } else {
                if (num == 1) {
                    ans += 1;
                }
            }
        }
        return ans;
    }
}
