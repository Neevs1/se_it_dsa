#include <iostream>
using namespace std;

void inputarr(int[],int);
void bubblesort(int[],int);
void outputarr(int[],int);

int main(){
    int l;
    cout<<"Enter length of array"<<endl;
    cin>>l;
    int arr[l];
    inputarr(arr,l);
    bubblesort(arr,l);
    cout<<"Sorted array is \n";
    outputarr(arr,l);
    return 0;
}

void inputarr(int arr[],int length){
    for(int i=0;i<length;i++){
        cout<<"Enter element at position "<<i+1<<endl;
        cin>>arr[i];
    }
}

void outputarr(int arr[],int length){
    for(int i=0;i<length;i++){
       cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

void bubblesort(int arr[],int length){
    for(int i =0;i<length;i++){
        for(int j=0;j<length;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
}