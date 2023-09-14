#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
    

    };
    Node* creation(Node*root){
        int data;
        cout<<"Enter data for root: "<<endl;
        cin>>data;
         if(data==-1){
            return NULL;
         }
         cout<<"Enter data to left of "<<data<<endl;
         root->left=creation(root->left);

         cout<<"Enter data to right of "<<data<<endl;
         root->right=creation(root->right);
    }
     void LevelTrav(Node*root){
        queue<Node*>q;
        q.push(root);
       
           while(!q.empty()){
            Node*temp=q.front();
            q.pop();
             if(temp==NULL){
                cout<<endl;
                if(!q.empty()){
                    q.push(NULL);
                }
            
        }
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
           }
           }
           void InTrav(Node*root){
            if(root==NULL){
                return;
            }
            InTrav(root->left);
            cout<<root->data<<endl;
            InTrav(root->right);
    }
    void PreTrav(Node*root){
          if(root==NULL){
                return;
            }
            cout<<root->data<<endl;
            InTrav(root->left);
            
            InTrav(root->right);
    }
    void PostTrav(Node*root){
        if(root==NULL){
                return;
            }
            InTrav(root->left);
    
            InTrav(root->right);
            cout<<root->data<<endl;

    }
    int main(){
        Node* root=NULL;
        root=creation(root);
        LevelTrav(root);
        InTrav(root);
        PreTrav(root);
        PostTrav(root);



    }
   


