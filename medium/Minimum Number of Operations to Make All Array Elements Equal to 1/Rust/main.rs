// Problem: Minimum Number of Operations to Make All Array Elements Equal to 1
// Link to the problem: https://leetcode.com/problems/minimum-number-of-operations-to-make-all-array-elements-equal-to-1/
impl Solution {
    pub fn gcd(a: i32, b: i32) -> i32 {
        if (b == 0) {
            return a;
        } else {
            return Self::gcd(b, a % b);
        }
    }
    pub fn min_operations(nums: Vec<i32>) -> i32 {
        let mut ans: i32 = 0;
        let mut g: i32 = nums[0];
        for num in &nums {
            g = Self::gcd(g, *num);
            if (g == 1) {
                break;
            }
        }
        if (g != 1) {
            return -1;
        }
        let n: usize = nums.len();
        let mut count: i32 = 0;
        for num in &nums {
            if (*num == 1) {
                count += 1;
            }
        }
        if (count > 0) {
            return (n as i32) - count;
        }
        ans = 1000000000;
        for i in 0..n {
            let mut x: i32 = 0;
            for j in i..n {
                x = Self::gcd(x, nums[j]);
                if (x == 1) {
                    ans = ans.min((j - i + 1) as i32);
                    break;
                }
            }
        }
        ans = (ans - 1) + ((n - 1) as i32);
        return ans;
    }
}
