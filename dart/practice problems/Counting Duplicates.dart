// https://www.codewars.com/kata/54bf1c2cd5b56cc47f0007a1
// Count the number of Duplicates
// Write a function that will return the count of distinct case-insensitive alphabetic characters and numeric digits that occur more than once in the input string. The input string can be assumed to contain only alphabets (both uppercase and lowercase) and numeric digits.

// Example
// "abcde" -> 0 # no characters repeats more than once
// "aabbcde" -> 2 # 'a' and 'b'
// "aabBcde" -> 2 # 'a' occurs twice and 'b' twice (`b` and `B`)
// "indivisibility" -> 1 # 'i' occurs six times
// "Indivisibilities" -> 2 # 'i' occurs seven times and 's' occurs twice
// "aA11" -> 2 # 'a' and '1'
// "ABBA" -> 2 # 'A' and 'B' each occur twice

int duplicateCount(String text){
  // Convert the input string to lowercase for case-insensitive comparison
  String lowerCaseInput = text.toLowerCase();
  
  // Create a list to store characters that occur more than once
  List<String> duplicatesList = [];

  // Create a set to store unique characters
  Set<String> uniqueSet = {};

  for (int i = 0; i < lowerCaseInput.length; i++) {
    String currentChar = lowerCaseInput[i];

    if (uniqueSet.contains(currentChar)) {
      // If the character is already in the set, it's a duplicate, add it to the list
      duplicatesList.add(currentChar);
    } else {
      // Otherwise, add it to the set
      uniqueSet.add(currentChar);
    }
  }

  // The number of distinct case-insensitive characters that occur more than once
  return duplicatesList.toSet().length;
}

void main() {
  print(duplicateCount("abcde")); // 0
  print(duplicateCount("aabbcde")); // 2
  print(duplicateCount("aabBcde")); // 2
  print(duplicateCount("indivisibility")); // 1
  print(duplicateCount("Indivisibilities")); // 2
  print(duplicateCount("aA11")); // 2
  print(duplicateCount("ABBA")); // 2
}