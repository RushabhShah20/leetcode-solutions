// Problem: Total Waviness of Numbers in Range I
// Link to the problem: https://leetcode.com/problems/total-waviness-of-numbers-in-range-i/
impl Solution {
    pub fn total_waviness(num1: i32, num2: i32) -> i32 {
        let mut ans: i32 = 0;
        for i in num1..=num2 {
            let x: Vec<u8> = i.to_string().into_bytes();
            let n: usize = x.len();
            for j in 1..n - 1 {
                if x[j] > x[j - 1] && x[j] > x[j + 1] {
                    ans += 1;
                }
                if x[j] < x[j - 1] && x[j] < x[j + 1] {
                    ans += 1;
                }
            }
        }
        return ans;
    }
}
