# Problem: Queens That Can Attack the King
# Link to the problem: https://leetcode.com/problems/queens-that-can-attack-the-king/
class Solution:
    def queensAttacktheKing(
        self, queens: List[List[int]], king: List[int]
    ) -> List[List[int]]:
        board: List[List[int]] = [[0 for _ in range(8)] for _ in range(8)]
        board[king[0]][king[1]] = 2
        for queen in queens:
            board[queen[0]][queen[1]] = 1
        ans: List[List[int]] = []
        for i in range(king[0], 8):
            if board[i][king[1]] == 1:
                ans.append([i, king[1]])
                break
        for i in range(king[0], -1, -1):
            if board[i][king[1]] == 1:
                ans.append([i, king[1]])
                break
        for j in range(king[1], 8):
            if board[king[0]][j] == 1:
                ans.append([king[0], j])
                break
        for j in range(king[1], -1, -1):
            if board[king[0]][j] == 1:
                ans.append([king[0], j])
                break
        i: int = king[0]
        j: int = king[1]
        while i >= 0 and j >= 0:
            if board[i][j] == 1:
                ans.append([i, j])
                break
            i -= 1
            j -= 1
        i = king[0]
        j = king[1]
        while i >= 0 and j < 8:
            if board[i][j] == 1:
                ans.append([i, j])
                break
            i -= 1
            j += 1
        i = king[0]
        j = king[1]
        while i < 8 and j >= 0:
            if board[i][j] == 1:
                ans.append([i, j])
                break
            i += 1
            j -= 1
        i = king[0]
        j = king[1]
        while i < 8 and j < 8:
            if board[i][j] == 1:
                ans.append([i, j])
                break
            i += 1
            j += 1
        return ans
