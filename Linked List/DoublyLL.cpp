#include<iostream>
using namespace std;
class Node{
    public:

    int data;
    Node* prev;
    Node* next;
    
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;

    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            this->next=NULL;
            delete next;
        }
    }
    //INSERTION
    void inHead(Node*&head,int d){
        Node* temp =new Node(d);
        head->prev=temp;
        temp->next=head;
        head=temp;
    }
    void inTail(Node*&tail,int d){
        Node*temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;

    }
    void inPos(Node*&head,int pos,int d){
        if(pos==1){
            inHead(head,d);
        }
        Node* temp=head;
        int c=1;
        while(c<pos-1){
            temp=temp->next;
            c++;
        }
        Node* Toin=new Node(d);
        Toin->next=temp->next;
        temp->next->prev=Toin;
        Toin->prev=temp;

    }
    //DELETION
    void delHead(Node*&head){
        Node*temp=head;
        temp->next->prev=NULL;
        temp->next=head;
        temp->next=NULL;
        delete temp;

    }
    void delPos(Node*&head,int pos){
        if(pos==1){
            delHead(head);
        }
        int c;
        Node* temp=NULL;
        Node* Prev=NULL;
        while(c<pos){
            temp=temp->next;
            c++;
        }
        Prev->next=temp->next;
        temp->next->prev=Prev;
        delete temp;


    }


};
