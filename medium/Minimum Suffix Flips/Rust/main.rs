// Problem: Minimum Suffix Flips
// Link to the problem: https://leetcode.com/problems/minimum-suffix-flips/
impl Solution {
    pub fn min_flips(target: String) -> i32 {
        let mut ans: i32 = 0;
        let mut x: bool = false;
        let mut target_bytes = target.as_bytes();
        if (target_bytes[0] == b'1') {
            ans += 1;
            x = true;
        }
        for i in 1..target_bytes.len() {
            if (target_bytes[i] == b'1') {
                if (x == false) {
                    ans += 1;
                    x = true;
                }
            } else {
                if (x == true) {
                    ans += 1;
                    x = false;
                }
            }
        }
        return ans;
    }
}
