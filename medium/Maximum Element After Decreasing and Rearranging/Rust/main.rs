// Problem: Maximum Element After Decreasing and Rearranging
// Link to the problem: https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/
impl Solution {
    pub fn maximum_element_after_decrementing_and_rearranging(mut arr: Vec<i32>) -> i32 {
        arr.sort();
        let n: usize = arr.len();
        let mut ans: i32 = 1;
        for i in 1..n {
            if (arr[i] >= ans + 1) {
                ans += 1;
            }
        }
        return ans;
    }
}
