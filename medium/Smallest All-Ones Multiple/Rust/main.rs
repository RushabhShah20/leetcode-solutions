// Problem: Smallest All-Ones Multiple
// Link to the problem: https://leetcode.com/problems/smallest-all-ones-multiple/
impl Solution {
    pub fn min_all_one_multiple(k: i32) -> i32 {
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
