# Problem: Reshape Data: Concatenate
# Link to the problem: https://leetcode.com/problems/reshape-data-concatenate/
import pandas as pd


def concatenateTables(df1: pd.DataFrame, df2: pd.DataFrame) -> pd.DataFrame:
    return pd.concat([df1, df2])
