#ifndef __LIST_H__
#define __LIST_H__

#include "node.h"
#include <iostream>

using namespace std;

template <class T>
class List{

  private:
    int list_size;
  	Node<T>* top;

  	bool empty();

  public:
   List();
   ~List();

   void insert(T);
   void remove(T);
   void clear_list();
   void print_list();
   int size();
};

template<class T> List<T>::List(){
  list_size = 0;
  top = NULL;
 }

template<class T> List<T>::~List(){
   delete top;
}

template<class T> void List<T>::insert(T item){
  
Node<T>* newNode = new Node<T>(item);

  if(empty()){
   top = newNode;
   list_size++;
  } else{

    Node<T>* temp;
    temp = top;
    while(temp->next != NULL){
      temp = temp->next;
    }
    temp->next = newNode;
    list_size++;
  }

}

template<class T> void List<T>::print_list(){
  Node<T>* temp = top;
  while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
  }
 
}


template <class T> bool List<T>::empty(){
 return top == NULL;
}


template <class T> int List<T>::size(){
 return list_size;
}

#endif
