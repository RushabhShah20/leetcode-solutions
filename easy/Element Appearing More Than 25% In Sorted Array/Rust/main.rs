// Problem: Element Appearing More Than 25% In Sorted Array
// Link to the problem: https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/
impl Solution {
    pub fn find_special_integer(arr: Vec<i32>) -> i32 {
        let n: usize = arr.len();
        let m: usize = n / 4;
        for i in 0..n - m {
            if (arr[i] == arr[i + m]) {
                return arr[i];
            }
        }
        return -1;
    }
}
