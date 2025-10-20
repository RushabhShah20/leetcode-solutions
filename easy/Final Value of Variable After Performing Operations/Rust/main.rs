// Problem: Final Value of Variable After Performing Operations
// Link to the problem: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
impl Solution {
    pub fn final_value_after_operations(operations: Vec<String>) -> i32 {
        let mut ans: i32 = 0;
        for operation in &operations {
            if (*operation == "--X" || *operation == "X--") {
                ans -= 1;
            } else {
                ans += 1;
            }
        }
        return ans;
    }
}
