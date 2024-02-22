#ifndef NODE_H
#define NODE_H
/* if this header is never been included, include it. Otherwise ignore this.
To prevent double declaration of any identifiers */

class node
{ public:
    int value;
    node *next;

//public:
   node(int);
   /* ~node();
     void set_next(node*);
    node * get_next();
   */
};
node::node(int x ){
  value=x;
  next=NULL;
}


#endif
