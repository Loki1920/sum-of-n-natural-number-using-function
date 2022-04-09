// sum of n natural number 

#include<iostream>
using namespace std;

int sum(int n){
  int i,ans=0;
  for(i=1;i<=n;i++){
    ans += i;
  }
  return ans;
}

int formulasum(int n){
  return (n*(n+1))/2;
}

int main(){
  cout<<"sum :"<<sum(5)<<endl;
  cout<<"sum :"<<sum(4);
  return 0;
}