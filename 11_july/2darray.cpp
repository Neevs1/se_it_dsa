#include <iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter number of rows \n";
    cin>>r;
    cout<<"Enter number of columns \n";
    cin>>c;
    int matrix[r][c];
    for(int row=0;row<r;row++){
        for(int column=0;column<c;column++){
            cout<<"Enter element at position "<<row+1<<","<<column+1<<endl;
            cin>>matrix[row][column];
        }
    }
    cout<<"Given matrix is \n";
    for(int row=0;row<r;row++){
        for(int column=0;column<c;column++){
            cout<<matrix[row][column]<<" ";
        }
        cout<<endl;
    }
}