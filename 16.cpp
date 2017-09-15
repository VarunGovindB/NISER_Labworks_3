#include<iostream>
#include<cmath>
using namespace std;
int main()
{ int a,b,c;
cout<<"Enter three sides";
cin>>a>>b>>c;
if (a+b+c>2*a && a+b+c>2*b && a+b+c>2*c)
{if(a==b && b==c)
cout<<"\nThe triangle is equilateral";
else if((a==b && a!=c) || (b==c && b!=a) || (c==a && a!=b))
cout<<"\nThe triangle is isoceles";
else
cout<<"\nThe triangle is scalene";
}else 
cout<<"\nIts not a triangle";
return 0;
}

