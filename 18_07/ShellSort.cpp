#include <iostream>
using namespace std;

void shell (int[],int);
void ip(int[],int);
void op(int[],int);

int main(){
    int len;
    cout<<"Enter length of array"<<endl;
    cin>>len;
    int a[len];
    ip(a,len);
    cout<<"Entered array is"<<endl;
    op(a,len);
    shell(a,len);
    cout<<"Sorted array is"<<endl;
    op(a,len);
    return 0;
}

void ip(int arr[],int length){
    for(int i =0;i<length;i++){
        cout<<"Enter element no "<<i+1<<endl;
        cin>>arr[i];
    }
}
void op(int arr[],int length){
    for(int i =0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void shell(int arr[],int length){
    for(int sub = length/2;sub>0;sub=sub/2){
        for(int i=sub;i<length;i++){
            int key=arr[i];
            int j=i-1;
        
            while(j>=0){
              if(arr[j]<key){
                  break;
              }else{
                arr[j+1]=arr[j];
                arr[j]=key;
                j--;
         }
        }

        }
    }
}