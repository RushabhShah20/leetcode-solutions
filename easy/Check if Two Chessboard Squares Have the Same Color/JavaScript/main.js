// Problem: Check if Two Chessboard Squares Have the Same Color
// Link to the problem: https://leetcode.com/problems/check-if-two-chessboard-squares-have-the-same-color/
/**
 * @param {string} coordinate1
 * @param {string} coordinate2
 * @return {boolean}
 */
var checkTwoChessboards = function (coordinate1, coordinate2) {
    let ans = false;
    let col_cord1 = coordinate1[0],
        col_cord2 = coordinate2[0];
    let row_cord1 = +coordinate1[1],
        row_cord2 = +coordinate2[1];
    if (
        (col_cord1 == "a" ||
            col_cord1 == "c" ||
            col_cord1 == "e" ||
            col_cord1 == "g") &&
        (col_cord2 == "a" ||
            col_cord2 == "c" ||
            col_cord2 == "e" ||
            col_cord2 == "g") &&
        row_cord1 % 2 != 0 &&
        row_cord2 % 2 != 0
    ) {
        ans = true;
    } else if (
        (col_cord1 == "a" ||
            col_cord1 == "c" ||
            col_cord1 == "e" ||
            col_cord1 == "g") &&
        (col_cord2 == "b" ||
            col_cord2 == "d" ||
            col_cord2 == "f" ||
            col_cord2 == "h") &&
        row_cord1 % 2 != 0 &&
        row_cord2 % 2 == 0
    ) {
        ans = true;
    } else if (
        (col_cord1 == "b" ||
            col_cord1 == "d" ||
            col_cord1 == "f" ||
            col_cord1 == "h") &&
        (col_cord2 == "a" ||
            col_cord2 == "c" ||
            col_cord2 == "e" ||
            col_cord2 == "g") &&
        row_cord1 % 2 == 0 &&
        row_cord2 % 2 != 0
    ) {
        ans = true;
    } else if (
        (col_cord1 == "b" ||
            col_cord1 == "d" ||
            col_cord1 == "f" ||
            col_cord1 == "h") &&
        (col_cord2 == "b" ||
            col_cord2 == "d" ||
            col_cord2 == "f" ||
            col_cord2 == "h") &&
        row_cord1 % 2 == 0 &&
        row_cord2 % 2 == 0
    ) {
        ans = true;
    } else if (
        (col_cord1 == "a" ||
            col_cord1 == "c" ||
            col_cord1 == "e" ||
            col_cord1 == "g") &&
        (col_cord2 == "a" ||
            col_cord2 == "c" ||
            col_cord2 == "e" ||
            col_cord2 == "g") &&
        row_cord1 % 2 == 0 &&
        row_cord2 % 2 == 0
    ) {
        ans = true;
    } else if (
        (col_cord1 == "a" ||
            col_cord1 == "c" ||
            col_cord1 == "e" ||
            col_cord1 == "g") &&
        (col_cord2 == "b" ||
            col_cord2 == "d" ||
            col_cord2 == "f" ||
            col_cord2 == "h") &&
        row_cord1 % 2 == 0 &&
        row_cord2 % 2 != 0
    ) {
        ans = true;
    } else if (
        (col_cord1 == "b" ||
            col_cord1 == "d" ||
            col_cord1 == "f" ||
            col_cord1 == "h") &&
        (col_cord2 == "a" ||
            col_cord2 == "c" ||
            col_cord2 == "e" ||
            col_cord2 == "g") &&
        row_cord1 % 2 != 0 &&
        row_cord2 % 2 == 0
    ) {
        ans = true;
    } else if (
        (col_cord1 == "b" ||
            col_cord1 == "d" ||
            col_cord1 == "f" ||
            col_cord1 == "h") &&
        (col_cord2 == "b" ||
            col_cord2 == "d" ||
            col_cord2 == "f" ||
            col_cord2 == "h") &&
        row_cord1 % 2 != 0 &&
        row_cord2 % 2 != 0
    ) {
        ans = true;
    }
    return ans;
};
