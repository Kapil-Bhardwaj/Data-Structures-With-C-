// create h node of LL
#include <iostream>

using namespace std;

class node
{
    public :
    int data;
    node *next;
    
    node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};

int main()
{
    node *first = new node(32);
    cout<<first->data<<endl;
    cout<<first->next<<endl;

    return 0;
}
