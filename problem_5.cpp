#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char *str)
{
  size_t length = strlen(str);

  char *start = str;
  char *end = str + length - 1;

  while (start < end)
  {
    char temp = *start;
    *start = *end;
    *end = temp;

    ++start;
    --end;
  }
}

int main()
{
  cout << "------------------------- The maximum string length is 100 -------------------------" << endl
       << "Enter a string: ";
  char userInput[100];
  cin.getline(userInput, sizeof(userInput));

  char *dynamicStr = new char[strlen(userInput) + 1];

  strcpy(dynamicStr, userInput);

  reverseString(dynamicStr);

  cout << "Original String: " << userInput << endl;
  cout << "Reversed String: " << dynamicStr << endl;

  delete[] dynamicStr;

  return 0;
}
