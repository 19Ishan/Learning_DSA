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

Node* insertIntoBST(Node* root, int val) {
    if (root == NULL) {
        root = new Node(val);
        return root;
    }

    if (val > root -> data) {
        root -> right = insertIntoBST(root -> right, val);
    }

    else {
        root -> left = insertIntoBST(root -> left, val);
    }

    return root;
}

void createBST(Node* &root) {
    int val;
    cout << "Enter the data of the node: " << endl;
    cin >> val;

    while (val != -1) {
        root = insertIntoBST(root, val);
        // cout << "Enter the next val: " << endl;
        cout << "Enter the data of the node: " << endl;
        cin >> val;
    }
}

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* frontNode = q.front();
        q.pop();

        if (frontNode == NULL) {
            cout << endl;
            if (!q.empty()) q.push(NULL);
        }

        else {
            cout << frontNode -> data << " ";

            if (frontNode -> left != NULL) q.push(frontNode -> left);
            if (frontNode -> right!= NULL) q.push(frontNode -> right);
        }
    }
}

void preOrderTraversal(Node* root) {
    if (root == NULL) return;

    cout << root -> data << " ";
    preOrderTraversal(root -> left);
    preOrderTraversal(root -> right);

    return;
}

void inOrderTraversal(Node* root) {
    if (root == NULL) return;

    inOrderTraversal(root -> left);
    cout << root -> data << " ";
    inOrderTraversal(root -> right);

    return;
}

void postOrderTraversal(Node* root) {
    if (root == NULL) return;

    postOrderTraversal(root -> left);
    postOrderTraversal(root -> right);
    cout << root -> data << " ";

    return;
}

Node* findMiniValue(Node* &root) {
    if (root == NULL) {
        cout << "No min value is possible: " << endl;
        return root;
    }

    Node* temp = root;

    while (temp -> left != NULL) {
        temp = temp -> left;
    }

    return temp;
}

Node* findMaxiValue(Node* root) {
    if (root == NULL) {
        cout << "No max value is possible: " << endl;
        return root;
    }

    Node* temp = root;

    while (temp -> right != NULL) {
        temp = temp -> right;
    }

    return temp;
}

bool searchInBST(Node* root, int target) {
    //Base Case
    if (root == NULL) return false;

    //Ek Case
    if (root -> data == target) return true;

    //Baaki recursion
    bool lAns = false, rAns = false;

    if (target > root -> data) rAns = searchInBST(root -> right, target);
    else lAns = searchInBST(root -> left, target);

    return lAns || rAns; 
}

 Node* deleteFromBST(Node* root, int target) {
    if (root == NULL) return NULL;

    //Start Searching
    if (target == root -> data) {
        if (root -> left == NULL && root -> right == NULL) {
            //Leaf Nodes -> Case 01
            delete root;
            return NULL;
        }

        if (root -> left != NULL && root -> right == NULL) {
            //Left Subtree is Not NULL and right subtree is NULL -> Case 02
            Node* leftSubtree = root -> left;
            delete root;
            return leftSubtree;
        }

        if (root -> left == NULL && root -> right != NULL) {
            //Left SUbtree is NULL and right subtree is Not NULL -> Case 03
            Node* rightSubtree = root -> right;
            delete root;
            return rightSubtree;
        }

        else {
            //Left and right subtrees are Not NULL -> Case 04
            Node* maxiValue = findMaxiValue(root -> left);

            //Replacement
            root -> data = maxiValue -> data;

            root -> left = deleteFromBST(root -> left, maxiValue -> data);
            return root;
        }
    }

    else if (target > root -> data) {
        root -> right = deleteFromBST(root -> right, target);
    }
    
    else {
        root -> left = deleteFromBST(root -> left, target);
    }
    return root;
}

int main() {
    
    Node* root = NULL;
    createBST(root);

    levelOrderTraversal(root);

    // cout << endl;
    // cout << "Pre Order: "; 
    // preOrderTraversal(root);
    // cout << endl;

    // cout << "In Order: "; 
    // inOrderTraversal(root);
    // cout << endl;

    // cout << "Post Order: "; 
    // postOrderTraversal(root);
    // cout << endl;

    // Node* miniValue = findMiniValue(root);
    // cout << "The minimum value of the BST is: " << miniValue -> data << endl;

    // Node* maxiValue = findMaxiValue(root);
    // cout << "The maximum value of the BST is: " << maxiValue -> data << endl;

    int target;
    cout << "Enter the target value you want to delete: " << endl;
    cin >> target;

    while (target != -1) {
        root = deleteFromBST(root, target);
        cout << "The BST after deleting the target value is: " << endl;
        levelOrderTraversal(root);

        cout << "Enter the value of target: " << endl;
        cin >> target;
    }

    return 0;
}

//50 30 40 20 60 55 70 80 25 -1