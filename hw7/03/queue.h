#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
    #include <iostream>
    using namespace std;

    template <class elemType> class linkList;
    template <class T> ostream &operator<<(ostream &, const linkList<T> &);
    template <class elemType> class queues;
    class client;
    template <class elemType>
    class node
    {
        friend class linkList<elemType>;
        friend ostream &operator<<<>( ostream &, const linkList<elemType> &);
        friend  class queues<elemType>;
    private:
        elemType  data;
        node <elemType> *next;
    public:
        node(const elemType &x, node <elemType> *N = NULL)
                           { data = x; next = N;}
        node( ):next(NULL) {}
        ~node(){}
    };

    template <class elemType>
    class linkList
    {
        friend ostream &operator<<<>( ostream &, const linkList<elemType> &);
    protected:
        node <elemType> *head;
        void makeEmpty();
    public:
         linkList()  { head = new node<elemType>;  }
         ~linkList()  {makeEmpty(); delete head;}
         void create(const elemType a);
    };


    template <class elemType>
    class queues : public linkList<elemType>
    {
    public:
        queues(){this->head = new node<elemType>;}
        void push(const elemType data)
           {
                node <elemType> *p = new node<elemType>(data);
                p->next =this-> head->next;   this->head->next = p;
           }
        bool pop(elemType data) //Õ»Îª¿ÕÊ±·µ»Øfalse¡£
          {
                node <elemType> *p = this->head->next;
                this-> head->next = p->next;
                data = p->data;
                delete p;
                return true;
          }
        int status();
};



#include "queue.cpp"
#endif // QUEUE_H_INCLUDED
