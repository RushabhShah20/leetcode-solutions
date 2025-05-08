# Problem: Detect Capital
# Link to the problem: https://leetcode.com/problems/detect-capital/
class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        all_lowercase: bool = True
        all_uppercase: bool = True
        for i in range(1, len(word), 1):
            if word[i].islower():
                all_uppercase = False
            if word[i].isupper():
                all_lowercase = False
        if word[0].islower() and all_lowercase == True:
            return True
        elif word[0].isupper() and all_uppercase == True:
            return True
        elif word[0].isupper() and all_lowercase == True:
            return True
        else:
            return False
