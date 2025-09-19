# Problem: Design Spreadsheet
# Link to the problem: https://leetcode.com/problems/design-spreadsheet/
class Spreadsheet:
    def __init__(self, rows: int):
        self.ans: Dict[str, int] = {}

    def setCell(self, cell: str, value: int) -> None:
        self.ans[cell] = value

    def resetCell(self, cell: str) -> None:
        if cell in self.ans:
            del self.ans[cell]

    def getValue(self, formula: str) -> int:
        plus_pos = formula.find("+")
        x = formula[1:plus_pos]
        y = formula[plus_pos + 1 :]
        if not x[0].isdigit() and not y[0].isdigit():
            return self.ans.get(x, 0) + self.ans.get(y, 0)
        elif not x[0].isdigit() and y[0].isdigit():
            return self.ans.get(x, 0) + int(y)
        elif x[0].isdigit() and not y[0].isdigit():
            return self.ans.get(y, 0) + int(x)
        else:
            return int(x) + int(y)


# Your Spreadsheet object will be instantiated and called as such:
# obj = Spreadsheet(rows)
# obj.setCell(cell,value)
# obj.resetCell(cell)
# param_3 = obj.getValue(formula)
