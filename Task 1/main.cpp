//
//  main.cpp
//  pro2
//
//  Created by Sridhar on 25/08/23.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int randomNum;
    int myguess;
    srand(time_t(0));
    randomNum=rand()%100+1;
    cout<<"-----------------------------\n";
    cout<<"     NUMBER GUESSING GAME    \n";
    cout<<"-----------------------------\n\n";
    do
    {
        cout<<"Enter your guess between 1 and 100:";
        cin >> myguess;
        if (myguess > randomNum)
        {
            cout <<"Your Guess is high.\n\n";
        }
        else if (myguess < randomNum)
        {
            cout <<"Your Guess is low.\n\n";
        }
        else
        {
            cout<<"\nYou got the right guess.\n";
        }
    }
    while (myguess != randomNum);
    return 0;
}
