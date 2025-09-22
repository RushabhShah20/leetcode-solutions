# Problem: Count Elements With Maximum Frequency
# Link to the problem: https://leetcode.com/problems/count-elements-with-maximum-frequency/
class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        x: Dict[int, int] = dict()
        for i in range(0, len(nums)):
            if nums[i] in x:
                x[nums[i]] += 1
            else:
                x[nums[i]] = 1
        y: DefaultDict[int, List[int]] = defaultdict()
        for key, value in x.items():
            if not value in y:
                y[value] = []
            for j in range(0, value):
                y[value].append(key)
        maxFreq: int = 0
        for freq in y.keys():
            maxFreq = max(maxFreq, freq)
        ans: int = y[maxFreq]
        return len(ans)
