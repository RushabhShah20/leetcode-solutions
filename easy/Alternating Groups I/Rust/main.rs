// Problem: Alternating Groups I
// Link to the problem: https://leetcode.com/problems/alternating-groups-i/
impl Solution {
    pub fn number_of_alternating_groups(colors: Vec<i32>) -> i32 {
        let mut ans: i32 = 0;
        for i in 1..(colors.len() - 1) {
            if (colors[i] != colors[i - 1] && colors[i] != colors[i + 1]) {
                ans += 1;
            }
        }
        if (colors[0] != colors[1] && colors[0] != colors[colors.len() - 1]) {
            ans += 1;
        }
        if (colors[colors.len() - 1] != colors[colors.len() - 2]
            && colors[colors.len() - 1] != colors[0])
        {
            ans += 1;
        }
        return ans;
    }
}
