#include <iostream>
#include <cstdio>

using namespace std;

class StackNode {
    public:
        int data;
        StackNode *next;
};

class Stack {
    private:
        StackNode *top;
        int length;
    public:
        void push(int val);
        int pop();
        int peek();
        void clear();
        void printStack();
        int size();
        bool isEmpty();
        Stack() {
            top = NULL;
            length = 0;
        }
};

void Stack::push (int val) {
    StackNode *tmp = new StackNode;
    tmp->data = val;
    tmp->next = top;
    top = tmp;
}

int Stack::pop() {
    StackNode *tmp = new StackNode;
    tmp = top;
    top = top->next;
    tmp->next = NULL;
    int ret = tmp->data;
    delete tmp;
    return ret;
}

int Stack::peek() {
    return top->data;
}

void Stack::clear() {
    top = NULL;
    delete top;
}

bool Stack::isEmpty() {
    return top == NULL;
}

int Stack::size() {
    int size;
    StackNode *t = top;
    while (t != NULL) {
        size++;
        t = t->next;
    }
    return size;
}

void Stack::printStack() {
    if (top != NULL) {
        StackNode *tmp = top;
        while (tmp != NULL) {
            printf("%d ",tmp->data);
            tmp = tmp->next;
        }
    } else
        printf("%s",(char*)NULL);
    cout << endl;
}

int main() {
    Stack n;
    n.push(1);
    n.push(2);
    n.printStack();
    cout << n.size() << endl;
}