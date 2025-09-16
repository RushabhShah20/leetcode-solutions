// Problem: Replace Non-Coprime Numbers in Array
// Link to the problem: https://leetcode.com/problems/replace-non-coprime-numbers-in-array/
impl Solution {
    pub fn gcd(a: i32, b: i32) -> i32 {
        if (b == 0) {
            return a;
        } else {
            return Self::gcd(b, a % b);
        }
    }
    pub fn replace_non_coprimes(nums: Vec<i32>) -> Vec<i32> {
        let mut ans: Vec<i32> = Vec::new();
        for num in nums {
            ans.push(num);
            while ans.len() > 1 {
                let mut a: i32 = ans[ans.len() - 1];
                let mut b: i32 = ans[ans.len() - 2];
                let mut g: i32 = Self::gcd(a, b);
                if (g > 1) {
                    ans.remove(ans.len() - 1);
                    ans.remove(ans.len() - 1);
                    let mut lcm: i64 = (((a as i64) * (b as i64)) / (g as i64));
                    ans.push(lcm as i32);
                } else {
                    break;
                }
            }
        }
        return ans;
    }
}
