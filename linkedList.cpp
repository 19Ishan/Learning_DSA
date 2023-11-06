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
};

//1. Printing the Linked List

void printLinkedList(Node* head){
    Node * temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

//2. Finding the length of the linked list

int findLengthLL(Node* head){
    Node * temp = head;
    int count = 0;

    while(temp != NULL){
        count++;
        temp = temp -> next;
    }

    return count;
}

//3. creating a tail node in a linked list

void createTail(Node* &head, Node* &tail){
    Node * temp = head;

    while(temp -> next != NULL){
        temp = temp -> next;
    }

    //jab loop se bahar aagye ho tab tum
    //last node par hi khade ho

    tail = temp;
}

//4. Insertion in a Linked List

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

//5. Insert At Tail

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

//6. 

int main() {

    Node * first = new Node(10);
    Node * second = new Node(20);
    Node * third = new Node(30);
    Node * fourth = new Node(40);
    Node * fifth = new Node(50);

    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;

    Node * head = first;
    Node * tail = fifth;

    printLinkedList(head);
    
    cout << endl;

    cout << "The length of this Linked List is: " << findLengthLL(head) << endl;

    insertAtHead(head, tail, 500);

    printLinkedList(head);

    cout << endl;

    insertAtTail(head, tail, 1001);

    printLinkedList(head);

    return 0;
}