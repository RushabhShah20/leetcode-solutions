// Problem: Number of Senior Citizens
// Link to the problem: https://leetcode.com/problems/number-of-senior-citizens/
impl Solution {
    pub fn count_seniors(details: Vec<String>) -> i32 {
        let mut ans: i32 = 0;
        for i in 0..details.len() {
            let num: i32 = details[i][11..13].parse::<i32>().unwrap();
            if num > 60 {
                ans += 1;
            }
        }
        return ans;
    }
}
