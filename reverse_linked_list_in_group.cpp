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
        Node* prev = NULL;
        Node* next = NULL;
        int count = 0;
        while (curr != NULL && count < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        
        if (next != NULL) {
            head->next = reverse(next, k);
        }

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
    ll.push(9);
    ll.push(8);
    ll.push(7);
    ll.push(6);
    ll.push(5);
    ll.push(4);
    ll.push(3);
    ll.push(2);
    ll.push(1);
    ll.print();
    ll.head = ll.reverse(ll.head, 3);
    cout << endl;
    ll.print();
    return 0;
}