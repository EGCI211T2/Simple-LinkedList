#include <iostream>

using namespace std;
#include "node.h"

int main(int argc, char **argv){

  node a(5),b,*head;
  a.next=&b;
  head=&a; 
  b.value=head->value+3; // (*head).value  a.value
  temp=head;
  temp->print()
  temp->next->print();


// 1. Create node c
//2. Connect b->c

//3. use loop to print all nodes


}//automatically call  destructors
