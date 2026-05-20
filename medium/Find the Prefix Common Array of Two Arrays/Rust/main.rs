// Problem: Find the Prefix Common Array of Two Arrays
// Link to the problem: https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/
impl Solution {
    pub fn find_the_prefix_common_array(a: Vec<i32>, b: Vec<i32>) -> Vec<i32> {
        let n: usize = a.len();
        let mut m: Vec<i32> = vec![0; n + 1];
        let mut ans: Vec<i32> = vec![0; n];
        let mut x: i32 = 0;
        for i in 0..n {
            m[a[i] as usize] += 1;
            if (m[a[i] as usize] == 2) {
                x += 1;
            }
            m[b[i] as usize] += 1;
            if (m[b[i] as usize] == 2) {
                x += 1;
            }
            ans[i] = x;
        }
        return ans;
    }
}
