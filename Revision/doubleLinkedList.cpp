# include<iostream>

using namespace std;

class Node {
    public:
        int data;
        Node * prev;
        Node * next;

        Node(int val) {
            this -> data = val;
            this -> prev = NULL;
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

void insertHead(Node* &head, Node* &tail, int val) {
    if(head == NULL) {
        Node * newNode = new Node(val);
        head = newNode;
        tail = newNode;
    }

    else {
        Node * newNode = new Node(val);
        newNode -> next = head;
        head -> prev = newNode;
        head = newNode;
    }
}

void insertTail(Node* &head, Node* &tail, int data) {
    if(tail == NULL) {
        Node * newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }

    else {
        Node * newNode = new Node(data);
        newNode -> prev = tail;
        tail -> next = newNode;
        tail = newNode;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int val, int position) {
    int len = getLength(head);

    if(position < 1) {
        cout << "Invalid address" << endl;
        return;
    }

    else if(position > len + 1) {
        cout << "Invalid" << endl;
    }

    else if(position == 1) {
        insertHead(head, tail, val);
    }

    else if(position == len + 1) {
        insertTail(head, tail, val);
    }
    
    else {
        Node * newNode = new Node(val);

        Node * prevNode = NULL;
        Node * currNode = head;

        while(position != 1) {
            prevNode = currNode;
            currNode = currNode -> next;
            position--;
        }

        prevNode -> next = newNode;
        newNode -> prev = prevNode;

        newNode -> next = currNode;
        currNode -> prev = newNode;
    }

}

void deleteHead(Node* &head, Node* &tail) {
    if(head == NULL) {
        cout << "Nothing to delete here" << endl;
        return;
    }   

    else if(head == tail) {
        Node * temp = head;
        head = NULL;
        tail = NULL;
    }

    else {
        Node * temp = head;
        head = head -> next;
        temp -> next = NULL;
        head -> prev = NULL;
        delete temp;
    }
}

void deleteTail(Node* &head, Node* &tail) {
    if(tail == NULL) {
        cout << "Nothing to delete" << endl;
        return;
    }

    else if(head == tail) {
        Node * temp = tail;
        head = NULL;
        tail = NULL;
    }

    else {
        Node * temp = tail;
        Node * prevNode = tail -> prev;
        prevNode -> next = NULL;
        tail -> prev = NULL;
        tail = prevNode;
        delete temp;
    }
}

void deletePosition(Node* &head, Node* &tail, int position) {
    int len = getLength(head);

    if(head == NULL) {
        cout << "Invalid" << endl;
        return;
    }

    else if(head == tail) {
        Node * temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }

    else if(position == 1) {
        deleteHead(head, tail);
        return;
    }

    else if(position == len) {
        deleteTail(head, tail);
        return;
    }

    else if(position > len + 1) {
        cout << "Invalid" << endl;
        return;
    }

    else {
        Node * currNode = head;
        
        while(position != 1) {
            currNode = currNode -> next;
            position--;
        }

        Node * prevNode = currNode -> prev;
        Node * nextNode = currNode -> next;

        prevNode -> next = nextNode;
        nextNode -> prev = prevNode;

        currNode -> next = NULL;
        currNode -> prev = NULL;

        delete currNode;
        
    }
}

int main() {

    Node * head = NULL;
    Node * tail = NULL;

    insertHead(head, tail, 40);
    insertHead(head, tail, 30);
    insertHead(head, tail, 20);
    insertHead(head, tail, 10);

    cout << "Printing the Linked List: " << endl;

    printingLL(head);

    cout << endl;

    // insertAtPosition(head, tail, 100, 6);
    deletePosition(head, tail, 5);

    cout << "Printing the Linked List: " << endl;

    printingLL(head);

    cout << endl;


    
    return 0;
}