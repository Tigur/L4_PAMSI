//
// Created by resolution on 30.03.17.
//

#ifndef L4_MYSTACK_MYSTACK_H_H
#define L4_MYSTACK_MYSTACK_H_H
#include <iostream>
#include "List.h"
#include "cell.h"



template <class type>
class myStack : public List <type>
{

    cell <type> element[11];
    int size=0;


public:

    myStack() {};
    ~myStack() {}

    void push(type value)
    {
        List<type> :: push(value);

        size ++;
    }

    void pop()
    {
        List <type> :: del(1);
    }
    void clear()
    {
        List <type> :: delAll();
    }
    void show()
    {
        List <type>:: show();

    }

};
#endif //L4_MYSTACK_MYSTACK_H_H
