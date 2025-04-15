# Problem: Check if Two Chessboard Squares Have the Same Color
# Link to the problem: https://leetcode.com/problems/check-if-two-chessboard-squares-have-the-same-color/
class Solution:
    def checkTwoChessboards(self, coordinate1: str, coordinate2: str) -> bool:
        ans: bool = False
        col_cord1: str = coordinate1[0]
        col_cord2: str = coordinate2[0]
        row_cord1: int = int(coordinate1[1])
        row_cord2: int = int(coordinate2[1])
        if (
            (
                col_cord1 == "a"
                or col_cord1 == "c"
                or col_cord1 == "e"
                or col_cord1 == "g"
            )
            and (
                col_cord2 == "a"
                or col_cord2 == "c"
                or col_cord2 == "e"
                or col_cord2 == "g"
            )
            and (row_cord1 % 2 != 0)
            and (row_cord2 % 2 != 0)
        ):
            ans = True

        elif (
            (
                col_cord1 == "a"
                or col_cord1 == "c"
                or col_cord1 == "e"
                or col_cord1 == "g"
            )
            and (
                col_cord2 == "b"
                or col_cord2 == "d"
                or col_cord2 == "f"
                or col_cord2 == "h"
            )
            and (row_cord1 % 2 != 0)
            and (row_cord2 % 2 == 0)
        ):

            ans = True

        elif (
            (
                col_cord1 == "b"
                or col_cord1 == "d"
                or col_cord1 == "f"
                or col_cord1 == "h"
            )
            and (
                col_cord2 == "a"
                or col_cord2 == "c"
                or col_cord2 == "e"
                or col_cord2 == "g"
            )
            and (row_cord1 % 2 == 0)
            and (row_cord2 % 2 != 0)
        ):

            ans = True

        elif (
            (
                col_cord1 == "b"
                or col_cord1 == "d"
                or col_cord1 == "f"
                or col_cord1 == "h"
            )
            and (
                col_cord2 == "b"
                or col_cord2 == "d"
                or col_cord2 == "f"
                or col_cord2 == "h"
            )
            and (row_cord1 % 2 == 0)
            and (row_cord2 % 2 == 0)
        ):

            ans = True

        elif (
            (
                col_cord1 == "a"
                or col_cord1 == "c"
                or col_cord1 == "e"
                or col_cord1 == "g"
            )
            and (
                col_cord2 == "a"
                or col_cord2 == "c"
                or col_cord2 == "e"
                or col_cord2 == "g"
            )
            and (row_cord1 % 2 == 0)
            and (row_cord2 % 2 == 0)
        ):

            ans = True

        elif (
            (
                col_cord1 == "a"
                or col_cord1 == "c"
                or col_cord1 == "e"
                or col_cord1 == "g"
            )
            and (
                col_cord2 == "b"
                or col_cord2 == "d"
                or col_cord2 == "f"
                or col_cord2 == "h"
            )
            and (row_cord1 % 2 == 0)
            and (row_cord2 % 2 != 0)
        ):

            ans = True

        elif (
            (
                col_cord1 == "b"
                or col_cord1 == "d"
                or col_cord1 == "f"
                or col_cord1 == "h"
            )
            and (
                col_cord2 == "a"
                or col_cord2 == "c"
                or col_cord2 == "e"
                or col_cord2 == "g"
            )
            and (row_cord1 % 2 != 0)
            and (row_cord2 % 2 == 0)
        ):

            ans = True

        elif (
            (
                col_cord1 == "b"
                or col_cord1 == "d"
                or col_cord1 == "f"
                or col_cord1 == "h"
            )
            and (
                col_cord2 == "b"
                or col_cord2 == "d"
                or col_cord2 == "f"
                or col_cord2 == "h"
            )
            and (row_cord1 % 2 != 0)
            and (row_cord2 % 2 != 0)
        ):

            ans = True

        return ans
