# Problem: Valid Parentheses
# Link to the problem: https://leetcode.com/problems/valid-parentheses/
class Solution:
    def isValid(self, s: str) -> bool:
        n: int = len(s)
        st: list[str] = []
        for i in range(0, n):
            if s[i] == "(" or s[i] == "{" or s[i] == "[":
                st.append(s[i])
            else:
                if len(st) == 0:
                    return False
                x: str = st[-1]
                y: str = s[i]
                if (
                    (x == "(" and y == ")")
                    or (x == "{" and y == "}")
                    or (x == "[" and y == "]")
                ):
                    st.pop()
                else:
                    return False
        ans: bool = len(st) == 0
        return ans
