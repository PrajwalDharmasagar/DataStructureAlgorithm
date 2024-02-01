#include<iostream>
using namespace std;

void print1(int i, int n){
  if(i>n) return;
  cout<<i<<endl;
  print1(i+1,n);
}

void print2(int n){
  if(n==0) return;
  print2(n-1);
  cout<<n<<endl;
}

int main(){
  int n=6;
  print1(1,6);
  print2(6);
}