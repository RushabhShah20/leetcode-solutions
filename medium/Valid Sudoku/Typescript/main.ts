// Problem: Valid Sudoku
// Link to the problem: https://leetcode.com/problems/valid-sudoku/
function isdigit(char: string): boolean {
    const charCode: number = char.charCodeAt(0);
    return charCode >= 48 && charCode <= 57;
}
function checkSubSquare(board: string[][], startRow: number, startCol: number, endRow: number, endCol: number): boolean {
    let v: number[] = new Array();
    let s: Set<number> = new Set();
    for (let i = startRow; i <= endRow; i++) {
        for (let j = startCol; j <= endCol; j++) {
            if (isdigit(board[i][j])) {
                v.push(parseInt(board[i][j]));
                s.add(parseInt(board[i][j]));
            }
        }
    }
    if (v.length === s.size) {
        return true;
    }
    else {
        return false;
    }
}
function isValidSudoku(board: string[][]): boolean {
    for (let i = 0; i < 9; i++) {
        let row:number[] = new Array();
        let r:Set<number> = new Set();
        for (let j = 0; j < 9; j++) {
            if (isdigit(board[i][j])) {
                row.push(parseInt(board[i][j]));
                r.add(parseInt(board[i][j]));
            }
        }
        if (row.length != r.size) {
            return false;
        }
    }
    for (let j = 0; j < 9; j++) {
        let col:number[] = new Array();
        let c:Set<number> = new Set();
        for (let i = 0; i < 9; i++) {
            if (isdigit(board[i][j])) {
                col.push(parseInt(board[i][j]));
                c.add(parseInt(board[i][j]));
            }
        }
        if (col.length != c.size) {
            return false;
        }
    }
    if (checkSubSquare(board, 0, 0, 2, 2) === false) {
        return false;
    }
    if (checkSubSquare(board, 3, 0, 5, 2) === false) {
        return false;
    }
    if (checkSubSquare(board, 6, 0, 8, 2) === false) {
        return false;
    }
    if (checkSubSquare(board, 0, 3, 2, 5) === false) {
        return false;
    }
    if (checkSubSquare(board, 3, 3, 5, 5) === false) {
        return false;
    }
    if (checkSubSquare(board, 6, 3, 8, 5) === false) {
        return false;
    }
    if (checkSubSquare(board, 0, 6, 2, 8) === false) {
        return false;
    }
    if (checkSubSquare(board, 3, 6, 5, 8) === false) {
        return false;
    }
    if (checkSubSquare(board, 6, 6, 8, 8) === false) {
        return false;
    }
    return true;
};