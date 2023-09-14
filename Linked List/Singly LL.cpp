#include<iostream>
using namespace std;
class Node{
    public:
    int data;//DATA TO THE NODE
    Node* next;//POINTER TO NEXT NODE
    Node(int data){
        this->data=data;//INTITIALIZING DATA
        this->next=NULL;//INITINLIZING POINTER
    }
    ~Node(){
    	int value=this->data;//CURRETN NODE DATA INTO VARIABLE VALUE
    	if(this->next!=NULL){//IF CURRENT'S NEXT NODE IS NOT NULL
    	delete next;//DELETEING NEXT NODE
		this->next=NULL;//LINK BROKEN
		}
		}

    };
    //insertion;
    void inHead(Node* &head,int d){
        Node* temp=new Node(d);//NEW BNODE TO BE ADDED
        temp->next=head;//NEW NODE NEXT POINTS TO HEAD
        temp=head;//NEW NODE BECOMES HEAD
    }
    void inTail(Node* &tail,int d){
        Node* temp=new Node(d);//NEW NODE TO BE ADDED
        tail->next=temp;//TAIL'S NEXT IS NEW NODE
        temp=tail;//NEW NODE IS TAIL
    }
    void inPos(Node*&head,Node*&tail,int pos,int d){
        if(pos==1){//IF POSITION IS HEAD
            inHead(head, d);
        }
        Node* temp=head;//TRAVERSAL POINTER INTIALIZED TO HEAD
        int c=1;//COUNT VARIABLE TO REACH POSITION
        while(c<pos-1){//TILL REACHED POS-1
            temp=temp->next;//KEEP MOVING THHE TRAVERSAL POINTER
            c++;//INCERMENT COUNT
        }
        Node* NodeToIn= new Node(d);//NEW NODE TO BE INSERTED
        NodeToIn->next=temp->next;//POS-1 NODE'S NEXT IS NEW NODE'S NEXT
        temp->next=NodeToIn;//NEW NODE IS POS-1 NODES'S NEXT


    }

    //DELETION;
    void delHead(Node* &head){
        Node* temp=head;
        head=head->next;
        delete temp;
    }
    void delPos(Node*&head,int pos){
        int c=1;
        Node* temp=head;
        Node*prev=NULL;
        while(c<pos){
            prev=temp;
            temp=temp->next;
            c++;
        }
        prev->next=temp->next;
        delete temp;
    }
    //PRINTING
    void Print(Node*&head){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }

    }


int main(){
    Node* Node1=new Node(5);//
    Node*head=Node1;
    Node*tail=Node1;
    inHead(head,5);
    inTail(tail,6);
    



}
