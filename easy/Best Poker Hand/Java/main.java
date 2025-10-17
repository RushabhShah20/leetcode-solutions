// Problem: Best Poker Hand
// Link to the problem: https://leetcode.com/problems/best-poker-hand/
class Solution {
    public String bestHand(int[] ranks, char[] suits) {
        Map<Character, Integer> x = new HashMap<>();
        Map<Integer, Integer> y = new HashMap<>();
        int maxSuit = 0, maxRank = 0;
        for (int i = 0; i < suits.length; i++) {
            x.put(suits[i], x.getOrDefault(suits[i], 0) + 1);
        }
        for (int i = 0; i < ranks.length; i++) {
            y.put(ranks[i], y.getOrDefault(ranks[i], 0) + 1);
        }
        for (Map.Entry<Character, Integer> i : x.entrySet()) {
            maxSuit = Math.max(maxSuit, i.getValue());
        }
        for (Map.Entry<Integer, Integer> i : y.entrySet()) {
            maxRank = Math.max(maxRank, i.getValue());
        }
        if (maxSuit == 5) {
            return "Flush";
        } else if (maxRank >= 3) {
            return "Three of a Kind";
        } else if (maxRank == 2) {
            return "Pair";
        } else {
            return "High Card";
        }
    }
}