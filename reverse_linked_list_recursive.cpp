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

    Node* reverse(Node* head) {
        if (head == NULL or head->next == NULL) {
            return head;
        }
        Node* rest = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return rest;
    }

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    void push(int data) {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
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
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);
    ll.print();
    ll.head = ll.reverse(ll.head);
    cout << endl;
    ll.print();
    return 0;
}