// Problem: Vowels Game in a String
// Link to the problem: https://leetcode.com/problems/vowels-game-in-a-string/
impl Solution {
    pub fn does_alice_win(s: String) -> bool {
        for ch in s.chars() {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                return true;
            }
        }
        return false;
    }
}
