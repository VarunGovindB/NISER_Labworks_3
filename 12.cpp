#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"Enter month number:";
cin>>a;
if(a<8)
{
if(a%2==0)
cout<<"30 days";
else
cout<<"31 days";
} 
else
{
if(a%2==0)
cout<<"31 days";
else
cout<<"30 days";
}
return 0;
}
