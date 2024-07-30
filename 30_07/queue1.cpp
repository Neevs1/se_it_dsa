#include <iostream>
using namespace std;


void enqueue(int queue[],int length, int rear,int element){
    if(rear==length){
        cout<<"Queue is full";
    }else{
        queue[rear]=element;
        rear++;
    }
    cout<<"After addition \n";
    for(int i=0;i<rear;i++){
        cout<<queue[i]<<" ";
    }
    cout<<"";
}

void dequeue(int queue[],int front, int rear){
    int i=front;
    if(rear==front){
        cout<<"Queue is empty"<<endl;
    }
    while(i<rear-1){
        queue[i]=queue[i+1];
        i++;        
    }
    
    cout<<"After removing element"<<endl;
    for(int i=0;i<rear-1;i++){
        cout<<queue[i]<<" ";
    }
    cout<<endl;
    
}
bool isEmpty(int rear){
    return rear ==0;
}

bool isFull(int rear,int length){
    return rear==length;
}

int peek(int queue[],int front){
    return queue[front];
}

int main(){

    int front =0, rear =0;
    cout<<"Enter length of queue"<<endl;
    int length;
    cin>>length;
    int queue[length];
    string input;
    do{
        cout<<"Enter operation"<<endl;
        cout<<"1.Enqueue \n2.Dequeue \n3.Check if empty \n4.Check if full \n5.Peek\n";
        int choice;
        cin>>choice;
        switch (choice)
        {
        case 1:
            int element;
            cout<<"Enter element"<<endl;
            cin>>element;
            enqueue(queue,length,rear,element);
            rear++;
            break;

        case 2:
            dequeue(queue,front,rear);
            rear--;
            break;

        case 3:
          cout<<"Queue is empty : ";
          if(isEmpty(rear)==1){
            cout<<"yes"<<endl;
           }else{
            cout<<"no"<<endl;
           }
          break;

        case 4:
           cout<<"Queue is full :";
           if(isFull(rear,length)==1){
            cout<<"yes"<<endl;
           }else{
            cout<<"no"<<endl;
           }
           break;

        case 5:
           cout<<"First element is "<<peek(queue,front)<<endl;
           break;             
        
        default:
            cout<<"Error: Inavlid input";
            break;
        }
        cout<<"Do you wish to continue?(reply yes in lowercase)"<<endl;
        cin>>input;
        if(input !="yes"){
            cout<<"Goodbye"<<endl;
        }

    }while(input=="yes");

}