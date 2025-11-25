// Problem: Smallest Integer Divisible by K
// Link to the problem: https://leetcode.com/problems/smallest-integer-divisible-by-k/
impl Solution {
    pub fn smallest_repunit_div_by_k(k: i32) -> i32 {
        if (k % 2 == 0 || k % 5 == 0) {
            return -1;
        }
        if (k == 1) {
            return 1;
        }
        let mut rem: i32 = 1;
        let mut ans: i32 = 1;
        while (rem > 0) {
            rem = ((rem * 10) + 1) % k;
            ans += 1;
            if (ans > k) {
                return -1;
            }
        }
        return ans;
    }
}
