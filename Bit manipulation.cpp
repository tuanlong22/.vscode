#include<bits/stdc++.h>
using namespace std;
void powerof2(int &n){
    if((n&(n-1))==0){
       cout<<"is power of 2";
    }
    else{
        cout<<"not power of 2";
    }
}
void OddorEven(int &n){
    if((n&1)==0){
        cout<<"is Even";
    }
    else{
        cout<<"Odd";
    }
}
void GetithBit(int &n){
    int i;
    cin >> i;
 int mask = (n&(1<<i));
 if(mask){
    cout<<"1";
 }
 else{
    cout<<"0";
 }
}
void SetithBit(int &n, int i){
    cin >> i;
    int mask = (1<<i);
   n=n|mask;
   cout<<n;
}
void ClearithBit(int &n,int i){
    cin >> i;
    int mask =~(1<<i);
    n = n&mask;
    cout<<n;
}
void Clearlastithbit(int &n, int i){
    cin >> i;
    int mask = (-1<<i);
    n=n&mask;
}
void converttobinary(int &n){
    int p=1;
    int ans=0;
    while(n>0){
     int last_bit=(n&1);
     ans+=p*last_bit;
     n=n>>1;
     p=p*10;
    }
    cout<<"ans";
}
int main() {}
