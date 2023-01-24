#include<bits-stdc++.h>
using namespace std;
int main(){

short x,y;

cout << "Enter your marks here:" ;
cin>>x;

if(x<25){
cout <<endl << "You are failed in that course, your grade is F";
}
else if(x<=44){
cout <<endl << "Your grade is E";
}
else if(x<=49){
cout <<endl << "Your grade is D";
}
else if(x<=59){
cout <<endl << "Your grade is C";
}
else if(x<=79){
cout <<endl << "Your grade is B";
}
else if(x<=100){
cout <<endl << "Your grade is A";
}

else{
    cout <<endl<< "Enter correct marks";
}
    return 0;
}