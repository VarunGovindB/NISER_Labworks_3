#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
int n,first,last,k=0,t,a,b;
cout << " Enter any number: ";
cin >> n;
while(n!=0)
{
n=n/10;
k++;
}
first = n / pow(10,k);
last = n % 10;
a = first * (pow(10,k));
b = n % a;
n = b / 10;
t= last * (pow(10,k)) + n*10 + first;
cout<<t;
return 0;
}
