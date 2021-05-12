//this is my grandgrandgrandmother (3x grand)

#include <iostream>
#include <string>
using namespace std;

string grand(int n)
{
  string g ="grand";
  if (n==1) return g;
  else return g+ grand(n-1);
}


int main()
{
 cout<<"This is my "<<grand(3)<<"mother";
}
