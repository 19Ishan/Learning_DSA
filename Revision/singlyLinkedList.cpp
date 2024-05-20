# include<iostream>

using namespace std;

class Node {
    public:
        int data;
        Node * next;

        Node() {
            this -> data = 0;
            this -> next = NULL;
        }

        Node(int val) {
            this -> data = val;
            this -> next = NULL;
        }
};

void printingLL(Node * head) {
    Node * temp = head;
    while(temp != NULL) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
}

int getLength(Node * head) {
    int count = 0;
    Node * temp = head;

    while(temp != NULL) {
        count++;
        temp = temp -> next;
    }

    return count;
}

void getTail(Node* &head, Node* &tail) {
    Node * temp = head;
    while(temp -> next != NULL) {
        temp = temp -> next;
    }

    //temp standing at the tail
    tail = temp;
}

void insertAtHead(Node* &head, Node* &tail, int val) {
    if(head == NULL) {
        Node * newNode = new Node(val);
        head = newNode;
        tail = newNode;
    }

    else {
        Node * newNode = new Node(val);
        newNode -> next = head;
        head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int val) {

    if(head == NULL || tail == NULL) {
        Node * newNode = new Node(val);
        head = newNode;
        tail = newNode;
    }

    else {
        Node * newNode = new Node(val);
        tail -> next = newNode;
        tail = newNode;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int position, int val) {

    int len = getLength(head);

    if(position < 1) {
        cout << "Invalid address" << endl;
        return;
    }

    else if(position > len + 1) {
        cout << "Invalid" << endl;
        return;
    }

    else if(position == 1) {
        insertAtHead(head, tail, val);
    }

    else if(position == len + 1) {
        insertAtTail(head, tail, val);
    }

    else {
        Node * newNode = new Node(val);

        Node * prev = NULL;
        Node * curr = head;

        while(position != 1) {
            prev = curr;
            curr = curr -> next;
            position--;
        }

        prev -> next = newNode;
        newNode -> next = curr;
    }
}

void deleteAtHead(Node* &head, Node* &tail) {
    if(head == NULL) {
        cout << "Nothing to delete" << endl;
        return;
    }

    else if(head == tail) {
        Node * temp = head;
        delete temp;

        // temp -> next = NULL;
        head = NULL;
        tail = NULL;
    }

    else {
        Node * temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
}

void deleteAtTail(Node* &head, Node* &tail) {
    if(tail == NULL) {
        cout << "Nothing to delete" << endl;
        return;
    }

    else if(head == tail) {
        Node * temp = tail;
        // temp -> next = NULL;
        delete temp;
        
        head = NULL;
        tail = NULL;
    }

    else {
        Node * temp = tail;

        Node * prev = head;

        while(prev -> next != tail) {
            prev = prev -> next;
        }

        //prev is standing on the prior node to the tailNode

        prev -> next = NULL;
        tail = prev;
        // temp -> next = NULL;
        delete temp;
    }
}

void deleteAtPosition(Node* &head, Node* &tail, int position) {

    int len = getLength(head);

    if(position < 1) {
        cout << "Invalid Place to delete a node" << endl;
        return;
    }

    else if(position == 1) {
        deleteAtHead(head, tail);
    }

    else if(position > len + 1) {
        cout << "Invalid place to delete a node" << endl;
        return;
    }

    else if(position == len) {
        deleteAtTail(head, tail);
    }

    else {
        Node * prev = NULL;
        Node * curr = head;

        while(position != 1) {
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

    Node * first = new Node(10);
    Node * second = new Node(20);
    Node * third = new Node(30);
    Node * fourth = new Node(40);
    Node * fifth = new Node(50);

    Node * head;
    head = first;

    Node * tail;
    // tail = fifth;


    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    
    getTail(head, tail);

    // Node * head = NULL;
    // Node * tail = NULL;

    // cout << "For First: " << endl;
    // cout << "Data of first: " << first -> data << endl;
    // cout << first -> next << endl;

    // cout << head -> data << endl;
    
    // cout << second << endl;
    // cout << "For Second: " << endl;
    // cout << "Data of second: " << second -> data << endl;
    
    cout << "Printing the value of the entire Linked List: " << endl;

    printingLL(head);

    cout << endl;

    cout << tail -> data << endl;

    // cout << "Length of LL is: " << getLength(head) << endl;

    // insertAtTail(head, tail, 100);
    // insertAtPosition(head, tail, 8, 100);
    deleteAtPosition(head, tail, 5);

    cout << "Printing the value of the entire Linked List: " << endl;

    printingLL(head);

    cout << endl;
    
    return 0;
}