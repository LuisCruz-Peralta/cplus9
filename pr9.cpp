#include <iostream>
using namespace std;

int foo [] = {16, 2, 77, 40, 12071}; //array de enteros
int n, result=0;

int main ()
{
  for ( n=0 ; n<5 ; ++n )
  {
    result += foo[n]; //suma de todo los elementos del array 12206
  }
  cout << result<<endl;
  return 0;
}
