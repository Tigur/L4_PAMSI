//
// Created by resolution on 28.03.17.
//

#ifndef QUEUETAB_TABQUEUE_H
#define QUEUETAB_TABQUEUE_H
#include <iostream>
#include"defines.h"




using namespace std;

template <class type>
class tabQueue
{
    int size=0;
    int currentTab=1;

    int wyjatek;

<<<<<<< Updated upstream
    type tab[MAX_CAP];
    int top=MAX_CAP-1;
    int back=MAX_CAP-1;
=======
    type* tab= new type [1];
    int top=currentTab;
    int back=currentTab;
>>>>>>> Stashed changes



public:

    bool moreSpace(int& size)
    {
        type *temp= new type[size+1];
        for (int i=0;i<size;i++)
        {
            temp[top-i]=tab[top-i];

        }
        delete[] tab;
        tab=temp;

        size++;
        return true;
    }


    void changeBack()
    {
        back --;
        if(back<0)
<<<<<<< Updated upstream
            back=MAX_CAP;
=======
            back=currentTab;
>>>>>>> Stashed changes
    }
    void changeTop()
    {
        top --;
        if(top<0)
<<<<<<< Updated upstream
            top=MAX_CAP;
=======
            top=currentTab;
>>>>>>> Stashed changes
    }

    bool push( type value)
    {
        if(size==MAX_SIZE)
        {
            cerr << "kolejka pełna !!" << endl;
            return false;
        }
        if(size==currentTab)
        {
            moreSpace(currentTab);
        }
        tab[back]=value;
        changeBack();

    size++;

        return true;
    }

    bool pop()
    {
        if(size==0)
        {
            cerr << "kolejka pusta !!" << endl;
            return false;
        }

        tab[top]=NULL;
        changeTop();


    size--;
        return true;
    }
    void show ()
    {


        int tp=top;
        int bck = back;

        while(tp!=bck)
        {



            cout << tab[tp] << endl;

            tp --;
            if(tp<0)
                tp=MAX_CAP;
            //changeTop();
        }

        tp=top;
        bck = back;

    }

    void clear()
    {


        while(top!=back)
        {


            changeTop();
        }

        size=0;
    }


};

/*template <class type>
void GetValue(type  &value)

{
    cout << "enter the value: "<< endl;
    cin >>value;
}

void menu()
{
    cout <<"\n\n";
    cout << "1. push to the stack" << endl;
    cout << "2. pop element" << endl;
    cout << "3. clear the stack "<< endl;
    cout << "4. show the stack"<< endl;
    cout << "5. EXIT" << endl;
    cout << "choose option :\n "<< endl;
}*/
#endif //QUEUETAB_TABQUEUE_H
