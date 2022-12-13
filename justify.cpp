#include <iostream>
using namespace std;

string justify(string str, int n, char delimiter = ':')
{
  string output = "";

  output += str;
  for (int i = str.length(); i < n; i++)
  {
    output += ' ';
  }
  output += delimiter;
  output += ' ';

  return output;
}