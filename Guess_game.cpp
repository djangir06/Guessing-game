#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <cstring>
#include <conio.h>
using namespace std;
void easy();
void medium();
void hard();
void display();
int main()
{

    system("cls");

    display();

    // cout<<endl<<"Enter your name: ";
    bool Endgame = true;
    while (Endgame)
    {
        system("cls");
        display();
        cout << endl
             << "dificulty levels:-" << endl;
        cout << endl
             << "1 for easy\t";
        cout << "\t\t   2 for normal\t";
        cout << "\t\t   3 for hard\t" << endl;

        int dif_level;
        cout << endl
             << "Enter the difficulty level: ";
        cin >> dif_level;
        system("cls");
        display();

        if (dif_level == 1)
        {
            easy();
            char u_input;
        label1:

            cout << endl
                 << "Do you want to play again?(y/n): ";
            cin >> u_input;
            if (u_input == 'n')
            {
                Endgame = false;
            }
            else if (u_input == 'y')
            {
                continue;
            }
            else
            {

                cout << endl
                     << "Invalid Input!" << endl;
                goto label1;
            }
        }
        if (dif_level == 2)
        {
            medium();
            char u_input;
        label2:

            cout << endl
                 << "Do you want to play again?(y/n): ";
            cin >> u_input;
            if (u_input == 'n')
            {
                cout << endl
                     << "Thanks for playing!!";
                Endgame = false;
            }
            else if (u_input == 'y')
            {
                continue;
            }
            else
            {

                cout << endl
                     << "Invalid Input!" << endl;
                goto label2;
            }
        }
        if (dif_level == 3)
        {
            hard();
            char u_input;
        label3:

            cout << endl
                 << "Do you want to play again?(y/n): ";
            cin >> u_input;
            if (u_input == 'n')
            {
                Endgame = false;
            }
            else if (u_input == 'y')
            {
                continue;
            }
            else
            {

                cout << endl
                     << "Invalid Input!" << endl;
                goto label3;
            }
        }
       
      
    }

    return 0;
}
void display()
{

    cout << "**********************************************************************************" << endl;
    cout << "------------------------------The Guessing Game-----------------------------------" << endl;
}
void easy()
{
    srand(time(0));
    int SecretNumber = (rand() % 100) + 1;
    
    int player_choice;
    int chances = 10;

    cout << endl
         << "You have 10 chances to guess the number between 1 to 100!" << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << endl
             << "Enter the number: ";
        cin >> player_choice;

        if (player_choice == SecretNumber)
        {
            cout << endl
                 << "Congratulations!! You won!" << endl;
            return;
        }

        chances--;

        if (chances > 0)
        {
            if (player_choice > SecretNumber)
            {
                cout << endl
                     << "Choose a smaller number! " << chances << " chances left." << endl;
            }
            else
            {
                cout << endl
                     << "Choose a greater number! " << chances << " chances left." << endl;
            }
        }
    }

    cout << endl
         << "You lose! The number was " << SecretNumber << "." << endl;
}

void medium()
{
    srand(time(0));
    int SecretNumber = (rand() % 100) + 1;
    int player_choice;
    int chances = 7;

    cout << endl
         << "You have 7 chances to guess the number between 1 to 100!" << endl;

    for (int i = 1; i <= 7; i++)
    {
        cout << endl
             << "Enter the number: ";
        cin >> player_choice;

        if (player_choice == SecretNumber)
        {
            cout << endl
                 << "Congratulations!! You won!" << endl;
            return;
        }

        chances--;

        if (chances > 0)
        {
            if (player_choice > SecretNumber)
            {
                cout << endl
                     << "Choose a smaller number! " << chances << " chances left." << endl;
            }
            else
            {
                cout << endl
                     << "Choose a greater number! " << chances << " chances left." << endl;
            }
        }
    }

    cout << endl
         << "You lose! The number was " << SecretNumber << "." << endl;
}

void hard()
{
    srand(time(0));
    int SecretNumber = (rand() % 100) + 1;
    int player_choice;
    int chances = 5;

    cout << endl
         << "You have 5 chances to guess the number between 1 to 100!" << endl;

    for (int i = 1; i <= 5; i++)
    {
        cout << endl
             << "Enter the number: ";
        cin >> player_choice;

        if (player_choice == SecretNumber)
        {
            cout << endl
                 << "Congratulations!! You won!" << endl;
            return;
        }

        chances--;

        if (chances > 0)
        {
            if (player_choice > SecretNumber)
            {
                cout << endl
                     << "Choose a smaller number! " << chances << " chances left." << endl;
            }
            else
            {
                cout << endl
                     << "Choose a greater number! " << chances << " chances left." << endl;
            }
        }
    }

    cout << endl
         << "You lose! The number was " << SecretNumber << "." << endl;
}