// Problem: Equal Rational Numbers
// Link to the problem: https://leetcode.com/problems/equal-rational-numbers/
class Solution {
    public static long getNumerator(String n) {
        long ans = 0;
        int n_open_bracket = n.indexOf('('), n_close_bracket = n.indexOf(')'), n_decimal_point = n.indexOf('.');
        if (n_open_bracket == -1) {
            if (n_decimal_point == -1) {
                return Integer.parseInt(n);
            } else {
                String n_non_decimal_string = n.substring(0, n_decimal_point);
                long n_non_decimal_no = Long.parseLong(n_non_decimal_string);
                String n_decimal_part_string = n.substring(n_decimal_point + 1, (n.length()));
                long n_decimal_part_no = n_decimal_part_string.length() == 0 ? 0
                        : Long.parseLong(n_decimal_part_string);
                ans = (long) ((Math.pow(10, n_decimal_part_string.length()) * n_non_decimal_no)
                        + (Math.pow(10, 0) * n_decimal_part_no));
                return ans;
            }
        } else {
            String n_integer = n.substring(0, n_decimal_point);
            String n_non_repeating_part = n.substring(n_decimal_point + 1, n_open_bracket);
            String n_repeating_part = n.substring(n_open_bracket + 1, n_close_bracket);
            long n_integer_no = Long.parseLong(n_integer);
            long n_non_repeating_part_no = (n_non_repeating_part.length() == 0 ? 0
                    : Long.parseLong(n_non_repeating_part));
            long n_repeating_part_no = Long.parseLong(n_repeating_part);
            long real = (long) ((Math.pow(10, n_non_repeating_part.length()) * n_integer_no)
                    + (Math.pow(10, 0) * n_non_repeating_part_no));
            long complete = (long) ((Math.pow(10,
                    n_non_repeating_part.length() + n_repeating_part.length()) * n_integer_no)
                    + (Math.pow(10, n_repeating_part.length()) * n_non_repeating_part_no)
                    + (Math.pow(10, 0) * n_repeating_part_no));
            ans = complete - real;
            return ans;
        }
    }

    public static long getDenominator(String n) {
        long ans = 0;
        int n_open_bracket = n.indexOf('('), n_close_bracket = n.indexOf(')'), n_decimal_point = n.indexOf('.');
        if (n_open_bracket == -1) {
            if (n_decimal_point == -1) {
                return 1;
            } else {
                String n_decimal_part_string = n.substring(n_decimal_point + 1, n.length());
                ans = (long) (Math.pow(10, n_decimal_part_string.length()));
                return ans;
            }
        } else {
            long n_nonRepeatingDecimalPartLength = n_open_bracket - n_decimal_point - 1;
            long n_repeatingPartLength = n_close_bracket - n_open_bracket - 1;
            ans = (long) (Math.pow(10, n_nonRepeatingDecimalPartLength + n_repeatingPartLength)
                    - Math.pow(10, n_nonRepeatingDecimalPartLength));
            return ans;
        }
    }

    public void reduceFraction(long x, long y) {
        long d;
        d = gcd(x, y);

        x = x / d;
        y = y / d;
    }

    public long gcd(long a, long b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }

    public boolean isRationalEqual(String s, String t) {
        long s_numerator = 0, s_denominator = 0, t_numerator = 0, t_denominator = 0;
        s_numerator = getNumerator(s);
        s_denominator = getDenominator(s);
        t_numerator = getNumerator(t);
        t_denominator = getDenominator(t);
        reduceFraction(s_numerator, s_denominator);
        reduceFraction(t_numerator, t_denominator);
        long x = s_numerator * t_denominator;
        long y = t_numerator * s_denominator;
        return x == y;
    }
}