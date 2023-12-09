// https://www.codewars.com/kata/643af0fa9fa6c406b47c5399/train/dart
// Task
// Given a point in a Euclidean plane (x and y), return the quadrant the point exists in: 1, 2, 3 or 4 (integer). x and y are non-zero integers, therefore the given point never lies on the axes.

// Examples
// (1, 2)     => 1
// (3, 5)     => 1
// (-10, 100) => 2
// (-1, -9)   => 3
// (19, -56)  => 4
// Quadrants
// There are four quadrants:

// First quadrant, the quadrant in the top-right, contains all points with positive X and Y
// Second quadrant, the quadrant in the top-left, contains all points with negative X, but positive Y
// Third quadrant, the quadrant in the bottom-left, contains all points with negative X and Y
// Fourth quadrant, the quadrant in the bottom-right, contains all points with positive X, but negative Y
// More on quadrants: Quadrant (plane geometry) - Wikipedia

int quadrant(int x, int y) {
    if(x == 0 && y == 0)
    {
        return 0; // origin
    }
    else if(y == 0)
    {
        return 99; // x-axis
    }
    else if(x == 0)
    {
        return -99; // y-axis
    }
    else if(x > 0 && y > 0)
    {
        return 1; // 1st quadrant
    }
    else if(x < 0 && y > 0)
    {
        return 2; // 2nd quadrant
    }
    else if(x < 0 && y < 0)
    {
        return 3; // 3rd quadrant
    }
    else  // (x > 0 && y < 0)
    {
        return 4; // 4th quadrant
    }
}

void main() {
  // Test Case 1: Origin
  print(quadrant(0, 0)); // Output: 0 (origin)

  // Test Case 2: X-Axis
  print(quadrant(5, 0)); // Output: 99 (x-axis)

  // Test Case 3: Y-Axis
  print(quadrant(0, -3)); // Output: -99 (y-axis)

  // Test Case 4: 1st Quadrant
  print(quadrant(3, 4)); // Output: 1 (1st quadrant)

  // Test Case 5: 2nd Quadrant
  print(quadrant(-2, 7)); // Output: 2 (2nd quadrant)

  // Test Case 6: 3rd Quadrant
  print(quadrant(-5, -1)); // Output: 3 (3rd quadrant)

  // Test Case 7: 4th Quadrant
  print(quadrant(6, -2)); // Output: 4 (4th quadrant)
}
