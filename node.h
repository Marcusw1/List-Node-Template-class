#ifndef __NODE_H__
#define __NODE_H__

#include <cstdlib>

template <class T>
class Node{
  
  public:

  	T data;
  	Node<T>* next;

   Node(T element){
    Node<T>* next = NULL;
  	data = element;
   }
   
};

#endif	
