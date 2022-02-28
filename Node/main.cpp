#include <iostream>
#include "BT1.h"

using namespace std;

int main()
{
    LinkedList list;
    CreateList(list);

    Node* node;
    for(auto i = 1; i <= 10; i++)
    {
        node = CreateNode(i);

        AddHead(list, node);
        AddTail(list, node);
    }
return 0;
}