// Problem: Peak Index in a Mountain Array
// Link to the problem: https://leetcode.com/problems/peak-index-in-a-mountain-array/
impl Solution {
    pub fn peak_index_in_mountain_array(arr: Vec<i32>) -> i32 {
        let mut start: usize = 0;
        let mut end: usize = arr.len() - 1;
        while (start < end) {
            let mid: usize = start + (end - start) / 2;
            if (arr[mid] < arr[mid + 1]) {
                start = mid + 1;
            } else {
                end = mid;
            }
        }
        return start as i32;
    }
}
