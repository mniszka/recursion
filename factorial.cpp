
//5! = 5*4*3*2*1 = 120

#include<iostream>
using namespace std;

int expo(int n)
{
  if (n==1) return 1;
  else return n*expo(n-1);
}


int main()
{
  cout<<expo(5);

}
