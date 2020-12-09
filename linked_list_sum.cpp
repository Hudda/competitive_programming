#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void swapPointers(Node** a, Node** b) {
    Node* t = *a;
    *a = *b;
    *b = t;
}

void push(Node** head, int new_data) {
    Node* temp = new Node();
    temp->data = new_data;
    temp->next = *head;
    *head = temp;
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int getLength(Node* node) {
    int length = 0;
    while (node != NULL) {
        node = node->next;
        length++;
    }
    return length;
}

Node* addSameSizeList(Node* head1, Node* head2, int* carry) {
    if (head1 == NULL)
        return NULL;

    int sum;

    Node* result = new Node();

    result->next = addSameSizeList(head1->next, head2->next, carry);

    sum = head1->data + head2->data + *carry;
    result->data = sum % 10;
    *carry = sum / 10;

    return result;
}

void addCarryToRemaining(Node* head1, Node* curr, int* carry, Node** result) {
    int sum;
    if (head1 != curr) {
        addCarryToRemaining(head1->next, curr, carry, result);
        sum = head1->data + *carry;
        *carry = sum / 10;
        sum %= 10;
        push(result, sum);
    }
}

void addLists(Node* head1, Node* head2, Node** result) {
    if (head1 == NULL) {
        *result = head2;
        return;
    }
    else if (head2 == NULL) {
        *result = head1;
        return;
    }

    int length1 = getLength(head1);
    int length2 = getLength(head2);
    int carry = 0;

    Node* curr;

    if (length1 == length2) {
        *result = addSameSizeList(head1, head2, &carry);
    } else {
        int diff = abs(length1 - length2);

        if (length1 < length2)
            swapPointers(&head1, &head2);

        for (curr = head1; diff--; curr = curr->next)
            ;

        *result = addSameSizeList(curr, head2, &carry);
        addCarryToRemaining(head1, curr, &carry, result);
    }
    if (carry)
        push(result, carry);
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

    Node * head1 = NULL, *head2 = NULL, *result = NULL;

    int arr1[] = {9, 9, 9};
    int arr2[] = {1, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    for (int i = size1 -1; i >= 0; i--)
        push(&head1, arr1[i]);

    for (int i = size2 - 1; i >= 0; i--)
        push(&head2, arr2[i]);

    addLists(head1, head2, &result);
    printList(result);

    return 0;
}