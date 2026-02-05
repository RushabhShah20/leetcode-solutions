// Problem: Search Insert Position
// Link to the problem: https://leetcode.com/problems/search-insert-position/
impl Solution {
    pub fn search_insert(nums: Vec<i32>, target: i32) -> i32 {
        let n: usize = nums.len();
        let mut l: i32 = 0;
        let mut r: i32 = (n - 1) as i32;
        while (l <= r) {
            let m: i32 = l + (r - l) / 2;
            if (nums[m as usize] == target) {
                return m as i32;
            }
            if (nums[m as usize] < target) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        return l;
    }
}
