#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
int x;
cout<< "Enter a positive integer: ";
cin>> x;
cout<< "Factorial of"<<x<<"="<<factorial(x);
return 0;
}
int factorial(int n)
{
if(x>1)
return x * factorial(x-1);
else
return 1;
}
