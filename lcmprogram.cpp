#include <iostream>
using namespace std;

int main() 
{
  int a,b,x;
  cin>>a;
  cin>>b;
  x=a>b ? a : b;
  do
  {
    if(x % a==0 && x % b==0)
    {
      cout<<x;
      break;
    }
    else
    {
      ++x;
    }
  }while(true);
  return 0;
}