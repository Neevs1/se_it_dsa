#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number";
    cin>>num;

    switch(num)
    {
        case 0:
        cout<<"Invalid input";
        break;
        case 1:
        cout<<"Start of the week";
        break;
        case 2:
        cout<<"Start of the week";
        break;
        case 3:
        cout<<"Start of the week";
        break;
        case 4:
        cout<<"Mid of the week";
        break;
        case 5:
        cout<<"End of the week";
        break;
        case 6:
        cout<<"End of the week";
        break;
        case 7:
        cout<<"End of the week";
        break;
        default:
        cout<<"Invalid Input";
        break;
    }
}

