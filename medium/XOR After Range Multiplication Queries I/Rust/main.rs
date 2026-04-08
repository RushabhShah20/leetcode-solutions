// Problem: XOR After Range Multiplication Queries I
// Link to the problem: https://leetcode.com/problems/xor-after-range-multiplication-queries-i/
impl Solution {
    pub fn xor_after_queries(mut nums: Vec<i32>, queries: Vec<Vec<i32>>) -> i32 {
        let m: i64 = 1000000007;
        for query in queries {
            for i in ((query[0] as usize)..=(query[1] as usize)).step_by(query[2] as usize) {
                nums[i as usize] = (((nums[i as usize] as i64) * (query[3] as i64)) % m) as i32;
            }
        }
        let mut ans: i32 = 0;
        for num in nums {
            ans ^= num;
        }
        return ans;
    }
}
