//
// Created by resolution on 28.03.17.
//

#ifndef QUEUETAB_TABQUEUE_H
#define QUEUETAB_TABQUEUE_H
#include <iostream>


#define MAX_SIZE 500000


using namespace std;

template <class type>
class tabQueue
{
    int size;

    int wyjatek;

    type tab[MAX_SIZE];
    int top=MAX_SIZE-1;
    int back=MAX_SIZE-1;



public:




    void changeBack()
    {
        back --;
        if(back<0)
            back=MAX_SIZE;
    }
    void changeTop()
    {
        top --;
        if(top<0)
            top=MAX_SIZE;
    }

    bool push( type value)
    {
        if(size==500000)
        {
            cerr << "kolejka pełna !!" << endl;
            return false;
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
                tp=MAX_SIZE;
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
