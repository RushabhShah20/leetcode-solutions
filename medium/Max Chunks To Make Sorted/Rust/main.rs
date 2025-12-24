// Problem: Max Chunks To Make Sorted
// Link to the problem: https://leetcode.com/problems/max-chunks-to-make-sorted/
impl Solution {
    pub fn max_chunks_to_sorted(arr: Vec<i32>) -> i32 {
        let mut ans: i32 = 0;
        let mut n: i32 = arr.len() as i32;
        let mut max: i32 = 0;
        for i in 0..n {
            if (max < arr[i as usize]) {
                max = arr[i as usize];
            }
            if (max == i) {
                ans += 1;
            }
        }
        return ans;
    }
}
