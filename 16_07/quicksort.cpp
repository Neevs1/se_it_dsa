#include <iostream>
using namespace std;

void swap(int,int);
void input(int[],int);
void output(int[],int);
int partition(int[],int,int);
void quicksort(int[],int,int);

int main(){
    int l;
    cout<<"Enter length of array"<<endl;
    cin>>l;
    int a[l];
    input(a,l);
    quicksort(a,0,l-1);
    output(a,l);

    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a =*b;
    *b = temp;
}

void input(int arr[],int length){
    cout<<"Enter array to be sorted"<<endl;
    for(int i =0;i<length;i++){
        cout<<"Enter element"<<endl;
        cin>>arr[i];
    }
}

void output(int arr[],int length){
    cout<<"Sorted array is"<<endl;
    for(int i =0;i<length;i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j = low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

void quicksort(int arr[],int low,int high){
    if (low < high) {
    
    int pi = partition(arr, low, high);
    quicksort(arr, low, pi - 1);
    quicksort(arr, pi + 1, high);
  }
}
