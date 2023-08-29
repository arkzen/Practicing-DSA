#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
   int i,j;
   for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        cout<<j<<" ";
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
    pattern(n);
    cout<<endl;
}
    return 0;
}