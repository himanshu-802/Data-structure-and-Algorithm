#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node * next;
        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
};

Node* deleteNode(Node *head,int data)
{
    //Incomplete
}

int main(int argc, char const *argv[])
{
    Node * head = NULL;
    return 0;
}