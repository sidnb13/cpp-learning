#include <iostream>
#include <cstdio>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
};

class SinglyLinkedList {
    private:
        //private access instance variables
        Node *head, *tail;
    public:
        //default constructor
        SinglyLinkedList() {
            head = NULL;
            tail = NULL;
        }
        void push(int d) {
            //allocate memory for the desired node by calling default constructor
            Node *temp = new Node;
            temp->data = d;
            temp->next = head;
            //make the head the new node
            head = temp;
        }
        void insert(Node *prev, int d) {
            //instantiate curr
            Node *curr = new Node;
            curr->data = d;
            curr->next = prev->next;
            //make prev's next point at curr
            prev->next = curr;
        }
        void append(int d) {
            //allocate memory for proposed node and assign fields
            Node *end = new Node;
            end->data = d;
            end->next = NULL;
            //if LL is empty, set the null head to the desired node
            //else traverse to the last node and set its next (null) pointing to end
            if (head == NULL)
                head = end;
            else {
                Node *last = head;
                while (last->next != NULL)
                    last = last->next; 
                last->next = end;
            }
        }
        void deleteHead() {
            //delete temp after passing address of head to it, make head point to the next in line
            Node *temp = new Node;
            temp = head;
            head = head->next;
            delete temp;
        }
        void deleteTail() {
            Node *current = new Node;
            Node *prev = new Node;
            current = head;
            //traverse to penultimate node
            while (current->next != NULL) {
                prev = current;
                current = current->next;
            }
            prev->next = NULL;
            tail = prev;
            delete current;
        }
        void deleteByData(int d) {
            Node *prev = new Node;
            Node *curr = new Node;
            curr = head;
            while (curr->next != NULL) {
                if (curr->data == d && (curr == head || curr == tail)) {
                    if (curr == head) {
                        deleteHead();
                        return;
                    } else {
                        deleteTail();
                        return;
                    }
                } else if (curr->data == d) {
                    prev->next = curr->next;
                    delete curr;
                    return;
                }
                prev = curr;
                curr = curr->next;
            }
        }
        Node *nodeByData(int d) {
            Node *curr = new Node;
            curr = head;
            while (curr->next != NULL) {
                if (curr->data == d)
                    return curr;
            }
            return nullptr;
        }
        void displayList() {
            Node *curr = new Node;
            curr = head;
            while (curr != NULL) {
                printf("%d -> ",curr->data);
                curr = curr->next;
            }
            printf("%s\n","NULL");
        }
};

int main() {
    SinglyLinkedList list;
    list.append(1);
    list.append(2);
    printf("%d\n",list.nodeByData(1)->data);
    list.displayList();
}