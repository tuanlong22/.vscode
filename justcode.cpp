#include <bits/stdc++.h> 
using namespace std;
#define ll long long int
#define F first
#define S second
#define pb push_back
#define mii map <int, int>
#define  msi map<string,int>
#define vi vector<int>
#define si set<int>
#define pi priority_queue<int>
#define is insert
int GetIthBits(int n,int i){
    int mask = (1<<i);
    return (n & mask)>0 ? 1:0;
}
 int ClearIthBit(int &n,int i){
    int mask = ~(1<<i);
   return (n&mask);
 }
 int SetIthBit(int &n,int i){
    int mask = (1<<i);
    n = n|mask;
 }
 int ClearLastithBit(int &n,int i){  
    int mask = (-1 << i);
    n=n&mask;
  }
int clearbitsinrange(int &n, int i, int j){
   int a = (~0)<<(j+1);
   int b = (1<<i) - 1;
   int mask = a|b;
   n  = n&mask;
}
int ReplaceBitsinrange(int &n, int i, int j, int m){
  clearbitsinrange(n,i,j);
  int mask =(m<<i);
  n=n|mask;
}
int Ispowerof2(int &n){
  if(n&(n-1)==0){
   cout<<"Is power of 2";
  }
  else {
   cout<<"is not power of 2";
  }
}
int CountSetBits(int &n){
  int count = 0;
  while(n>0){
    int last_bit = (n&1);
    count += last_bit;
    n=n>>1;
  }
  return count;
}
int CountBitsHack(int &n){
    int ans =0;
    while(n>0){
      n=n&(n-1); //remove the last set bit from the current number
      ans++;
    }
    return ans;
}
int ConvertintoBinary(int &n){
  int p=1;
  int ans =0;
  while(n>0){
    int last_bit =(n&1);
    ans+=p*last_bit;
    n=n>>1;
    p=p*10;
  }
  return ans;
}
int main() {
  int n;
  cin >> n;
  cout<<__builtin_clz(n)<<"\n"; // the number of zeros at the beginning of the number
  cout<<__builtin_ctz(n)<<"\n"; // the number of zeros at the end of the number
  cout<<__builtin_popcount(n)<<"\n"; // the number of ones in the number
  cout<<__builtin_parity(n)<<"\n"; // the parity of the number
}