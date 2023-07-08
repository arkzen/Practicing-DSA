#include<bits-stdc++.h>
using namespace std;
// Functions are set of code which performs something for you 
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times
// void -> which does not returns anything
// return
// parameterised
// non parameterised
// Take two numbers and print its sum

 //pass by Value
 void printnamevalue(string s){ 
   s[0]='A';
    cout<< "Hey, Pass by "<< s <<endl;
 }

 //pass by Reference
 //note that array always pass by ref, you dont need to pass & with it
 void printnameref(string &s){ 
      s[0]='A';
    cout<< "Hey, pass by ref: "<< s <<endl;
 }

 int sum(int a,int b){
    int c=a+b;
    return c;
 }

int main(){
    string name,name2;
    cin>>name;
    cin>>name2;
   printnamevalue(name);
       cout<< "Hey "<< name <<endl;

   printnameref(name2);
       cout<< "Hey "<< name2 <<endl;

    int e,f,g;
    cin>>e>>f;
    g=sum(e,f);
    cout<<g;
return 0;
}