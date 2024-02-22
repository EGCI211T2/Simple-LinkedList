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

}//automatically call  destructors
