// Problem: Mirror Distance of an Integer
// Link to the problem: https://leetcode.com/problems/mirror-distance-of-an-integer/
impl Solution {
    pub fn rev(mut n: i32) -> i32 {
        let mut ans: i32 = 0;
        while (n > 0) {
            ans = ans * 10 + n % 10;
            n /= 10;
        }
        return ans;
    }
    pub fn mirror_distance(n: i32) -> i32 {
        let m: i32 = Self::rev(n);
        let ans: i32 = (m - n).abs();
        return ans;
    }
}
