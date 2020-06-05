#ifndef queue_cpp
#define queue_cpp
#include "queue.h"

template <class elemType>
void linkList<elemType>::makeEmpty()
 {
  node <elemType> *p = head->next, *q;
  head->next=NULL;
  while (p != NULL) { q=p->next; delete p;  p=q;}
 }

template <class elemType>
void linkList<elemType>::create(elemType a)
 {
    elemType tmp=a;
    node <elemType> *p, *q = head;
    p = new node<elemType>(tmp);
    q->next = p;
    q = p;
    q->next = NULL;
}

template <class T>
ostream &operator<<(ostream &os,const linkList<T> &obj)
{
    node <T> *q = obj.head->next;
    os << endl;
    while (q != NULL){ os << q->data;  q = q->next;  }
    return os;
}

template <class T>
int queues<T>::status()
{
    node <T> *q = this->head->next;
    return q->data;
}

#endif
