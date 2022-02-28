#ifndef BT1.h
#define BT1.h

struct Node {
    int data;
    Node* next;
};

struct LinkedList {
    Node* head;
    Node* tail;
}

Node* CreateNode(int init_data);
void CreateList(LinkedList& l);
void AddHead(LinkedList& l, Node* node);
void AddTail(LinkedList& l, Node* node);

#endif