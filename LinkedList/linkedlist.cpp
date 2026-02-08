#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node(int data) {
            this->data = data;
            this->next = nullptr;
        }
};
class LinkedList {
    private:
        Node* head;
    public:
        LinkedList() {
            head->next = nullptr;
        }
        ~LinkedList() {
            Node* current = head;
            while(current != nullptr) {
                Node* next = current->next;
                delete current;
                current = next;
            }
        }
        void insertAtHead(int data) {
            Node* newNode = new Node(data);
            newNode->next = head;
            head = newNode;
        }
        void insertAtTail(int data) {
            Node* newNode = new Node(data);
            Node* temp = head;
            while(temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        void printList() {
            Node* current = head;
            while(current != nullptr) {
                cout<<current->data<<" ";
                current = current->next;
            }
            cout<<endl;
        }
};

int main() {
    LinkedList list;
    list.insertAtHead(10);
    list.insertAtHead(20);
    list.printList();
    return 0;
}