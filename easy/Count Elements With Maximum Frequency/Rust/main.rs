// Problem: Count Elements With Maximum Frequency
// Link to the problem: https://leetcode.com/problems/count-elements-with-maximum-frequency/
impl Solution {
    pub fn max_frequency_elements(nums: Vec<i32>) -> i32 {
        let mut x: std::collections::HashMap<i32, i32> = std::collections::HashMap::new();
        for i in 0..nums.len() {
            *x.entry(nums[i]).or_insert(0) += 1;
        }
        let mut y: std::collections::HashMap<i32, Vec<i32>> = std::collections::HashMap::new();
        for (key, value) in &x {
            for _ in 0..*value {
                y.entry(*value).or_insert(Vec::new()).push(*key);
            }
        }
        let mut max_freq: i32 = 0;
        for (freq, _) in &y {
            max_freq = max_freq.max(*freq);
        }
        let ans: &Vec<i32> = &y[&max_freq];
        return ans.len() as i32;
    }
}
