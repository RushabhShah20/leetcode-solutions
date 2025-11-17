// Problem: Check If All 1's Are at Least Length K Places Away
// Link to the problem: https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/
impl Solution {
    pub fn k_length_apart(nums: Vec<i32>, k: i32) -> bool {
        let mut pos: Vec<i32> = Vec::new();
        for i in 0..nums.len() {
            if (nums[i] == 1) {
                pos.push(i as i32);
            }
        }
        let mut minDiff: i32 = 1000000000;
        if (pos.len() == 0) {
            return true;
        } else {
            for i in 1..pos.len() {
                minDiff = minDiff.min(pos[i] - pos[i - 1] - 1).abs();
            }
            if (minDiff < k) {
                return false;
            } else {
                return true;
            }
        }
    }
}
