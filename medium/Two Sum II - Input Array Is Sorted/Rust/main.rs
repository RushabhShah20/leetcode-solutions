// Problem: Two Sum II - Input Array Is Sorted
// Link to the problem: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
impl Solution {
    pub fn two_sum(numbers: Vec<i32>, target: i32) -> Vec<i32> {
        let mut l: i32 = 0;
        let mut r: i32 = (numbers.len() - 1) as i32;
        let mut nums: Vec<i32> = numbers;
        while (l < r) {
            if (nums[l as usize] + nums[r as usize] == target) {
                return vec![(l + 1) as i32, (r + 1) as i32];
            } else if (nums[l as usize] + nums[r as usize] < target) {
                let mut left: i32 = l;
                let mut right: i32 = r - 1;
                while (left < right) {
                    let mut mid: i32 = (left + right) / 2;
                    if (nums[mid as usize] + nums[r as usize] >= target) {
                        right = mid;
                    } else {
                        left = mid + 1;
                    }
                }
                l = left;
            } else {
                let mut left: i32 = l + 1;
                let mut right: i32 = r;
                while (left < right) {
                    let mut mid: i32 = (left + right + 1) / 2;
                    if (nums[mid as usize] + nums[l as usize] <= target) {
                        left = mid;
                    } else {
                        right = mid - 1;
                    }
                }
                r = right;
            }
        }
        return vec![0, 0];
    }
}
