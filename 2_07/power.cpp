//Program to calculate power of given number


#include <iostream>
using namespace std;

int main(){
 int num,pow;
 int ans=1;
 cout<<"Enter number"<<endl;
 cin>>num;
 cout<<"Enter required power"<<endl;
 cin>>pow;
 for(int i = 1;i<(pow+1);i++){
       ans=ans*num;
       }
cout<<"Required number is "<<ans;
}
