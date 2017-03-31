#include <iostream>
#include "headers/STLstack.h"
#include "headers/STLqueue.h"
#include "headers/tabQueue.h"
#include "headers/tabStack.h"
#include "headers/defines.h"

using namespace std;

int main()
{

    stack <long int>S;
   long int invalue=0;
    for (int i=0; i<=MAX_CAP; i++)
    {
        S.push(invalue);
        invalue++;
    }

    show(S);



    return 0;
}