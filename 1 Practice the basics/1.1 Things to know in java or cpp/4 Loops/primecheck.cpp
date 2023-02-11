#include<bits-stdc++.h>
using namespace std;



int main(){
    int n;
    bool is_prime;
    cin>>n;
   
   for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
      is_prime = false;
      break;
    }
     if (is_prime)
    cout <<"Yes";
  else
    cout << "No";

return 0;
}}