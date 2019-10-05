#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;
};

class LinkedList{
    private:
        Node *head, *tail;

    public:

        LinkedList(){
            head = NULL;
            tail = NULL;
        }

        void createNode(int value){
            Node *temp = new Node();
            temp->data = value;
            temp->next = NULL;
            if (head==NULL){
                head = temp;
                tail = temp;
                temp = NULL;
            }else{
                tail->next = temp;
                tail = temp;
            }
        }
        
        void display(){
            Node *temp = head;
            while(temp!=NULL){
                cout<<temp->data<<"\t";
                temp = temp->next;
            }
        }
        
        void insertStart(int value){
            Node *temp = new Node();
            temp->data = value;
            temp->next = head;
            head = temp;
        }
        
        void insertEnd(int value){
            Node *temp = new Node();
            temp->data = value;
            temp->next = NULL;
            tail->next = temp;
            tail = temp;
        }
        
        void insertPosition(int value, int i){
            Node *temp = new Node();
            temp->data = value;
            Node *pos = head;
            for (int x=1;x<i;x++){
                pos = pos->next;
            }
            temp->next = pos->next;
            pos->next = temp;
        }
};

int main(){
    LinkedList *llist = new LinkedList();
    llist->createNode(1);
    llist->insertPosition(2, 1);
    llist->insertPosition(3, 2);
    llist->display();
}