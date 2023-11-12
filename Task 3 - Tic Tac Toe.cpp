#include <iostream>
using namespace std;

char grid[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void display()
{
    cout << "       |       |     \n";
    cout << "  " << grid[1] << "    |"
         << "  " << grid[2] << "    |"
         << "  " << grid[3] << "    \n";
    cout << "_______|_______|_______\n";
    cout << "       |       |     \n";
    cout << "       |       |     \n";
    cout << "  " << grid[4] << "    |"
         << "  " << grid[5] << "    |"
         << "  " << grid[6] << "    \n";
    cout << "_______|_______|_______\n";
    cout << "       |       |     \n";
    cout << "       |       |     \n";
    cout << "  " << grid[7] << "    |"
         << "  " << grid[8] << "    |"
         << "  " << grid[9] << "    \n";
    cout << "       |       |     \n";
}

int findwinner(char grid[])
{
    if (grid[1] == grid[2] && grid[2] == grid[3])
        return 1;

    else if (grid[4] == grid[5] && grid[5] == grid[6])
        return 1;

    else if (grid[7] == grid[8] && grid[8] == grid[9])
        return 1;

    else if (grid[1] == grid[4] && grid[4] == grid[7])
        return 1;

    else if (grid[2] == grid[5] && grid[5] == grid[8])
        return 1;

    else if (grid[3] == grid[6] && grid[6] == grid[9])
        return 1;

    else if (grid[1] == grid[5] && grid[5] == grid[9])
        return 1;

    else if (grid[3] == grid[5] && grid[5] == grid[7])
        return 1;

    else if (grid[1] != '1' && grid[2] != '2' && grid[3] != '3' && grid[4] != '4' && grid[5] != '5' && grid[6] != '6' &&
             grid[7] != '7' && grid[8] != '8' && grid[9] != '9')
        return 0;
    else
        return -1;
}

int main()
{
    cout << "\n \t \t Tic Tac Toe \n \n \n";
    cout << " \t Player 1 (X) \n"
         << endl
         << "\t Player 2 (O) \n \n";
    int player = 1, check, wish;
    char spot;
    do
    {
        display();
        cout << endl;
        player = (player % 2) ? 1 : 2;

        cout << " Player " << player << " enter a digit  - ";
        cin >> wish;
        cout << endl
             << endl;
        spot = (player == 1) ? 'X' : 'O';

        if (wish == 1 && grid[1] == '1')
            grid[1] = spot;

        else if (wish == 2 && grid[2] == '2')
            grid[2] = spot;

        else if (wish == 3 && grid[3] == '3')
            grid[3] = spot;

        else if (wish == 4 && grid[4] == '4')
            grid[4] = spot;

        else if (wish == 5 && grid[5] == '5')
            grid[5] = spot;

        else if (wish == 6 && grid[6] == '6')
            grid[6] = spot;

        else if (wish == 7 && grid[7] == '7')
            grid[7] = spot;

        else if (wish == 8 && grid[8] == '8')
            grid[8] = spot;

        else if (wish == 9 && grid[9] == '9')
            grid[9] = spot;

        else
        {
            cout << "\t|-----------------------------------------------" << endl;
            cout << "\t\tInvalid move by the player" << endl;
            cout << "\t-----------------------------------------------|" << endl;
            player--;
        }

        check = findwinner(grid);
        player++;

    } while (check == -1);

    display();

    if (check == 1)
    {
        cout << "\t|--------------------------------------------------------" << endl
             << endl;
        cout << "\t\tCongratulations ! \aPlayer " << player - 1 << " won the game " << endl
             << endl;
        cout << "\t--------------------------------------------------------|" << endl;
    }
    else
    {
        cout << "|--------------------------------------------------------" << endl
             << endl;
        cout << "\t\aGame Draw!" << endl
             << endl;
        cout << "--------------------------------------------------------|" << endl;
    }

    return 0;
}
