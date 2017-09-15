#include<iostream>
using namespace std;
int main()
{
  int a;
  cout<<"Enter week number:";
  cin>>a;
  cout<<"The week day is ";
  if(a==1)
    cout<<"monday";
  else if(a==2)
    cout<<"tuesday";
  else if(a==3)
    cout<<"wednesday";
  else if(a==4)
    cout<<"thursday";
  else if(a==5)
    cout<<"friday";
  else if(a==6)
    cout<<"saturday";
  else if(a==7)
    cout<<"sunday";
  else
    cout<<"error";

  return 0;
}
