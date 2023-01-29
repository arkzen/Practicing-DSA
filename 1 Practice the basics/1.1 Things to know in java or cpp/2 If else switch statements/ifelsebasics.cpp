#include<bits-stdc++.h>
using namespace std;
int main(){

short x,y;

cout << "Enter your age in years:" ;
cin>>x;

if(x>=18){
cout <<endl << "You are an adult";
}
else{
    cout <<endl<< "You are not adult yet";
    y=18-x;
     cout <<endl<< "You will be adult after " << y;
}
    return 0;
}