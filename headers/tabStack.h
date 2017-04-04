//
// Created by resolution on 30.03.17.
//

#ifndef GENERAL3_TABSTACK_H
#define GENERAL3_TABSTACK_H
#include <iostream>
using namespace std;



template <class type>
class tabStack
{


    type* tab= new type[1];
    int size=1;
    int top=-1;

public:



    bool moreSpace(int size)
    {
        type *temp= new type[size+1];
        for (int i=0;i<size;i++)
        {
            temp[i]=tab[i];

        }
        delete tab;
        tab=temp;

        return true;
    }
    bool push( type value)
    {
        if(top=size-1)
        {
            moreSpace(size);
        }
        tab[top+1]=value;
        top++;
        size++;

        return true;
    }
    bool pop()
    {
        tab[top]=NULL;
        top--;
        size--;

        return true;
    }
    void show ()
    {
        for (int i=top;i>0;i--)
        {
            cout << tab[i]<< endl;
        }

    }

    void clear ()
    {
        for (int i=top;i>0;i--)
        {
            tab[i]=NULL;
            top=-1;
        }
    }


};


void menu()
{
    cout <<"\n\n";
    cout << "1. push to the stack" << endl;
    cout << "2. pop element" << endl;
    cout << "3. clear the stack "<< endl;
    cout << "4. show the stack"<< endl;
    cout << "5. EXIT" << endl;
    cout << "choose option :\n "<< endl;
}

template <class type>
void GetValue(type  &value)

{
    cout << "enter the value: "<< endl;
    cin >>value;
}

#endif //GENERAL3_TABSTACK_H
