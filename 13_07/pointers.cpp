#include <iostream>
using namespace std;

int main(){
    int a = 50;
    int c = 70;
    int *b = &a;
    cout<<*b+c<<endl;
    cout<<b<<endl;
    cout<<&b<<endl;
}