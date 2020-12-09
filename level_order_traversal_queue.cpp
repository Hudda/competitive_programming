#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left, *right;
};

void printLevelOrder(Node* root) {
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);

    while (q.empty() == false) {
        Node* node = q.front();
        cout << node->data << " ";
        q.pop();

        if (node->left != NULL) {
            q.push(node->left);
        }

        if (node->right != NULL) {
            q.push(node->right);
        }
    }
}

Node* newNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
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
    Node* node = newNode(1);
    node->left = newNode(2);
    node->right = newNode(3);
    node->left->left = newNode(4);
    node->left->right = newNode(5);
    printLevelOrder(node);
    return 0;
}