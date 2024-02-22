

#include "node.h"
typedef node* nodePtr;

class LL{
   nodePtr hol;// node * hol;
          //head of linked list
   int size;
  public:
     LL();
      void insert_node(int);
	    void print_all();
     ~LL();
};

LL::LL(){
  hol=NULL;
  size=0;
}



void LL::insert_node(int x){
   if(hol==NULL) 
     hol=new node(x);
  else{
    nodePtr t=new node(x);
    t->next=hol;
    hol=t;
  //   hol=new node(x);
  }
  /*else{
   	nodePtr t=hol;
   
    	//search for location
   	while(t->next) t=t->next;
   	t->next=new node(x);
  } */
     size++;
}


void LL::print_all (){
   nodePtr t;
  for(t=hol; t; t=t->next)


       cout<<setw(5)<<t->value;

  cout<<endl;
}


LL::~LL(){
   nodePtr t;   
  t=hol;
  while(t){
      hol=hol->next;
      delete t;
      t=hol;

  } 
} 
