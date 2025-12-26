// Problem: Minimum Penalty for a Shop
// Link to the problem: https://leetcode.com/problems/minimum-penalty-for-a-shop/
impl Solution {
    pub fn best_closing_time(customers: String) -> i32 {
        let n: usize = customers.len();
        let mut minPenalty: i32 = 0;
        let mut currPenalty: i32 = 0;
        let mut ans: i32 = 0;
        let c_bytes = customers.as_bytes();
        for i in 0..n {
            if (c_bytes[i] == b'Y') {
                currPenalty -= 1;
            } else {
                currPenalty += 1;
            }
            if (currPenalty < minPenalty) {
                minPenalty = currPenalty;
                ans = (i + 1) as i32;
            }
        }
        return ans;
    }
}
