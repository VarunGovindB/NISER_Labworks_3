#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
long k, number;
string a, sum = "";
string input;
number = 0;
cout << "Enter a number: ";
cin >> input;
if (input.length() % 4 == 1)
input = "000" + input;
else if	(input.length() % 4 == 2)
input = "00" + input;
else if (input.length() % 4 == 3)
input = "0" + input;
else
input = input;
for (long i = input.length() - 1; i >= 3; i -= 4) {
for (long l = 0; l <= 3; l++) {
k = pow(2, l);
if (input[i-l] == '1') {
number += k;
}
}
if (number == 10) 
{
a = "A";
}
else if (number == 11) 
{
a = "B";
}
else if (number == 12) 
{
a = "C";
}
else if (number == 13) 
{
a = "D";
}
else if (number == 14) 
{
a = "E";
}
else if (number == 15) 
{
a = "F";
}
else 
{
a = to_string(number);
}
sum = a + sum;
number = 0;
}
cout << sum << endl;
return 0;
}
