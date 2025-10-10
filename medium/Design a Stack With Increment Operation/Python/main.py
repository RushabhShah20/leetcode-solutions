# Problem: Design a Stack With Increment Operation
# Link to the problem: https://leetcode.com/problems/design-a-stack-with-increment-operation/
class CustomStack:

    def __init__(self, maxSize: int):
        self.ans: List[int] = []
        self.n = maxSize

    def push(self, x: int) -> None:
        if len(self.ans) < self.n:
            self.ans.append(x)

    def pop(self) -> int:
        if len(self.ans) == 0:
            return -1
        else:
            return self.ans.pop()

    def increment(self, k: int, val: int) -> None:
        for i in range(0, min(k, len(self.ans))):
            self.ans[i] += val


# Your CustomStack object will be instantiated and called as such:
# obj = CustomStack(maxSize)
# obj.push(x)
# param_2 = obj.pop()
# obj.increment(k,val)
