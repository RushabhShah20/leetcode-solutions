// Problem: Binary Search
// Link to the problem: https://leetcode.com/problems/binary-search/
impl Solution {
    pub fn search(nums: Vec<i32>, target: i32) -> i32 {
        let mut start: i32 = 0;
        let mut end: i32 = (nums.len() - 1) as i32;
        while (start <= end) {
            let mid: i32 = start + (end - start) / 2;
            if (nums[mid as usize] == target) {
                return mid as i32;
            } else if (nums[mid as usize] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }
}
