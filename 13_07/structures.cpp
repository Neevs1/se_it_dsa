#include <bits/stdc++.h>
using namespace std;

struct Cars
{
    string brand;
    int year;
};

int main(){
    Cars brands[15];
    for(int i=0;i<15;i++){
        cout<<"Enter brand name"<<endl;
        cin>>brands[i].brand;
        cout<<"Enter brand year"<<endl;
        cin>>brands[i].year;
    }
    cout<<"Brand name \t Brand year"<<endl;
    for(int i=0;i<15;i++){
        cout<<brands[i].brand<<"\t"<<brands[i].year<<endl;
    }
}