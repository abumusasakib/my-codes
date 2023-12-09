// https://www.codewars.com/kata/53da3dbb4a5168369a0000fe/train/dart
// Create a function that takes an integer as an argument and returns "Even" for even numbers or "Odd" for odd numbers.

String evenOrOdd(int number) {
  if (number % 2 == 0){
    return "Even";
  }
  else if (number % 2 != 0){
    return "Odd";
  }
  else{
    return "None";
  }
}

void main() {
  print(evenOrOdd(0));   // Output: "Even" (0 is an even number)
  print(evenOrOdd(5));   // Output: "Odd" (5 is an odd number)
  print(evenOrOdd(10));  // Output: "Even" (10 is an even number)
  print(evenOrOdd(-3));  // Output: "Odd" (-3 is an odd number)
  print(evenOrOdd(100)); // Output: "Even" (100 is an even number)
}
