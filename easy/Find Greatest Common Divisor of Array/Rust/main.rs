// Problem: Find Greatest Common Divisor of Array
// Link to the problem: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
impl Solution {
    pub fn gcd(a: i32, b: i32) -> i32 {
        if (b == 0) {
            return a;
        } else {
            return Self::gcd(b, a % b);
        }
    }
    pub fn find_gcd(nums: Vec<i32>) -> i32 {
        let mut maxVal: i32 = 0;
        let mut minVal: i32 = 1001;
        for num in nums {
            maxVal = maxVal.max(num);
            minVal = minVal.min(num);
        }
        let ans: i32 = Self::gcd(maxVal, minVal);
        return ans;
    }
}
