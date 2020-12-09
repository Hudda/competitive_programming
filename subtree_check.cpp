#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
};

bool areIdentical(Node* root1, Node* root2) {
    if (root1 == NULL && root2 == NULL)
        return true;
    if (root1 == NULL || root2 == NULL)
        return false;

    return (root1->data == root2->data &&
        areIdentical(root1->left, root2->left) &&
        areIdentical(root1->right, root2->right));
}

bool isSubtree(Node* t, Node* s) {
    if (s == NULL)
        return true;
    if (t == NULL)
        return false;

    if (areIdentical(t, s))
        return true;

    return isSubtree(t->left, s) || isSubtree(t->right, s);
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
    Node* t = newNode(26);
    t->right = newNode(3);
    t->right->right = newNode(3);
    t->left = newNode(10);
    t->left->left = newNode(4);
    t->left->left->right = newNode(30);
    t->left->right = newNode(6);

    Node* s = newNode(10);
    s->right = newNode(6);
    s->left = newNode(4);
    s->left->right = newNode(30);

    if (isSubtree(t, s))
        cout << "Tree 2 is subtree of Tree 1";
    else
        cout << "Tree 2 is not a subtree of Tree 1";
    return 0;
}