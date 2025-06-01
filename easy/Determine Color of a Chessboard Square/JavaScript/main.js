// Problem: Determine Color of a Chessboard Square
// Link to the problem: https://leetcode.com/problems/determine-color-of-a-chessboard-square/
/**
 * @param {string} coordinates
 * @return {boolean}
 */
var squareIsWhite = function (coordinates) {
    let w = coordinates.charAt(0) == 'a' || coordinates.charAt(0) == 'c' || coordinates.charAt(0) == 'e'
        || coordinates.charAt(0) == 'g';
    let x = coordinates.charAt(1) == '1' || coordinates.charAt(1) == '3' || coordinates.charAt(1) == '5'
        || coordinates.charAt(1) == '7';
    let y = coordinates.charAt(0) == 'b' || coordinates.charAt(0) == 'd' || coordinates.charAt(0) == 'f'
        || coordinates.charAt(0) == 'h';
    let z = coordinates.charAt(1) == '2' || coordinates.charAt(1) == '4' || coordinates.charAt(1) == '6'
        || coordinates.charAt(1) == '8';
    let a = (w && x) || (y && z);
    if (a) {
        return false;
    } else {
        return true;
    }
};