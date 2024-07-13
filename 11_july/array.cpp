#include <iostream>
using namespace std;

void addElement(int[],int);
void delElement(int[],int);
void updateElement(int[],int);


int main(){
    int length;
    cout<<"Enter length of array"<<endl;
    cin>>length;
    int arr[length+1];
    for(int i=0;i<length;i++){
        cout<<"Enter element no."<<(i+1)<<endl;
        cin>>arr[i];
    }
    cout<<"Given array is"<<endl;
    cout<<"[";
    for(int i=0;i<length;i++){
        if(i!=(length-1)){
            cout<<arr[i]<<",";
        }else{
            cout<<arr[i]<<"]"<<endl;
        }
    }
    addElement(arr,length);
    delElement(arr,length);
    updateElement(arr,length);
    int size = (sizeof(arr)/sizeof(int))-1;
    cout<<"Size of array is "<<size<<endl;     

}

void addElement(int arr[],int length){
    int add,ind;
    cout<<"Please enter element to be added"<<endl;
    cin>>add;
    cout<<"Enter index at which element is to be added"<<endl;
    cin>>ind;
    ind=ind-1;
    if(ind<0||ind>length){
        cout<<"Invalid input \n";
        cout<<"Element will be added at last postion"<<endl;
        ind=length;
    }
    for(int i=length;i>=ind;i--){
        arr[i]=arr[i-1];
    }
     arr[ind]=add;
    cout<<"[";
    for(int i=0;i<=length;i++){
        if(i!=length){
            cout<<arr[i]<<",";
        }else{
            cout<<arr[i]<<"]"<<endl;
        }
    }
    
}

void delElement(int arr[],int length){
    int del;
    cout<<"Enter index of element to be deleted\n";
    cin>>del;
    del=del-1;
    if(del>length||del<0){
        cout<<"Invalid input"<<endl;
        cout<<"First element will be deleted\n";
        del=0;
    }
    for(int i=del;i<length;i++){
        arr[i]=arr[i+1];
    }
    cout<<"Resulting array is"<<endl;
    cout<<"[";
    for(int i=0;i<length;i++){
        if(i!=(length-1)){
            cout<<arr[i]<<",";
        }else{
            cout<<arr[i]<<"]"<<endl;
        }
    }
    
}

void updateElement(int arr[],int length){
    int ind,up;
    cout<<"Enter index at which element will be updated\n";
    cin>>ind;
    ind=ind-1;
    if(ind<0||ind>(length-1)){
        cout<<"Invalid input \n"<<"Last element will be updated\n";
        ind=(length-1);
    }
    cout<<"Enter updated value \n";
    cin>>up;
    arr[ind]=up;
    cout<<"Resulting array is"<<endl;
    cout<<"[";
    for(int i=0;i<length;i++){
        if(i!=(length-1)){
            cout<<arr[i]<<",";
        }else{
            cout<<arr[i]<<"]"<<endl;
        }
    }

}

