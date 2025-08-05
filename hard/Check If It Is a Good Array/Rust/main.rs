// Problem: Check If It Is a Good Array
// Link to the problem: https://leetcode.com/problems/check-if-it-is-a-good-array/
impl Solution {
    pub fn gcd(a: i32, b: i32) -> i32 {
        if (b == 0) {
            return a;
        } else {
            return Self::gcd(b, a % b);
        }
    }
    pub fn is_good_array(nums: Vec<i32>) -> bool {
        let mut ans: i32 = nums[0];
        for i in 1..nums.len() {
            ans = Self::gcd(ans, nums[i]);
            if (ans == 1) {
                break;
            }
        }
        if (ans == 1) {
            return true;
        } else {
            return false;
        }
    }
}
