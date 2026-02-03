// Problem: Trionic Array I
// Link to the problem: https://leetcode.com/problems/trionic-array-i/
impl Solution {
    pub fn is_trionic(nums: Vec<i32>) -> bool {
        let n: usize = nums.len();
        let mut i: usize = 0;
        let mut p: usize = 0;
        let mut q: usize = 0;
        while (i < n - 1 && nums[i + 1] > nums[i]) {
            i += 1;
        }
        p = i;
        while (i < n - 1 && nums[i + 1] < nums[i]) {
            i += 1;
        }
        q = i;
        while (i < n - 1 && nums[i + 1] > nums[i]) {
            i += 1;
        }
        if (i == n - 1) {
            if (p != 0 && q != 0 && p != n - 1 && q != n - 1) {
                return true;
            } else {
                return false;
            }
        }
        return false;
    }
}
