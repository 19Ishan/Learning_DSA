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

//6. Insert At any position

void insertAtPosition(Node* &head, Node* &tail, int data, int position){

    int length = findLengthLL(head);

    if(position < 1){
        cout << "Invalid location to insert a node, cannot insert when position is less than 1" << endl;
    }

    else if(position == 1){
        insertAtHead(head, tail, data);
    }

    else if(position == length + 1){ //yaha main galti karunga
        insertAtTail(head, tail, data);
    }

    else if(position > length){
        cout << "Invalid position to insert, cannot insert when position is greater than length + 1" << endl;
    }

    else{
        Node* newNode = new Node(data);

        Node* prev = NULL;
        Node* curr = head;

        while(position != 1){

            prev = curr; //yaha main galti karunga
            
            //we dont have to do prev = prev -> next
            //because starting mein prev is NULL 
            //and prev node doesn't has its next 
            //therefore prev = curr;
            
            curr = curr -> next;
            position--;
        }

        prev -> next = newNode;
        newNode -> next = curr;
    }

}

// 7. Deletion at head

void deleteAtHead(Node* &head, Node* &tail){

    if(head == NULL){
        cout << "Cannot Delete as the Linked List is empty" << endl;
    }

    if(head == tail){
        Node* temp = head;

        delete temp;

        head = NULL;
        tail = NULL;
    }

    else{
        //non empty linked list

        //create a temp pointer to head
        Node* temp = head;

        //increment the head to the next node
        head = head -> next;

        //temp node ko point karwao to NULL
        //i.e. Make the node Isolated so that easy to delete
        temp -> next = NULL;

        //delete the temp node
        //as DMA hai to free karni hogi allocated memory
        delete temp;

    }

}

//8. Deletion from the tail

void deleteAtTail(Node* &head, Node* &tail){

    //empty Linked List
    if(head == NULL){
        cout << "Cannot delete as the Linked List is empty" << endl;
    }

    //non empty Linked List
    else{

        //traverse to second last node 
        //i.e. the node just before the tail

        Node* prev = head; //created a prev pointer for the easy tracking

        while(prev -> next != tail){
            prev = prev -> next;
        }

        //prev -> next ko NULL par point karwao
        //so that the node becomes isolated

        prev -> next = NULL;

        //delete the tail node
        delete tail;

        //update the new tail
        tail = prev;
    }

}

//9. Delete from any position

void deleteAtPosition(Node* &head, Node* &tail, int position){

    int length = findLengthLL(head);

    if(position < 1){
        cout << "Cannot delete as the linked is empty" << endl;
    }

    else if(position == 1){
        //delete from head
        deleteAtHead(head, tail);
    }

    else if(position == length){
        //delete from tail
        deleteAtTail(head, tail);
    }

    else{
        //delete at any position

        Node* prev = NULL;
        Node* curr = head;

        while(position != 1){
            prev = curr;
            curr = curr -> next;
            position--;
        }

        prev -> next = curr -> next;

        curr -> next = NULL;

        delete curr;
    }

}

int main() {

    // Node * first = new Node(10);
    // Node * second = new Node(20);
    // Node * third = new Node(30);
    // Node * fourth = new Node(40);
    // Node * fifth = new Node(50);

    // first -> next = second;
    // second -> next = third;
    // third -> next = fourth;
    // fourth -> next = fifth;

    // Node * head = first;
    // Node * tail = fifth;

    // printLinkedList(head);
    
    // cout << endl;

    // cout << "The length of this Linked List is: " << findLengthLL(head) << endl;

    // insertAtHead(head, tail, 500);

    // printLinkedList(head);

    // cout << endl;

    // insertAtTail(head, tail, 1001);

    // printLinkedList(head);

    // cout << endl;

    // insertAtPosition(head, tail, 2000, 100);

    // printLinkedList(head);

    Node* head = NULL;
    Node* tail = NULL;

    insertAtTail(head, tail, 10);
    // insertAtTail(head, tail, 20);
    // insertAtTail(head, tail, 30);
    // insertAtTail(head, tail, 40);
    // insertAtTail(head, tail, 50);

    printLinkedList(head);

    cout << endl;

    // insertAtPosition(head, tail, 100, 6);

    cout << "Before: head value is: " << head -> data << endl;
    cout << "Before: tail value is: " << tail -> data << endl;

    deleteAtPosition(head, tail, 1);

    // if(head == NULL){
    //     cout << "After: head value is: NULL" << endl;
    // }

    // if(tail == NULL){
    //     cout << "After: tail value is: NULL" << endl;
    // }

    // cout << "After: tail value: " << tail -> data << endl;

    printLinkedList(head);

    return 0;
}