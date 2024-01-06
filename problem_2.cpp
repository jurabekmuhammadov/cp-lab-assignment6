#include <iostream>
#include <string>
using namespace std;

int main()
{
  int size;
  cout << "Enter the size of the array: ";
  cin >> size;

  int *dynamicArr = new int[size];

  for (int i = 0; i < size; i++)
  {
    dynamicArr[i] = i;
  }

  cout << "Array elements: ";
  for (int i = 0; i < size; i++)
  {
    cout << dynamicArr[i] << " ";
  }

  delete[] dynamicArr;

  return 0;
}
