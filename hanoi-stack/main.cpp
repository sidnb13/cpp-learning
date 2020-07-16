#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

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
    length++;
}

int Stack::pop() {
    if (top == NULL)
        return INT_MIN;
    StackNode *tmp = new StackNode;
    tmp = top;
    top = top->next;
    tmp->next = NULL;
    int ret = tmp->data;
    delete tmp;
    length--;
    return ret;
}

bool Stack::isEmpty() {
    return top == NULL;
}

int Stack::size() {
    return length;
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

void displayMovement(int disk, string from, string to) {
    printf("Disk %d was moved from \'%s\' to \'%s\'\n",disk,from.c_str(),to.c_str());
}

void moveDisks(Stack *src, Stack *dest, string from, string to) {
    int top1 = src->pop(), top2 = dest->pop();
    if (top1 == INT_MIN) {
        src->push(top2);
        displayMovement(top2,to,from);
    } else if (top2 == INT_MIN) {
        dest->push(top1);
        displayMovement(top1,from,to);
    } else if (top1 > top2) {
        src->push(top1);
        src->push(top2);       
        displayMovement(top2,to,from);
    } else {
        dest->push(top2);
        dest->push(top1);
        displayMovement(top1,from,to);
    }
}

void performHanoi(int numDisks) {
    Stack *t1 = new Stack, *t2 = new Stack, *t3 = new Stack;
    string T1 = "T1", T2 = "T2", T3 = "T3";
    int numMoves = (int) pow(2,numDisks) - 1, i;
    for (i = numDisks; i >= 1; i--)
        t1->push(i);
    if (numDisks%2==0) {
        string temp = T2;
        T2 = T3;
        T3 = temp;
    }
    for (i = 1; i <= numMoves; i++) {
        if (i%3==1)
            moveDisks(t1,t3,T1,T3);
        else if (i%3==2)
            moveDisks(t1,t2,T1,T2);
        else if (i%3==0)
            moveDisks(t2,t3,T2,T3);
    }
}

int main() {
    performHanoi(2);
    // Stack *b = new Stack;
    // cout << b->pop() << endl;
}