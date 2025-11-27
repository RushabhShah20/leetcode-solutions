// Problem: Neighboring Bitwise XOR
// Link to the problem: https://leetcode.com/problems/neighboring-bitwise-xor/
impl Solution {
    pub fn does_valid_array_exist(derived: Vec<i32>) -> bool {
        let mut ans: i32 = 1;
        for derive in derived {
            ans ^= derive;
        }
        if (ans == 1) {
            return true;
        } else {
            return false;
        }
    }
}
