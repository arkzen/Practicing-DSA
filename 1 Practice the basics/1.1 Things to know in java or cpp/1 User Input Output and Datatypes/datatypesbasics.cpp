#include<bits-stdc++.h>
using namespace std;
int main(){

// limits of integer is -2,147,483,648 to 2,147,483,647 , to remember -2x10^9 to -2x10^9
int x;
cout<<"Enter a integer number:";
cin >> x;
cout<< "printed int=" << x <<endl;

// limits of long long is -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807, to rem -9x10^18 to positive same
long long y;
cout<<"Enter a long long integer number:";
cin >> y;
cout<< "printed long long=" << y << endl;

//limits of float is 3.4E +/- 38 (7 digits)
float f;
cout<<"Enter a float number:";
cin >> f;
cout<< "printed float=" << f <<endl;

//limits of double is 1.7E +/- 308 (15 digits)
double d;
cout<<"Enter a double number:";
cin >> d;
cout<< "printed double=" << d <<endl;

string stri;
getline(cin,stri);
cout << "your string is :" << stri<<endl;

string s;
cout<<"Enter your string:";
cin >> s;
cout<< "your string is:" <<s;


return 0;
}