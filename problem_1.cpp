#include <iostream>
#include <string>
using namespace std;

void swapValues(int *ptr1, int *ptr2)
{
  int extra = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = extra;
}

int main()
{
  int a = 5, b = 10;
  int *ptrA = &a;
  int *ptrB = &b;

  swapValues(ptrA, ptrB);
  cout << "A = " << a << ", A = " << b << endl;

  return 0;
}
