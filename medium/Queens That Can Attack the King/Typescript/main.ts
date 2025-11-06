// Problem: Queens That Can Attack the King
// Link to the problem: https://leetcode.com/problems/queens-that-can-attack-the-king/
function queensAttacktheKing(queens: number[][], king: number[]): number[][] {
    let board: number[][] = Array.from({ length: 8 }, () => new Array(8).fill(0));
    board[king[0]][king[1]] = 2;
    for (const queen of queens) {
        board[queen[0]][queen[1]] = 1;
    }
    let ans: number[][] = new Array();
    for (let i = king[0]; i < 8; i++) {
        if (board[i][king[1]] === 1) {
            ans.push([i, king[1]]);
            break;
        }
    }
    for (let i = king[0]; i >= 0; i--) {
        if (board[i][king[1]] === 1) {
            ans.push([i, king[1]]);
            break;
        }
    }
    for (let j = king[1]; j < 8; j++) {
        if (board[king[0]][j] === 1) {
            ans.push([king[0], j]);
            break;
        }
    }
    for (let j = king[1]; j >= 0; j--) {
        if (board[king[0]][j] === 1) {
            ans.push([king[0], j]);
            break;
        }
    }
    let i: number = king[0], j: number = king[1];
    while (i >= 0 && j >= 0) {
        if (board[i][j] === 1) {
            ans.push([i, j]);
            break;
        }
        i--;
        j--;
    }
    i = king[0], j = king[1];
    while (i >= 0 && j < 8) {
        if (board[i][j] === 1) {
            ans.push([i, j]);
            break;
        }
        i--;
        j++;
    }
    i = king[0], j = king[1];
    while (i < 8 && j >= 0) {
        if (board[i][j] === 1) {
            ans.push([i, j]);
            break;
        }
        i++;
        j--;
    }
    i = king[0], j = king[1];
    while (i < 8 && j < 8) {
        if (board[i][j] === 1) {
            ans.push([i, j]);
            break;
        }
        i++;
        j++;
    }
    return ans;
};