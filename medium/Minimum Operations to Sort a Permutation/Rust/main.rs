// Problem: Minimum Operations to Sort a Permutation
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-sort-a-permutation/
impl Solution {
    pub fn min_operations(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        if (n == 1) {
            return 0;
        }
        let mut j: usize = 0;
        while (nums[j] != 0) {
            j += 1;
        }
        let mut x: bool = true;
        let mut y: bool = true;
        for i in 1..n {
            let z: i32 = nums[(i + j) % n];
            if (z != i as i32) {
                x = false;
            }
            if (z != (n - i) as i32) {
                y = false;
            }
            if (!x && !y) {
                return -1;
            }
        }
        if (x) {
            return j.min(n - j + 2) as i32;
        }
        return (n - j).min(j + 2) as i32;
    }
}
