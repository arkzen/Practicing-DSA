#include<bits-stdc++.h>
using namespace std;
int main(){

short x;

cout << "Enter your age in years:" ;
cin>>x;

if(x<18){
cout << "You are not eligible for the job";
}
else if (x<=57){
    cout << "You are eligible for the job";
    if(x>=55){
        cout<<", but retirement is soon.";
    }
     }
else {
    cout<<"Its time for your retirement";
}     
    return 0;
}