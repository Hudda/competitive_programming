#include <iostream>
#include <stack>
using namespace std;

class Node {
public:
    int data;
    Node* left, *right;
};

Node* newNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void printNewNode(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->right;
    }
}


void modifyTree(Node* root) {
    if (root == NULL) {
        return;
    }
    Node* pre = NULL;
    stack<Node *> s;
    s.push(root);

    while (!s.empty()) {
        Node* node = s.top();
        s.pop();

        if (node->right != NULL) {
            s.push(node->right);
        }
        if (node->left != NULL) {
            s.push(node->left);
        }
        if (pre != NULL) {
            pre->right = node;
        }
        pre = node;
    }
}


int main(void) {
	#ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Node* root = newNode(10);
    root->left = newNode(8);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(5);
    modifyTree(root);
    printNewNode(root);
    return 0;
}