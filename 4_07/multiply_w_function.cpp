#include <iostream>
using namespace std;
int mul(int,int);
int main(){
 int a,b;
 cout<<"Enter both numbers to be multiplied \n";
 cin>>a>>b;
 cout<<"Product is "<<mul(a,b)<<endl;
 return 0;
}

int mul(int a,int b){
  return a*b;
}
