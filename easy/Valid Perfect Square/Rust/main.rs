// Problem: Valid Perfect Square
// Link to the problem: https://leetcode.com/problems/valid-perfect-square/
impl Solution {
    pub fn is_perfect_square(num: i32) -> bool {
        let mut s: i64 = 1;
        let mut e: i64 = num.into();
        while (s <= e) {
            let mut mid: i64 = s + (e - s) / 2;
            if (mid * mid == <i32 as Into<i64>>::into(num)) {
                return true;
            } else if (mid * mid > <i32 as Into<i64>>::into(num)) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return false;
    }
}
