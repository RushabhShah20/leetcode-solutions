# Problem: Create a DataFrame from List
# Link to the problem: https://leetcode.com/problems/create-a-dataframe-from-list/
import pandas as pd


def createDataframe(student_data: List[List[int]]) -> pd.DataFrame:
    ans: pd.DataFrame = pd.DataFrame(student_data, columns=["student_id", "age"])
    return ans
