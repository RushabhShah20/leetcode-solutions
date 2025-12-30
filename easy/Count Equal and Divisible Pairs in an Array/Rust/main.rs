// Problem: Count Equal and Divisible Pairs in an Array
// Link to the problem: https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/
impl Solution {
    pub fn count_pairs(nums: Vec<i32>, k: i32) -> i32 {
        let n: usize = nums.len();
        let mut ans: i32 = 0;
        for i in 0..n {
            for j in i + 1..n {
                if (nums[i] == nums[j] && ((i * j) as i32) % k == 0) {
                    ans += 1;
                }
            }
        }
        return ans;
    }
}
