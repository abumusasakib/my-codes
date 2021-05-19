#include <iostream>
using namespace std;
int main()
{
   int number1, number2, largestNumber;

   cout << "Enter the first number: ";
   cin >> number1;
   
   cout << "Enter the second number: ";
   cin >> number2;

   largestNumber = (number1 > number2) ? number1 : number2;

   while(largestNumber > 1)
   {
      if((largestNumber % number1 == 0) && (largestNumber % number2 == 0))
      {
         cout << "LCM: " << largestNumber << endl;
         break;
      }

      largestNumber++;
   }

   return 0;
}