// Problem: Minimum Positive Sum Subarray
// Link to the problem: https://leetcode.com/problems/minimum-positive-sum-subarray/
impl Solution {
    pub fn minimum_sum_subarray(nums: Vec<i32>, l: i32, r: i32) -> i32 {
        let n: usize = nums.len();
        let mut z: i32 = 100001;
        for i in 0..n {
            let mut x: i32 = 0;
            for j in i..n {
                x += nums[j];
                let y: i32 = (j as i32) - (i as i32) + 1;
                if (x > 0 && y >= l && y <= r) {
                    z = z.min(x);
                }
            }
        }
        let ans: i32 = if (z == 100001) { -1 } else { z };
        return ans;
    }
}
