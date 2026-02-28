// Problem: Squares of a Sorted Array
// Link to the problem: https://leetcode.com/problems/squares-of-a-sorted-array/
impl Solution {
    pub fn sorted_squares(nums: Vec<i32>) -> Vec<i32> {
        let n: i32 = nums.len() as i32;
        let mut ans: Vec<i32> = vec![0; n as usize];
        let mut l: i32 = 0;
        let mut r: i32 = n - 1;
        let mut i: i32 = n - 1;
        while (l <= r) {
            let x: i32 = nums[l as usize] * nums[l as usize];
            let y: i32 = nums[r as usize] * nums[r as usize];
            if (x > y) {
                ans[i as usize] = x;
                l += 1;
            } else {
                ans[i as usize] = y;
                r -= 1;
            }
            i -= 1;
        }
        return ans;
    }
}
