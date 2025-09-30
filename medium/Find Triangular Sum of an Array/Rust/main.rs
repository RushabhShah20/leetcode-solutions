// Problem: Find Triangular Sum of an Array
// Link to the problem: https://leetcode.com/problems/find-triangular-sum-of-an-array/
impl Solution {
    pub fn triangular_sum(mut nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        for i in (0..n).rev() {
            for j in 0..i {
                nums[j] = ((nums[j] + nums[j + 1]) % 10);
            }
        }
        return nums[0];
    }
}
