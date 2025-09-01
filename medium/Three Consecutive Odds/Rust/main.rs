// Problem: Three Consecutive Odds
// Link to the problem: https://leetcode.com/problems/three-consecutive-odds/
impl Solution {
    pub fn three_consecutive_odds(arr: Vec<i32>) -> bool {
        let mut count: i32 = 0;
        for i in 0..arr.len() {
            if (arr[i] % 2 == 0) {
                count = 0;
            } else {
                count += 1;
                if (count == 3) {
                    return true;
                }
            }
        }
        return false;
    }
}
