// Problem: Equal Rational Numbers
// Link to the problem: https://leetcode.com/problems/equal-rational-numbers/
class Solution {
  int getNumerator(String n) {
    int ans = 0;
    int n_open_bracket = n.indexOf('('),
        n_close_bracket = n.indexOf(')'),
        n_decimal_point = n.indexOf('.');
    if (n_open_bracket == -1) {
      if (n_decimal_point == -1) {
        return int.parse(n);
      } else {
        String n_non_decimal_string = n.substring(0, n_decimal_point);
        int n_non_decimal_no = int.parse(n_non_decimal_string);
        String n_decimal_part_string = n.substring(
          n_decimal_point + 1,
          (n.length),
        );
        int n_decimal_part_no =
            n_decimal_part_string.length == 0
                ? 0
                : int.parse(n_decimal_part_string);
        ans =
            ((pow(10, n_decimal_part_string.length).toInt() *
                    n_non_decimal_no) +
                (pow(10, 0) * n_decimal_part_no).toInt());
        return ans;
      }
    } else {
      String n_integer = n.substring(0, n_decimal_point);
      String n_non_repeating_part = n.substring(
        n_decimal_point + 1,
        n_open_bracket,
      );
      String n_repeating_part = n.substring(
        n_open_bracket + 1,
        n_close_bracket,
      );
      int n_integer_no = int.parse(n_integer);
      int n_non_repeating_part_no =
          (n_non_repeating_part.length == 0
              ? 0
              : int.parse(n_non_repeating_part));
      int n_repeating_part_no = int.parse(n_repeating_part);
      int real =
          ((pow(10, n_non_repeating_part.length).toInt() * n_integer_no) +
              (pow(10, 0) * n_non_repeating_part_no).toInt());
      int complete =
          ((pow(
                    10,
                    n_non_repeating_part.length + n_repeating_part.length,
                  ).toInt() *
                  n_integer_no) +
              (pow(10, n_repeating_part.length).toInt() *
                  n_non_repeating_part_no) +
              (pow(10, 0).toInt() * n_repeating_part_no));
      ans = complete - real;
      return ans;
    }
  }

  int getDenominator(String n) {
    int ans = 0;
    int n_open_bracket = n.indexOf('('),
        n_close_bracket = n.indexOf(')'),
        n_decimal_point = n.indexOf('.');
    if (n_open_bracket == -1) {
      if (n_decimal_point == -1) {
        return 1;
      } else {
        String n_decimal_part_string = n.substring(
          n_decimal_point + 1,
          n.length,
        );
        ans = (pow(10, n_decimal_part_string.length).toInt());
        return ans;
      }
    } else {
      int n_nonRepeatingDecimalPartLength =
          n_open_bracket - n_decimal_point - 1;
      int n_repeatingPartLength = n_close_bracket - n_open_bracket - 1;
      ans =
          (pow(
                10,
                n_nonRepeatingDecimalPartLength + n_repeatingPartLength,
              ).toInt() -
              pow(10, n_nonRepeatingDecimalPartLength).toInt());
      return ans;
    }
  }

  void reduceFraction(int x, int y) {
    int d;
    d = gcd(x, y);

    x = x ~/ d;
    y = y ~/ d;
  }

  int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
  }

  bool isRationalEqual(String s, String t) {
    int s_numerator = 0, s_denominator = 0, t_numerator = 0, t_denominator = 0;
    s_numerator = getNumerator(s);
    s_denominator = getDenominator(s);
    t_numerator = getNumerator(t);
    t_denominator = getDenominator(t);
    reduceFraction(s_numerator, s_denominator);
    reduceFraction(t_numerator, t_denominator);
    int x = s_numerator * t_denominator;
    int y = t_numerator * s_denominator;
    return x == y;
  }
}
