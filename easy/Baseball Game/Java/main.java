// Problem: Baseball Game
// Link to the problem: https://leetcode.com/problems/baseball-game/
class Solution {
    public int calPoints(String[] operations) {
        int ans = 0;
        List<Integer> a = new ArrayList<>();
        for (int i = 0; i < operations.length; i++) {
            if (operations[i].equals("+")) {
                a.add(a.get(a.size() - 1) + a.get(a.size() - 2));
            } else if (operations[i].equals("D")) {
                a.add(2 * a.get(a.size() - 1));
            } else if (operations[i].equals("C")) {
                a.remove(a.size() - 1);
            } else {
                a.add(Integer.parseInt(operations[i]));
            }
        }
        for (int i = 0; i < a.size(); i++) {
            ans += a.get(i);
        }
        return ans;
    }
}