#indef LinkedList.cpp
#define 
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct LinkedList {
    Node* head;
    Node* tail;
}

Node* CreateNode(int init_data);
void CreateList(LinkedList& 1){
    l.head = NULL;
	l.tail = NULL;
}