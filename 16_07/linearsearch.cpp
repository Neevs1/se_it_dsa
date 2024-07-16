#include <iostream>
using namespace std;


void inputarr(int[],int);
void search(int[],int);

int main(){
    int num;
    cout<<"Enter length of array"<<endl;
    cin>>num;
    int arr[num];
    inputarr(arr,num);
    search(arr,num);
    return 0;
}

void inputarr(int a[],int length){
    for(int i=0;i<length;i++){
        cout<<"Enter number at position "<<i+1<<endl;
        cin>>a[i];
    }         
}
void search(int a[],int length){
    int target,ctr=0;//counter to check for multiple cases and to handle condition of element not present
    cout<<"Enter target number"<<endl;
    cin>>target;
    for(int i=0;i<length;i++){
        if(target==a[i]){
            cout<<"Element is found at position "<<i+1<<endl;
            ctr++;           
        }
    }
    if(ctr==0){
        cout<<"Element is not found in given array"<<endl;
    }
    
}