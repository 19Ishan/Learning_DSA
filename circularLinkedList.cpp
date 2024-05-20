# include<iostream>

using namespace std;

class Node {

    public:

        int data;
        Node* next;

        Node(){
            this -> next = NULL;
        }

        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }

        ~Node(){
            cout << "Destructor called for: " << this -> data << endl;
        }

};

//1. Traversal Of Circular Linked List

//2. Insertion At Position

void insertAtPosition(Node* &tail, int position, int data){

    //empty linked list
    if(tail == NULL){
        Node* newNode = new Node(data);
        newNode = newNode -> next;
        tail = newNode;
    }

    //non empty linked list
    else{
        //create a newNode
        Node* newNode = new Node(data);

        //traverse to the desired position
        Node* prevNode = NULL;
        Node* currNode = tail -> next;

        while(position != 1){
            prevNode = currNode;
            currNode = currNode -> next;
            position--;
        }

        //make the links
        currNode -> next = newNode;
        newNode -> next = tail;
    }

}

int main() {


    
    return 0;
}