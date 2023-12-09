// https://www.codewars.com/kata/55d24f55d7dd296eb9000030/train/dart
// Write a program that finds the summation of every number from 1 to num. The number will always be a positive integer greater than 0. Your function only needs to return the result, what is shown between parentheses in the example below is how you reach that result and it's not part of it, see the sample tests.

// For example (Input -> Output):

// 2 -> 3 (1 + 2)
// 8 -> 36 (1 + 2 + 3 + 4 + 5 + 6 + 7 + 8)

int summation(int n) {
  int sum = 0;
  for(int i = 1; i <= n; i++){
    sum = sum + i;
  }
  return sum;
}

void main() {
  // Test Case 1: n = 1
  print(summation(1)); // Output: 1 (1)

  // Test Case 2: n = 5
  print(summation(5)); // Output: 15 (1 + 2 + 3 + 4 + 5)

  // Test Case 3: n = 10
  print(summation(10)); // Output: 55 (1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10)

  // Test Case 4: n = 0 (edge case)
  print(summation(0)); // Output: 0 (no numbers to sum)

  // Test Case 5: n = 100
  print(summation(100)); // Output: 5050 (sum of numbers from 1 to 100)
}
