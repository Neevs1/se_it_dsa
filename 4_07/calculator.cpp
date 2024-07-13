#include <iostream>
using namespace std;

int add(int,int);
int sub(int,int);
int mult(int,int);
int divi(int,int);

int main(){
    int num1,num2,choice;
    char proceed;
    const char yes = 'y';
    
    do{
    cout<<"Please enter numbers"<<endl;
    cin>>num1>>num2; //enter numbers
    cout<<"Please select operation \n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n";
    cout<<"Enter number to proceed \n";
    cin>>choice; //select choice
    if(choice>0 || choice<5){ //choice validity check
        switch(choice){
            case 1:
            cout<<"Sum of numbers is "<<add(num1,num2)<<endl;
            break;
            case 2:
            cout<<"Subtraction of numbers is "<<sub(num1,num2)<<endl;
            break; 
            case 3:
            cout<<"Product of numbers is "<<mult(num1,num2)<<endl;
            break; 
            case 4:
            cout<<"Quotient of numbers is " << divi(num1,num2)<<endl;
            break;
        }
    }
    else{
        cout<<"Invalid input";
    }
    cout<<"Press y(case sensitive) to continue. Press any other key to exit.";
    cin>>proceed;
    } while(proceed == yes);

}
int add(int num1,int num2){
    return num1+num2;
}
int sub(int num1,int num2){
    return num1-num2;
}
int mult(int num1,int num2){
    return num1*num2;
}
int divi(int num1,int num2){
    return num1/num2;
}