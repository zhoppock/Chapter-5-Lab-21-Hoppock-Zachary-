// Hoppock, Zachary
// sumFunction.cpp
// Using a function, calculate the sum of two inputted numbers
// Version #1
#include <iostream>
using namespace std;

void sum()
{
  int num1;
  int num2;
  cout << "Enter first Number to add: ";
  cin >> num1;
  cout << "Enter second Number to add: ";
  cin >> num2;
  int sum = num1 + num2;
  cout << "Sum = " << sum << endl;
}

int main() {
  sum();
  return 0;
}