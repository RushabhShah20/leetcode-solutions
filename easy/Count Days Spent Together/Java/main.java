// Problem: Count Days Spent Together
// Link to the problem: https://leetcode.com/problems/count-days-spent-together/
class Solution {
    public int dayOfTheYear(final String date, final int[] a) {
        final int x = Integer.parseInt(date.substring(0, 2)), y = Integer.parseInt(date.substring(3, 5));
        final int ans = a[x - 1] + y;
        return ans;
    }

    public int countDaysTogether(String arriveAlice, String leaveAlice, String arriveBob, String leaveBob) {
        final int[] x = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        int[] y = new int[13];
        for (int i = 1; i < 13; i++) {
            y[i] = y[i - 1] + x[i - 1];
        }
        final int a = dayOfTheYear(arriveAlice, y), b = dayOfTheYear(leaveAlice, y);
        final int c = dayOfTheYear(arriveBob, y), d = dayOfTheYear(leaveBob, y);
        final int ans = Math.max(0, Math.min(b, d) - Math.max(a, c) + 1);
        return ans;
    }
}