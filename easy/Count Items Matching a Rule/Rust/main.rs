// Problem: Count Items Matching a Rule
// Link to the problem: https://leetcode.com/problems/count-items-matching-a-rule/
impl Solution {
    pub fn count_matches(items: Vec<Vec<String>>, rule_key: String, rule_value: String) -> i32 {
        let mut ans: i32 = 0;
        for i in 0..items.len() {
            if rule_key == "type" && items[i][0] == rule_value {
                ans += 1;
            } else if rule_key == "color" && items[i][1] == rule_value {
                ans += 1;
            } else if rule_key == "name" && items[i][2] == rule_value {
                ans += 1;
            }
        }
        return ans;
    }
}
