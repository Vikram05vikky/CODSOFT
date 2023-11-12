#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << endl;
    cout << "ＮＵＭＢＥＲ　ＧＵＥＳＳＩＮＧ　ＧＡＭＥ" << endl
         << endl;

    srand(time(nullptr));

    int random = rand() % 100 + 1;
    int guess;
    int attempt = 0;
    int max = 10;

    while (attempt <= max)
    {
        cout << "Guess number between 1 and 100 : ";
        cin >> guess;
        cout << endl;
        attempt++;

        if (guess <= 0 || guess > 100)
        {
            cout << "\tERROR ! Enter number between 1 and 100" << endl
                 << endl;
        }
        else if (guess == random)
        {
            cout << "\t|-------------------------------------" << endl;
            cout << "\t  Congratulations! The number is " << random << endl
                 << endl;
            cout << "\t  Number of attempts : " << attempt << endl;
            cout << "\t-------------------------------------|";
            break;
        }
        else if (guess < random)
            cout << "\tEnter a large number !" << endl
                 << endl;
        else if (guess > random)
            cout << "\tEnter a small number !" << endl
                 << endl;
    }

    if (attempt > max)
    {
        cout << "\t|-------------------------------------------" << endl;
        cout << "\t\tSorry You exceed maximum attempts !!" << endl;
        cout << "\t-------------------------------------------|" << endl;
    }
}
