// Problem: Smallest Number With All Set Bits
// Link to the problem: https://leetcode.com/problems/smallest-number-with-all-set-bits/
impl Solution {
    pub fn to_binary(mut n: i32) -> Vec<i32> {
        let mut ans: Vec<i32> = Vec::new();
        while (n > 0) {
            ans.push(n % 2);
            n /= 2;
        }
        return ans;
    }
    pub fn smallest_number(mut n: i32) -> i32 {
        let binary: Vec<i32> = Self::to_binary(n);
        let mut a: Vec<i32> = vec![0; binary.len()];
        for i in 0..a.len() {
            a[i] = 1;
        }
        let mut ans: i32 = 0;
        for i in 0..a.len() {
            ans += (2_i32.pow(i as u32) * a[i]);
        }
        return ans;
    }
}
