// Problem: Smallest Index With Digit Sum Equal to Index
// Link to the problem: https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/
impl Solution {
    pub fn sum(mut n: i32) -> i32 {
        let mut ans: i32 = 0;
        while (n > 0) {
            ans += n % 10;
            n /= 10;
        }
        return ans;
    }
    pub fn smallest_index(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        for i in 0..n {
            if (Self::sum(nums[i]) == i as i32) {
                return i as i32;
            }
        }
        return -1;
    }
}
