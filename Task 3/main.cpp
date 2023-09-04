//
//  main.cpp
//  pro4
//
//  Created by Sridhar on 02/09/23.
//

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

char sq[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int Winner();
bool checkMove(int);
void board();
void reset();
int main()
{
    string answer="Y";
    while(answer=="Y")
    {
        int player = 1, i, ch;
        char mark;
        bool isMoveValid = false;
        do
        {
            board();
            player = (player % 2) ? 1 : 2;
            cout << "Player " << player << ", where would you like to place:  ";
            cin >> ch;
            mark = (player == 1) ? 'X' : 'O';
            if ((checkMove(ch)) == false)
            {
                isMoveValid = false;
            }
            else
            {
                isMoveValid = true;
            }
            if (isMoveValid)
            {
                sq[ch] = mark;
            }
            else
            {
                cout << "Move is Invalid.";
                player--;
                cin.ignore();
                cin.get();
            }
            i = Winner();
            player++;
        }
        while (i == 0);
        board();
        if (i == 1)
        {
            cout << "Player " << --player << " wins!";
        }
        else
        {
            cout << "Draw.";
        }
        cout<<endl<<endl;
        cout<<"Restart?(Y/N): ";
        cin>>answer;
        reset();
    }
    cin.ignore();
    cin.get();
    return 0;
}

int Winner()
{
    if (sq[1] == sq[2] && sq[2] == sq[3])
    {
        return 1;
    }
    else if (sq[4] == sq[5] && sq[5] == sq[6])
    {
        return 1;
    }
    else if (sq[7] == sq[8] && sq[8] == sq[9])
    {
        return 1;
    }
    else if (sq[1] == sq[4] && sq[4] == sq[7])
    {
        return 1;
    }
    else if (sq[2] == sq[5] && sq[5] == sq[8])
    {
        return 1;
    }
    else if (sq[3] == sq[6] && sq[6] == sq[9])
    {
        return 1;
    }
    else if (sq[1] == sq[5] && sq[5] == sq[9])
    {
        return 1;
    }
    else if (sq[3] == sq[5] && sq[5] == sq[7])
    {
        return 1;
    }
    else if (sq[1] != '1' && sq[2] != '2' && sq[3] != '3' && sq[4] != '4' && sq[5] != '5' && sq[6] != '6' && sq[7] != '7' && sq[8] != '8' && sq[9] != '9')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

void reset()
{
    sq[1] = '1';
    sq[2] = '2';
    sq[3] = '3';
    sq[4] = '4';
    sq[5] = '5';
    sq[6] = '6';
    sq[7] = '7';
    sq[8] = '8';
    sq[9] = '9';
}

void board()
{
    cout << "-----------------------\n";
    cout << "       Tic Tac Toe     \n";
    cout << "-----------------------\n";
    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;
    cout << "     |     |     " << endl;
    cout << "  " << sq[1] << "  |  " << sq[2] << "  |  " << sq[3] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << sq[4] << "  |  " << sq[5] << "  |  " << sq[6] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << sq[7] << "  |  " << sq[8] << "  |  " << sq[9] << endl;
    cout << "     |     |     " << endl << endl;
}

bool checkMove(int ch)
{
    bool isValid = false;
    char aChar = '0' + ch;
    if (ch > 0 && ch <= 9)
    {
        if (sq[ch] == aChar)
        {
            isValid = true;
        }
        else
        {
            return false;
        }
        return isValid;
    }
    return isValid;
}
