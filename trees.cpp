# include<iostream>
# include<queue>

using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val) {
            this -> data = val;
            this -> left = NULL;
            this -> right = NULL;
        }
};

//creating tree -> this returns the root node

Node * createTree() {
    cout << "Enter the value: " << endl;
    int data;
    cin >> data;

    if(data == -1) {
        return NULL;
    }

    //Step 1: Create Node
    Node * root = new Node(data);

    //Step 2: Create left subtree
    cout << "Left of Node - " << root -> data << endl;
    root -> left = createTree();

    //Step 3: Create Right Subtree
    cout << "Right of Node - " << root -> data << endl;
    root -> right = createTree();

    return root;
}

void preOrderTraversal(Node * root) {
    //base case
    if(root == NULL) {
        return;
    }

    //N
    cout << root -> data << " ";

    //L
    preOrderTraversal(root -> left);

    //R
    preOrderTraversal(root -> right);
}

void inOrderTraversal(Node * root) {
    //base case
    if(root == NULL) {
        return;
    }

    //L
    inOrderTraversal(root -> left);

    //N
    cout << root -> data << " ";

    //R
    inOrderTraversal(root -> right);
}

void postOrderTraversal(Node * root) {
    //base case
    if(root == NULL) {
        return;
    }

    //L
    postOrderTraversal(root -> left);

    //R
    postOrderTraversal(root -> right);

    //N
    cout << root -> data << " ";
}

// void levelOrderTraversal(Node* root) {
//     queue<Node*> q;

//     //Step 1: Push root
//     q.push(root);

//     //Actual Traversal
//     //Step 2: Fetch the data from queue and print and pop it too
//     while(!q.empty()) {
//         Node* front = q.front();
//         cout << front -> data << " ";

//         q.pop();

//         //Step 3: Push leftChild
//         if(front -> left != NULL) {
//             q.push(front -> left);
//         }
        
//         //Step 4: Push rightChild
//         if(front -> right != NULL) {
//             q.push(front -> right);
//         }
//     }
// }

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);

    //Actual Traversal
    while (!q.empty()) {
        Node* front = q.front();
        cout << front -> data << " ";
        q.pop();

        if (root -> left != NULL) {
            q.push(root -> left);
        }

        if (root -> right != NULL) {
            q.push(root -> right);
        }

        cout << endl;
    }
}

int main() {

    Node * root = createTree(); 

    cout << "Pre Order: " << " ";
    preOrderTraversal(root);
    cout << endl;   

    cout << "In Order: " << " ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Post Order: " << " ";
    postOrderTraversal(root);
    cout << endl;

    cout << "Level Order: " << " ";
    levelOrderTraversal(root);

    
    return 0;
}

// Copy paste these elements to make a binary tree
// 10 20 40 -1 -1 30 50 -1 -1 60 -1 -1