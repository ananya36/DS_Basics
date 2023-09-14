#include<iostream>
using namespace std;
class Queue{
    public:
    int *arr;
    int front;
    int rear;
    int size;
    Queue(int size,int *arr,int front,int rear){
        size=100011;
        arr= new int[size];
        front=0;
        rear=0;
    }
    //Insertion
    void enqueue(int data){
        if(rear==size-1){
            cout<<"Queue is Full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }

    }
    void dequeue(){
        if(front==rear){
            cout<<"Queue is Empty";
        }
        else{
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
        }

    }
};
int main(){
    Queue q1= new Queue(5);
    
}