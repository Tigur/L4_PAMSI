//
// Created by resolution on 30.03.17.
//

#ifndef GENERAL3_STLSTACK_H
#define GENERAL3_STLSTACK_H
#include <iostream>
#include <stack>
#include"defines.h"

#include "defines.h"

using namespace std;
template <class type>
void clear (stack <type> &S)
{
    for (int i=0; i<MAX_CAP;i++)
    {
        S.pop();
    }
}

template <class type>
void show (stack<type> S)
{
    for (int i=0; i<=MAX_CAP;i++)
    {
        cout << S.top() << endl;
        S.pop();
    }
}

template <class type>
void fillUp(stack<type> &S, type startVal)
{
    for (int i=0; i<=MAX_CAP; i++)
    {
        S.push(startVal);
        startVal++;
    }
}
#endif //GENERAL3_STLSTACK_H
