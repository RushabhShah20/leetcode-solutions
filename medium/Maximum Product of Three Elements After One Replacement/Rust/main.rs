// Problem: Maximum Product of Three Elements After One Replacement
// Link to the problem: https://leetcode.com/problems/maximum-product-of-three-elements-after-one-replacement/
impl Solution {
    pub fn max_product(mut nums: Vec<i32>) -> i64 {
        let n: usize = nums.len();
        nums.sort();
        let a: i64 = nums[0] as i64;
        let b: i64 = nums[1] as i64;
        let c: i64 = nums[n - 2] as i64;
        let d: i64 = nums[n - 1] as i64;
        let x: i64 = 100000;
        let arr: Vec<i64> = vec![
            a * b * x,
            a * b * -x,
            a * c * x,
            a * c * -x,
            a * d * x,
            a * d * -x,
            b * c * x,
            b * c * -x,
            b * d * x,
            b * d * -x,
            c * d * x,
            c * d * -x,
        ];
        let ans: i64 = *arr.iter().max().unwrap();
        return ans;
    }
}
