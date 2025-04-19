# Problem: Create a DataFrame from List
# Link to the problem: https://leetcode.com/problems/create-a-dataframe-from-list/
import pandas as pd


def getDataframeSize(players: pd.DataFrame) -> List[int]:
    ans: List[int] = [0, 0]
    ans[0] = len(players.index)
    ans[1] = len(players.columns)
    return ans
