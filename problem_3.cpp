#include <iostream>
#include <cstring>
using namespace std;

char *concatenateStrings(const char *str1, const char *str2)
{
  size_t len1 = strlen(str1);
  size_t len2 = strlen(str2);
  size_t totalLength = len1 + len2;

  char *result = new char[totalLength + 1];

  strcpy(result, str1);

  strcat(result, str2);

  return result;
}

int main()
{
  const char *str1 = "Hello, ";
  const char *str2 = "world!";

  char *concatenatedString = concatenateStrings(str1, str2);

  cout << "Concatenated String: " << concatenatedString << endl;

  delete[] concatenatedString;

  return 0;
}
