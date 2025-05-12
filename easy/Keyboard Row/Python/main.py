# Problem: Keyboard Row
# Link to the problem: https://leetcode.com/problems/keyboard-row/
class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        first_row = "qwertyuiop"
        second_row = "asdfghjkl"
        third_row = "zxcvbnm"
        ans: List[str] = []
        for i in range(0, len(words), 1):
            if first_row.find(words[i][0].lower()) != -1:
                x: bool = True
                for j in range(0, len(words[i]), 1):
                    if first_row.find(words[i][j].lower()) == -1:
                        x = False
                        break
                if x == True:
                    ans.append(words[i])
            elif second_row.find(words[i][0].lower()) != -1:
                x: bool = True
                for j in range(0, len(words[i]), 1):
                    if second_row.find(words[i][j].lower()) == -1:
                        x = False
                        break
                if x == True:
                    ans.append(words[i])
            elif third_row.find(words[i][0].lower()) != -1:
                x: bool = True
                for j in range(0, len(words[i]), 1):
                    if third_row.find(words[i][j].lower()) == -1:
                        x = False
                        break
                if x == True:
                    ans.append(words[i])
        return ans
