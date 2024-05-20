# include<iostream>

using namespace std;

class Node {
    
    public:
        int data;
        Node * next;

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

void printLinkedList(Node* head){
    Node * temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

void insertAtHead(Node* &head, Node* &tail, int data){

    if(head == NULL){
        //empty Linked List

        //create a newNode
        Node * newNode = new Node(data);

        //no need of making connections
        //simply update head
        head = newNode;
        tail = newNode;
    }

    else{
        //Non empty Linked List

        //create a new node
        Node * newNode = new Node(data);

        //attach new Node to the head node
        newNode -> next = head;

        //update the head node
        head = newNode;
    }
   
}

void insertAtTail(Node* &head, Node* &tail, int data){
    if(head == NULL){
        //empty linked list

        //create a newNode
        Node * newNode = new Node(data);

        //head and tail dono ko newNode par point karwao
        head = newNode;
        tail = newNode;
    }

    else{
        //non empty linked list

        //create newNode
        Node * newNode = new Node(data);

        //tail ko newNode par attach karo
        tail -> next = newNode;

        //update the tail
        tail = newNode;
    }
}

Node* reverseLL(Node* &head){
    //base case
    // if(curr == NULL){
    //     return prev;
    // }

    // //precessing
    // Node* nextNode = curr;
    // curr -> next = prev;
    // prev = curr;
    // curr = nextNode;

    // return reverseLL(prev, curr);
    Node* temp = head;
    Node* prev = NULL;
    Node* curr = head;

    while(temp != NULL) {
        Node* newNode = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = newNode;
    }
    return prev;
}

void addOneToTheNumberOfLL(Node* &head){
    //1. reverse the LL

    head = reverseLL(head);

    //2. Find the sum
    Node* temp = head;
    int carry = 1;
    while(temp -> next != NULL){
        int totalSum = temp -> data + carry;
        int digit = totalSum % 10;
        carry = totalSum / 10;

        temp -> data = digit;
        temp = temp -> next;

        if(carry == 0){
            break;
        }

    }

    //last node ko alag se process
    if(carry != 0){
        int totalSum = temp -> data + carry;
        int digit = totalSum % 10;
        carry = totalSum / 10;

        temp -> data = digit;

        if(carry == 1){
            Node* newNode = new Node(carry);
            temp = temp -> next;
        }
    }

    head = reverseLL(head);

}

int main() {

    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 1);
    insertAtHead(head, tail, 2);
    insertAtHead(head, tail, 3);
    // insertAtHead(head, tail, 40);
    // insertAtHead(head, tail, 50);

    printLinkedList(head);
    
    return 0;
}