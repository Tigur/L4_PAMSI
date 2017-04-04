#include <iostream>
#include <cmath>
#include <ctime>


#include "headers/STLstack.h"
#include "headers/STLqueue.h"
#include "headers/tabQueue.h"
#include "headers/tabStack.h"
#include "headers/defines.h"
#include "headers/myStack.h"
#include "timer/src/Timer.h"
#include "timer/src/Timer.cpp"

using namespace std;

int main()
{

    /*stack <long int>S;
   long int invalue=0;
    fillUp(S,invalue);

    show(S);*/
//------------------------------

    Timer timer1, timer2;


    tabStack <int> S;
    int invalue=0;

    timer1.start();
    while(invalue!=500001)
    {
        S.push(invalue);
        invalue++;
    }
    timer1.stop();
    //S.show();

    cout << "\n\n "<< timer1.getElapsedTimeInMilliSec()<< " ms";


    invalue=0;


    timer2.start();

    myStack <int> MS;
    while(invalue!=500001)
    {
        MS.push(invalue);
        invalue++;
    }

    timer2.stop();
   // MS.show();

    cout << "\n\n "<< timer2.getElapsedTimeInMilliSec()<< " ms";

    return 0;
}