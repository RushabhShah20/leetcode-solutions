// Problem: Determine Color of a Chessboard Square
// Link to the problem: https://leetcode.com/problems/determine-color-of-a-chessboard-square/
class Solution {
    public boolean squareIsWhite(String coordinates) {
        boolean w = coordinates.charAt(0) == 'a' || coordinates.charAt(0) == 'c' || coordinates.charAt(0) == 'e'
                || coordinates.charAt(0) == 'g';
        boolean x = coordinates.charAt(1) == '1' || coordinates.charAt(1) == '3' || coordinates.charAt(1) == '5'
                || coordinates.charAt(1) == '7';
        boolean y = coordinates.charAt(0) == 'b' || coordinates.charAt(0) == 'd' || coordinates.charAt(0) == 'f'
                || coordinates.charAt(0) == 'h';
        boolean z = coordinates.charAt(1) == '2' || coordinates.charAt(1) == '4' || coordinates.charAt(1) == '6'
                || coordinates.charAt(1) == '8';
        boolean a = (w && x) || (y && z);
        if (a) {
            return false;
        } else {
            return true;
        }
    }
}