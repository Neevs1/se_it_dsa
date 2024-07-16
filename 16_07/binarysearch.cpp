#include <iostream>
using namespace std;

int binarySearch(int[],int);
void inputArray(int[],int);

int main(){
    int l;
    cout<<"Enter length of array"<<endl;
    cin>>l;
    int arr[l];
    inputArray(arr,l);
    int result = binarySearch(arr,l);
    string res = (result==-1)?"Number not present in given array":"Number found at position "+result;
    cout<<res<<endl;    
}

void inputArray(int a[],int length){
    cout<<"Enter sorted array"<<endl;
    for(int i=0;i<length;i++){
        cout<<"Enter element at position "<<i+1<<endl;
        cin>>a[i];
    }
}
int binarySearch(int a[],int length){
    int target;
    cout<<"Enter number to be searched "<<endl;
    cin>>target;
    int high = length-1;
    int low = 0;
    //bool found = false;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        
        if (a[mid] == target)
            return mid;

        
        if (a[mid] < target)
            low = mid + 1;

       
        else
            high = mid - 1;
    }

   
    return -1;
}

