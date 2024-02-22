#include <iostream>

using namespace std;
#include "node.h"

int main(int argc, char **argv){
	int x=5;
    node a,b,*head;
    a.value = x;
    a.next=&b;
    head=&a; 
    b.value=head->value+3; // (*head).value  a.value
    temp=head;
    cout <<temp->value;
    cout<<temp->next->value;

// 1. Create node c
//2. Connect b->c
//3. Use the constructor to set the value
//4. use loop to create all nodes
//5. Delete all nodes

}//automatically call  destructors
