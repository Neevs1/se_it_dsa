#include <bits/stdc++.h>
using namespace std;

int main(){

int num;

cout<<"Enter length of fibonacci series"<<endl;
cin>>num;
int fibonacci[num];
fibonacci[0]=0;
fibonacci[1]=1;
for(int i = 2;i<num;i++){
fibonacci[i]=fibonacci[(i-1)]+fibonacci[(i-2)];
}

for(int j = 0;j<num;j++){
 cout<<fibonacci[j]<<" ";
}
}
