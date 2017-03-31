//
// Created by resolution on 30.03.17.
//

#ifndef GENERAL3_STLSTACK_H
#define GENERAL3_STLSTACK_H
#include <iostream>
#include <stack>

using namespace std;
template <class type>
void clear (stack <type> &S)
{
    for (int i=0; i<S.size();i++)
    {
        S.pop();
    }
}

template <class type>
void show (stack<type> S)
{
    for (int i=0; i<=S.size();i++)
    {
        cout << S.top() << endl;
        S.pop();
    }
}
#endif //GENERAL3_STLSTACK_H
