#include <iostream>
using namespace std;
int max(int);
int main(){
    int a[4];
    for(int i=0;i<=3;i++){
        cout<<"Enter number \n";
        cin>>a[i];
    }
    for (int i=0;i<=3;i++){
        for(int j=0;j<=3-i;j++){
            if(a[j]>a[j+1]){
                int temp = a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }

    cout<<"Maximum number is "<<a[3]<<endl;
    return 0;
}