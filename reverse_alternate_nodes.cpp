#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

struct LinkedList {
    Node* head;
    LinkedList() {
        head = NULL;
    }

    Node* reverse(Node* head, int k) {
        Node* curr = head;
        Node* next = NULL;
        Node* prev = NULL;
        int count = 0;
        while (curr != NULL && count < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count ++;
        }
        if (head != NULL)
            head->next = curr;
        count = 0;
        while (curr != NULL && count < k - 1) {
            curr = curr->next;
            count++;
        }

        if (curr != NULL)
            curr->next = reverse(curr->next, k);
        return prev;
    }

    void push(int data) {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main(void) {
	#ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LinkedList ll;
    for (int i = 20; i > 0; i--) {
        ll.push(i);
    }
    ll.print();
    cout << endl;
    ll.head = ll.reverse(ll.head, 3);
    ll.print();
    return 0;
}