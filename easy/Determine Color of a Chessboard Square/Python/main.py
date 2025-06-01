# Problem: Determine Color of a Chessboard Square
# Link to the problem: https://leetcode.com/problems/determine-color-of-a-chessboard-square/
class Solution:
    def squareIsWhite(self, coordinates: str) -> bool:
        w: bool = (
            coordinates[0] == "a"
            or coordinates[0] == "c"
            or coordinates[0] == "e"
            or coordinates[0] == "g"
        )
        x: bool = (
            coordinates[1] == "1"
            or coordinates[1] == "3"
            or coordinates[1] == "5"
            or coordinates[1] == "7"
        )
        y: bool = (
            coordinates[0] == "b"
            or coordinates[0] == "d"
            or coordinates[0] == "f"
            or coordinates[0] == "h"
        )
        z: bool = (
            coordinates[1] == "2"
            or coordinates[1] == "4"
            or coordinates[1] == "6"
            or coordinates[1] == "8"
        )
        a: bool = (w and x) or (y and z)
        if a:
            return False
        else:
            return True
