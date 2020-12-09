#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left, *right;
};

int height(Node* node) {
    if (node == NULL) {
        return 0;
    } else {
        int lheight = height(node->left);
        int rheight = height(node->right);

        if (lheight > rheight) {
            return lheight + 1;
        }
        else
            return rheight + 1;
    }
}

void printGivenLevel(Node* root, int level) {
    if (root == NULL) {
        return;
    }
    if (level == 1)
        cout << root->data << " ";
    else if (level > 1) {
        printGivenLevel(root->left, level - 1);
        printGivenLevel(root->right, level - 1);
    }
}

void printLevelOrder(Node* root) {
    int h = height(root);
    for (int i = 1; i <= h; i++) {
        printGivenLevel(root, i);
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
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    printLevelOrder(root);
    return 0;
}