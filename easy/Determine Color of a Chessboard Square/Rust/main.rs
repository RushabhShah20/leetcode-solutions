// Problem: Determine Color of a Chessboard Square
// Link to the problem: https://leetcode.com/problems/determine-color-of-a-chessboard-square/
impl Solution {
    pub fn square_is_white(coordinates: String) -> bool {
        let w: bool = coordinates.chars().nth(0).unwrap() == 'a'
            || coordinates.chars().nth(0).unwrap() == 'c'
            || coordinates.chars().nth(0).unwrap() == 'e'
            || coordinates.chars().nth(0).unwrap() == 'g';
        let x: bool = coordinates.chars().nth(1).unwrap() == '1'
            || coordinates.chars().nth(1).unwrap() == '3'
            || coordinates.chars().nth(1).unwrap() == '5'
            || coordinates.chars().nth(1).unwrap() == '7';
        let y: bool = coordinates.chars().nth(0).unwrap() == 'b'
            || coordinates.chars().nth(0).unwrap() == 'd'
            || coordinates.chars().nth(0).unwrap() == 'f'
            || coordinates.chars().nth(0).unwrap() == 'h';
        let z: bool = coordinates.chars().nth(1).unwrap() == '2'
            || coordinates.chars().nth(1).unwrap() == '4'
            || coordinates.chars().nth(1).unwrap() == '6'
            || coordinates.chars().nth(1).unwrap() == '8';
        let a: bool = (w && x) || (y && z);
        if a {
            return false;
        } else {
            return true;
        }
    }
}
