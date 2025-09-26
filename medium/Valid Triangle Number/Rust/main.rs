// Problem: Valid Triangle Number
// Link to the problem: https://leetcode.com/problems/valid-triangle-number/
impl Solution {
    pub fn triangle_number(mut nums: Vec<i32>) -> i32 {
        let mut ans: i32 = 0;
        if (nums.len() < 3) {
            return ans;
        }
        nums.sort();
        for i in (2..nums.len()).rev() {
            let mut r: usize = i - 1;
            let mut l: usize = 0;
            while (l < r) {
                let mut sum: i32 = nums[l] + nums[r];
                if (sum > nums[i]) {
                    ans += ((r as i32) - (l as i32));
                    r -= 1;
                } else {
                    l += 1;
                }
            }
        }
        return ans;
    }
}
