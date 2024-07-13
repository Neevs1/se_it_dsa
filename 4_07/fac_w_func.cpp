#include <iostream>
using namespace std;

int factorial(int);

int main(){
    int num;
    cout<<"Enter number for factorial calculation"<<endl;
    cin>>num;
    cout<<"Factorial of given number is "<<factorial(num)<<endl;
}

int factorial(int num){
    int fac = 1;
    for(int i = 1;i<=num;i++){
        fac = fac*i;
    }
    return fac;
}