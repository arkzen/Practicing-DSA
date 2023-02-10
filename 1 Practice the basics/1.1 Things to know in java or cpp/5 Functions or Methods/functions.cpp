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

 void printname(string s){ 
    cout<< "Hey "<< s <<endl;
 }

 int sum(int a,int b){
    int c=a+b;
    return c;
 }

int main(){
    string name;
    cin>>name;
    printname(name);

    string name2;
    cin>>name2;
    printname(name2);

    int e,f,g;
    cin>>e>>f;
    g=sum(e,f);
    cout<<g;
return 0;
}