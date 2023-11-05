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

void printLinkedList(Node * head){
    Node * temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int findLengthLL(Node * head){
    Node * temp = head;
    int count = 0;

    while(temp != NULL){
        count++;
        temp = temp -> next;
    }

    return count;
}

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

    printLinkedList(head);
    
    cout << endl;

    cout << "The length of this Linked List is: " << findLengthLL(head) << endl;

    
    return 0;
}