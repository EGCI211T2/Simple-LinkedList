

#include "node.h"
typedef node* nodePtr;

class LL{
      nodePtr hol;// node * hol;
         //head of linked list
      int size;
  public:
      LL();
      void insert_node(int);
      void printList();
     ~LL();
};

LL::LL(){
  hol=NULL;
  size=0;
}



void LL::insert_node(int x){
   
   	nodePtr t=hol;
   
    	//search for location
   	while(t->next) t=t->next;
   	t->next=new node(x);
  
     size++;
}


void LL::printList (){
   nodePtr t;
  for(t=hol; t; t=t->next)

  {
       t->print();
       cout<<" ->";
  }
  
  cout<<"NULL" <<endl;
}


LL::~LL(){
   nodePtr t;   
  t=hol;
  while(t){
     

  } 
} 
