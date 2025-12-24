// Problem: Apple Redistribution into Boxes
// Link to the problem: https://leetcode.com/problems/apple-redistribution-into-boxes/
class Solution {
    public int minimumBoxes(int[] apple, int[] capacity) {
        int ans = 0;
        Arrays.sort(capacity);
        for (int i = 0; i < capacity.length / 2; i++) {
            int temp = capacity[i];
            capacity[i] = capacity[capacity.length - i - 1];
            capacity[capacity.length - i - 1] = temp;
        }
        int total = 0;
        for (final int a : apple) {
            total += a;
        }
        for (final int c : capacity) {
            if (total >= c) {
                total -= c;
                ans++;
            } else {
                if (total != 0) {
                    ans++;
                }
                break;
            }
        }
        return ans;
    }
}