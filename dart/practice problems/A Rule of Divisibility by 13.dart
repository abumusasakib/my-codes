// https://www.codewars.com/kata/564057bc348c7200bd0000ff/train/dart
// From Wikipedia:

// "A divisibility rule is a shorthand way of determining whether a given integer is divisible by a fixed divisor without performing the division, usually by examining its digits."

// When you divide the successive powers of 10 by 13 you get the following remainders of the integer divisions:

// 1, 10, 9, 12, 3, 4 because:

// 10 ^ 0 ->  1 (mod 13)
// 10 ^ 1 -> 10 (mod 13)
// 10 ^ 2 ->  9 (mod 13)
// 10 ^ 3 -> 12 (mod 13)
// 10 ^ 4 ->  3 (mod 13)
// 10 ^ 5 ->  4 (mod 13)
// (For "mod" you can see: https://en.wikipedia.org/wiki/Modulo_operation)

// Then the whole pattern repeats. Hence the following method:

// Multiply

// the right most digit of the number with the left most number in the sequence shown above,
// the second right most digit with the second left most digit of the number in the sequence.
// The cycle goes on and you sum all these products. Repeat this process until the sequence of sums is stationary.

// Example:
// What is the remainder when 1234567 is divided by 13?

// 7      6     5      4     3     2     1  (digits of 1234567 from the right)
// ×      ×     ×      ×     ×     ×     ×  (multiplication)
// 1     10     9     12     3     4     1  (the repeating sequence)
// Therefore following the method we get:

//  7×1 + 6×10 + 5×9 + 4×12 + 3×3 + 2×4 + 1×1 = 178

// We repeat the process with the number 178:

// 8x1 + 7x10 + 1x9 = 87

// and again with 87:

// 7x1 + 8x10 = 87

// From now on the sequence is stationary (we always get 87) and the remainder of 1234567 by 13 is the same as the remainder of 87 by 13 ( i.e 9).

// Task:
// Call thirt the function which processes this sequence of operations on an integer n (>=0). thirt will return the stationary number.

// thirt(1234567) calculates 178, then 87, then 87 and returns 87.

// thirt(321) calculates 48, 48 and returns 48

List<int> reverseNumberToList(int n) {
  List<int> digits = [];
  
  while (n > 0) {
    int remainder = n % 10;
    digits.add(remainder);
    n = n ~/ 10;
  }

  return digits;
}

int thirt(int n) {
  // Convert the input number to a list of digits in reverse order
  List<int> digits = reverseNumberToList(n);
  
  // The repeating sequence
  List<int> pattern = [1, 10, 9, 12, 3, 4];
  
  // Apply the algorithm until a stationary number is reached
  int sum = 0;
  int patternIndex = 0;

  while (digits.isNotEmpty) {
    sum += digits.removeAt(0) * pattern[patternIndex];
    patternIndex = (patternIndex + 1) % pattern.length;
  }
  
  // If the sum has changed, recursively apply the algorithm to the new sum
  return (sum == n) ? sum : thirt(sum);
}

void main() {
  print(thirt(1234567)); // Expected output: 87
  print(thirt(321));      // Expected output: 48
}