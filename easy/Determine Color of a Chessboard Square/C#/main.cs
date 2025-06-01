// Problem: Determine Color of a Chessboard Square
// Link to the problem: https://leetcode.com/problems/determine-color-of-a-chessboard-square/
public class Solution {
    public bool SquareIsWhite(string coordinates) {
        bool w = coordinates[0] == 'a' || coordinates[0] == 'c' || coordinates[0] == 'e' || coordinates[0] == 'g';
    bool x = coordinates[1] == '1' || coordinates[1] == '3' || coordinates[1] == '5' || coordinates[1] == '7';
    bool y = coordinates[0] == 'b' || coordinates[0] == 'd' || coordinates[0] == 'f' || coordinates[0] == 'h';
    bool z = coordinates[1] == '2' || coordinates[1] == '4' || coordinates[1] == '6' || coordinates[1] == '8';
    bool a = (w && x) || (y && z);
    if (a)
    {
        return false;
    }
    else
    {
        return true;
    }
    }
}