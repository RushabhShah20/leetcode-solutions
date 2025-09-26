// Problem: Positions of Large Groups
// Link to the problem: https://leetcode.com/problems/positions-of-large-groups/
impl Solution {
    pub fn large_group_positions(s: String) -> Vec<Vec<i32>> {
        let mut ans: Vec<Vec<i32>> = Vec::new();
        let mut count: i32 = 1;
        let s_bytes: &[u8] = s.as_bytes();
        for i in 1..s_bytes.len() {
            if (s_bytes[i] == s_bytes[i - 1]) {
                count += 1;
            } else {
                if (count >= 3) {
                    ans.push(vec![i as i32 - count, i as i32 - 1]);
                }
                count = 1;
            }
        }
        if (count >= 3) {
            ans.push(vec![(s.len() as i32 - count), (s.len() as i32 - 1)]);
        }
        return ans;
    }
}
