#include <bits/stdc++.h>
using namespace std;

void pattern2(int n){
    int i,j;

    for(i=0;i<n;i++){

        for(j=0;j<=i;j++){

        cout<<"* ";
        }
    cout<<endl;    
  }
  }


int main() {

int t,c;
cin>>t;
for(c=0;c<t;c++){
   int n;
    cin>>n;
    pattern2(n);
    cout<<endl;
}
    return 0;
}