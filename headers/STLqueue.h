//
// Created by resolution on 29.03.17.
//

#ifndef QUEUETAB_STLQUEUE_H
#define QUEUETAB_STLQUEUE_H
#include <iostream>
#include <queue>

using namespace std;

void clear (queue<int> S)
{
    for (int i=0; i<S.size();i++)
    {
        S.pop();
    }
}
void show (queue <int> S)
{
    for (int i=0; i<S.size();i++)
    {
        cout << S.front() << endl;
    }
}

#endif //QUEUETAB_STLQUEUE_H
