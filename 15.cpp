#include<iostream>
#include<cmath>
using namespace std;
int main()
{float a,b,c;
cout<<"Enter the three sides";
cin>>a>>b>>c;
if(a+b+c>2*a && a+b+c>2*b && a+b+c>2*c)
cout<<"\nIt is a triangle";
else
cout<<"\nIts not a triangle";
}
