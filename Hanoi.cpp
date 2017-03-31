#include <iostream>
#include <stack>





using namespace std;


void show (stack <int> S)
{
    for (int i=0; i<S.size();i++)
    {
        cout << S.top() << endl;
    }
}


bool End(stack <int> * S)
{
    int empties=0;
    for (int i=0;i<3;i++)
    {
        if(S[i].empty())
        {
            empties++;
        }
    }

    if(empties==2)
        return true;
    else
        return false;
}


void enterMax(int max)
{
    cout << "how many elements does the tower has ? : " << endl;
    cin >> max;
}


void topsUpdate(stack <int> *S, int * tops)
{
    for (int i=0;i<3;i++)
    {
        S[i].top()=tops[i];
    }
}


void stackInit (stack <int> S,int max, int smallest)
{
        for (int i=max; i>=0; i--)
        {
            S.push(i);
        }

    smallest= 0;
}
void move(stack  <int> * S, int from, int to)
{
    S[to].push(S[from].top());
    S[from].pop();
}

void onlyPossible(int * tops, int max, int & smallestOne, int & from, int & to)
{
    int biggest=-1;
    int biggestOne;
    int biggerOne;
    smallestOne=max+1;

    for (int i=0;i<3;i++)
    {
        if(tops[i]==0)
        {
            smallestOne=i;

            continue;
        }
        if(tops[i]>biggest)
        {
            biggest=tops[i];
           biggestOne =i;
        }


    }
    switch(biggestOne+smallestOne)
    {
        case 1:
            biggerOne=2;
            break;

        case 2:
            biggerOne=1;
            break;

        case 3:
            biggerOne=0;
            break;
    }

    from=biggerOne;
    to=biggestOne;
}

int Hanoi()
{


    int tops[3];
    int max, smallest, from, to;

    stack <int> S[3];

    enterMax(max);
    stackInit(S[0],max,smallest);


    while(!End(S))
    {
        if (smallest==2)
        {
            S[0].push(S[smallest].top());
            S[smallest].pop();

            if(End(S))
                return 0;
        }
        else
        {
            S[smallest + 1].push(S[smallest].top());//smallest to right
            S[smallest].pop();

            if(End(S))
                return 0;
        }
        topsUpdate(S,tops);
        onlyPossible(tops, max, smallest,from,to);
        S[to].push(S[from].top());
        S[from].pop();
    }

    for(int i=0;i<3;i++)
    {
        show(S[i]);
    }




    return 0;
}
