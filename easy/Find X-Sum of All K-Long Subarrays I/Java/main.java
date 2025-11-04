// Problem: Find X-Sum of All K-Long Subarrays I
// Link to the problem: https://leetcode.com/problems/find-x-sum-of-all-k-long-subarrays-i/
class Solution {
    public int[] findXSum(int[] nums, int k, int x) {
        int n = nums.length;
        List<Integer> ans = new ArrayList<>();
        Map<Integer, Integer> m = new HashMap<>();
        for (int i = 0; i < n; i++) {
            if (i >= k) {
                m.put(nums[i], m.getOrDefault(nums[i], 0) + 1);
                m.put(nums[i - k], m.get(nums[i - k]) - 1);
                if (m.get(nums[i - k]) == 0) {
                    m.remove(nums[i - k]);
                }
            } else {
                m.put(nums[i], m.getOrDefault(nums[i], 0) + 1);
            }
            if (i >= k - 1) {
                List<Map.Entry<Integer, Integer>> v = new ArrayList<>(m.entrySet());
                Collections.sort(v, (a, b) -> {
                    if (a.getValue().equals(b.getValue())) {
                        return b.getKey() - a.getKey();
                    } else {
                        return b.getValue() - a.getValue();
                    }
                });
                int sum = 0;
                for (int j = 0; j < Math.min(x, v.size()); j++) {
                    sum += (v.get(j).getKey() * v.get(j).getValue());
                }
                ans.add(sum);
            }
        }
        return ans.stream().mapToInt(Integer::intValue).toArray();
    }
}