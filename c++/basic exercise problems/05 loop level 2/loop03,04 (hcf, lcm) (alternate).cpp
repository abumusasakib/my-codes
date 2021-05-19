#include<iostream>
using namespace std;
int main()
{
    int num1, num2, product, hcf, lcm;
	
    cout << "Enter a Number :";
    cin >> num1;
    cout << "Enter a Number :";
    cin >> num2;
	
    product = num1 * num2;
	
    for(int i = 1; i <= product; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    cout << "HCF= " << hcf << endl;
	
	lcm = product / hcf;
	cout << "LCM= " << lcm << endl;
}