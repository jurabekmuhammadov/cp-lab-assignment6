// I added 2 more math operations to this exercise (substraction and division)

#include <iostream>
#include <cstring>
using namespace std;

int add(int a, int b)
{
  return a + b;
}

int substract(int a, int b)
{
  return a - b;
}

int multiply(int a, int b)
{
  return a * b;
}

int divide(int a, int b)
{
  return a / b;
}

int main()
{
  int (*operation)(int, int);

  cout << "1.Addition" << endl;
  cout << "2.Substraction" << endl;
  cout << "3.Multiplication" << endl;
  cout << "3.Division" << endl;
  cout << "Choose operation:" << endl;
  int choice;
  cin >> choice;

  switch (choice)
  {
  case 1:
    operation = add;
    break;
  case 2:
    operation = substract;
    break;
  case 3:
    operation = multiply;
    break;
  case 4:
    operation = divide;
    break;
  default:
    cout << "Invalid choice. Exiting program." << endl;
  }

  int num1, num2;
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  int result = operation(num1, num2);

  cout << "Result: " << result << endl;

  return 0;
}
