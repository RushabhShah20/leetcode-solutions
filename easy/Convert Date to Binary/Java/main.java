// Problem: Convert Date to Binary
// Link to the problem: https://leetcode.com/problems/convert-date-to-binary/
class Solution {
    public long toBinary(long n) {
        long binary = 0;
        long multiplier = 1;
        while (n > 0) {
            long remainder = n % 2;
            binary += remainder * multiplier;
            n /= 2;
            multiplier *= 10;
        }
        return binary;
    }

    public String convertDateToBinary(String date) {
        String yyyy = date.substring(0, 4);
        String mm = date.substring(5, 7);
        String dd = date.substring(8, 10);
        StringBuilder sb = new StringBuilder();
        long year = Long.parseLong(yyyy);
        long month = Long.parseLong(mm);
        long day = Long.parseLong(dd);
        sb.append((toBinary(year))).append("-").append(toBinary(month)).append("-").append(toBinary(day));
        return sb.toString();
    }
}
