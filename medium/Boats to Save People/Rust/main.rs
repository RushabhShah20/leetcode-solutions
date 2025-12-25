// Problem: Boats to Save People
// Link to the problem: https://leetcode.com/problems/boats-to-save-people/
impl Solution {
    pub fn num_rescue_boats(mut people: Vec<i32>, limit: i32) -> i32 {
        people.sort();
        let mut ans: i32 = 0;
        let n: usize = people.len();
        let mut i: i32 = 0;
        let mut j: i32 = (n - 1) as i32;
        while (i <= j) {
            if (people[i as usize] + people[j as usize] <= limit) {
                i += 1;
                j -= 1;
            } else {
                j -= 1;
            }
            ans += 1;
        }
        return ans;
    }
}
