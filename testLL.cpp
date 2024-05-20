#include <iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;
    Node (int data) {
      this -> data = data;
      this -> next = NULL;
    }
};

int findLL(Node* head) {
      Node* temp = head;
      int count = 0;
      while(temp != NULL) {
        count++;
        temp = temp -> next;
      }
      return count;
    }

    void printLinkedList(Node* head){
      Node * temp = head;

      while(temp != NULL){
          cout << temp -> data << " ";
          temp = temp -> next;
      }
    }
    void insertAtHead(Node* &head, Node* &tail, int value) {
      if(head == NULL) {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
      }
      else {
        Node* newNode = new Node(value);
        newNode -> next = head;
        head = newNode;
      }
    }
    void insertAtTail(Node* &head, Node* &tail, int value) {
      if (head == NULL || tail == NULL) {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
      }
      else {
        Node* newNode = new Node(value);
        tail -> next = newNode;
        tail = newNode;
      }
    }
    void insertAtPosition(Node* &head, Node* &tail, int value, int position) {
      int length = findLL(head);
      if(position < 1 || position > length + 1) {
        cout << "Invalid place to insert." << endl;
      }
      else if (position == 1) {
        insertAtHead(head, tail, value);
      }
      else if (position == length - 1) {
        insertAtTail(head, tail, value);
      }
      else if (position > length + 1) {
        cout << "Invalid place to insert the node" << endl;
      }
      else {
        Node* newNode = new Node(value);
        Node* prev = NULL;
        Node* curr = head;
        while (position == 1) {
          prev = curr;
          curr = curr -> next;
          position--;
        }
        prev -> next = newNode;
        newNode -> next = curr;
      }
    }

int main() {
  
  Node* head = NULL;
  Node* tail = NULL;

  int n;
  cout << "Enter the size of the linked list: " << endl;
  cin >> n;

//   Node node(0);

  for (int i = 0; i < n; i++) {
      int data;
      cout << "Enter the data: " << endl;
      cin >> data;
      insertAtTail(head, tail, data);
  }

  printLinkedList(head);

    // insertAtTail(head, tail, 10);
    // insertAtTail(head, tail, 20);
    // insertAtTail(head, tail, 30);
    // insertAtTail(head, tail, 10);

    int position, value;
    cout << "Enter the position: " << endl;
    cin >> position;

    cout << "Enter the value: " << endl;
    cin >> value;

    insertAtPosition(head, tail, value, position);

    printLinkedList(head);

  return 0;
}