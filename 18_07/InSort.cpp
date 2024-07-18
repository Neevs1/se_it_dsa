#include <iostream>
using namespace std;

void insert(int[],int);
void input(int[],int);
void op(int[],int);

int main(){
    int len;
  cout<<"Enter length of Array"<<endl;
  cin>>len;
  int a[len];
  input(a,len);
  cout<<"Given array is"<<endl;
  op(a,len);
        
    
  insert(a,len);
  cout<<"Sorted array is"<<endl;
  for(int i=0;i<len;i++){
    cout<<a[i]<<" ";
  }

    return 0;
}

void input(int arr[],int length){
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<length;i++){
        cout<<"Enter element no."<<i+1<<endl;
        cin>>arr[i];
    }

}

void op(int arr[],int length){
    
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void insert(int arr[],int length){
    int key,j;
    for(int i=1;i<length;i++){
        key=arr[i];
        j=i-1;
        //cout<<key<<" "<<j<<endl;
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
