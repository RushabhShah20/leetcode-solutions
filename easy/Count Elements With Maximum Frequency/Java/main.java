// Problem: Count Elements With Maximum Frequency
// Link to the problem: https://leetcode.com/problems/count-elements-with-maximum-frequency/
class Solution {
    public int maxFrequencyElements(int[] nums) {
        Map<Integer, Integer> x = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            x.put(nums[i], x.getOrDefault(nums[i], 0) + 1);
        }
        Map<Integer, List<Integer>> y = new HashMap<>();
        for (Map.Entry<Integer, Integer> i : x.entrySet()) {
            if (!y.containsKey(i.getValue())) {
                y.put(i.getValue(), new ArrayList<>());
            }
            for (int j = 0; j < i.getValue(); j++) {
                y.get(i.getValue()).add(i.getKey());
            }
        }
        int maxFreq = 0;
        for (Map.Entry<Integer, List<Integer>> i : y.entrySet()) {
            maxFreq = Math.max(maxFreq, i.getKey());
        }
        List<Integer> ans = y.get(maxFreq);
        return ans.size();
    }
}