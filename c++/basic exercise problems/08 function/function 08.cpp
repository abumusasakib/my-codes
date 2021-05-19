#include <iostream>
using namespace std;

int lcmOfTwoNumbers(int number1, int number2)
{
   int largestNumber;

   largestNumber = (number1 > number2) ? number1 : number2;

   while(largestNumber > 1)
   {
      if((largestNumber % number1 == 0) && (largestNumber % number2 == 0))
      {
         break;
      }

      largestNumber++;
   }

   int lcm = largestNumber;

   return lcm;
}

int main()
{
	int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "LCM of the two numbers is: " << lcmOfTwoNumbers(num1, num2) << endl;

    return 0;
}