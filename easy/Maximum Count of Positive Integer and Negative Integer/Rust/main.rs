// Problem: Maximum Count of Positive Integer and Negative Integer
// Link to the problem: https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/
impl Solution {
    pub fn maximum_count(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let mut start: i32 = 0;
        let mut end: i32 = (n - 1) as i32;
        let mut maxNeg: i32 = -1;
        let mut minPos: i32 = n as i32;
        while (start <= end) {
            let mut mid: i32 = start + (end - start) / 2;
            if (nums[mid as usize] > 0) {
                minPos = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        start = 0;
        end = (n - 1) as i32;
        while (start <= end) {
            let mut mid: i32 = start + (end - start) / 2;
            if (nums[mid as usize] < 0) {
                maxNeg = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        maxNeg += 1;
        minPos = ((n as i32) - minPos);
        let ans: i32 = maxNeg.max(minPos);
        return ans;
    }
}
