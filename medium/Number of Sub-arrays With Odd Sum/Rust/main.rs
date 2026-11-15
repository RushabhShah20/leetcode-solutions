// Problem: Number of Sub-arrays With Odd Sum
// Link to the problem: https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/
impl Solution {
    pub fn num_of_subarrays(arr: Vec<i32>) -> i32 {
        let n: usize = arr.len();
        let mut ans: i32 = 0;
        let mut x: i32 = 0;
        let mut y: i32 = 1;
        let mut z: i32 = 0;
        for i in 0..n {
            let m: i32 = 1000000007;
            z += arr[i];
            if ((z & 1) > 0) {
                ans = (ans + y) % m;
                x += 1;
            } else {
                ans = (ans + x) % m;
                y += 1;
            }
        }
        return ans;
    }
}
