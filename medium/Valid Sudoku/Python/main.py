# Problem: Valid Sudoku
# Link to the problem: https://leetcode.com/problems/valid-sudoku/
class Solution:
    def checkSubSquare(
        self,
        board: List[List[str]],
        startRow: int,
        startCol: int,
        endRow: int,
        endCol: int,
    ) -> bool:
        v: List[int] = []
        s: Set[int] = set()
        for i in range(startRow, endRow + 1):
            for j in range(startCol, endCol + 1):
                if board[i][j].isdigit():
                    digit: int = int(board[i][j])
                    v.append(digit)
                    s.add(digit)
        if len(v) == len(s):
            return True
        else:
            return False

    def isValidSudoku(self, board: List[List[str]]) -> bool:
        for i in range(0, 9):
            row: List[int] = []
            r: Set[int] = set()
            for j in range(0, 9):
                if board[i][j].isdigit():
                    digit: int = int(board[i][j])
                    row.append(digit)
                    r.add(digit)
            if len(row) != len(r):
                return False
        for j in range(0, 9):
            col: List[int] = []
            c: Set[int] = set()
            for i in range(0, 9):
                if board[i][j].isdigit():
                    digit: int = int(board[i][j])
                    col.append(digit)
                    c.add(digit)
            if len(col) != len(c):
                return False
        if self.checkSubSquare(board, 0, 0, 2, 2) == False:
            return False
        if self.checkSubSquare(board, 3, 0, 5, 2) == False:
            return False
        if self.checkSubSquare(board, 6, 0, 8, 2) == False:
            return False
        if self.checkSubSquare(board, 0, 3, 2, 5) == False:
            return False
        if self.checkSubSquare(board, 3, 3, 5, 5) == False:
            return False
        if self.checkSubSquare(board, 6, 3, 8, 5) == False:
            return False
        if self.checkSubSquare(board, 0, 6, 2, 8) == False:
            return False
        if self.checkSubSquare(board, 3, 6, 5, 8) == False:
            return False
        if self.checkSubSquare(board, 6, 6, 8, 8) == False:
            return False
        return True
