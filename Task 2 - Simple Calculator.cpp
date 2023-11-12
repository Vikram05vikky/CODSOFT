#include <iostream>
using namespace std;

int main()
{
    int n;
    while (true)
    {
        cout << "1.Addition \n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit" << endl
             << endl;
        cout << "Enter choice for calculation : " << endl;

        cin >> n;
        if (n == 5)
        {
            cout << "\t-------------------------------------------------------------------" << endl
                 << endl;
            cout << "\t\tExiting the program !" << endl
                 << endl;
            cout << "\t-------------------------------------------------------------------" << endl;
            break;
        }
        if (n <= 0 || n > 5)
        {
            cout << "\t-------------------------------------------------------------------" << endl
                 << endl;
            cout << "\t\tEnter valid choice!" << endl
                 << endl;
            cout << "\t-------------------------------------------------------------------" << endl;
        }
        else
        {
            cout << endl;
            int num1, num2;
            cout << "Enter two numbers for calculation : " << endl;

            cout << "Enter number 1 : ";
            cin >> num1;

            cout << "Enter number 2 : ";
            cin >> num2;
            cout << endl;
            switch (n)
            {
            case 1:
            {
                int temp = num1 + num2;
                cout << "\t-------------------------------------------------------------------" << endl
                     << endl;
                cout << "\t\tAddition of " << num1 << " and " << num2 << " is " << temp << endl
                     << endl;
                cout << "\t-------------------------------------------------------------------" << endl;
                break;
            }
            case 2:
            {
                int temp = num1 - num2;
                cout << "\t-------------------------------------------------------------------" << endl
                     << endl;
                cout << "\t\tSubtraction of " << num1 << " and " << num2 << " is " << temp << endl
                     << endl;
                cout << "\t-------------------------------------------------------------------" << endl;
                break;
            }
            case 3:
            {
                int temp = num1 * num2;
                cout << "\t-------------------------------------------------------------------" << endl
                     << endl;
                cout << "\t\tMultiplication of " << num1 << " and " << num2 << " is " << temp << endl
                     << endl;
                cout << "\t-------------------------------------------------------------------" << endl;
                break;
            }
            case 4:
            {
                if (num2 != 0)
                {
                    int temp = num1 / num2;
                    cout << "\t-------------------------------------------------------------------" << endl
                         << endl;
                    cout << "\t\tDivision of " << num1 << " and " << num2 << " is " << temp << endl
                         << endl;
                    cout << "\t-------------------------------------------------------------------" << endl;
                }
                else
                {
                    cout << "\t-------------------------------------------------------------------" << endl
                         << endl;
                    cout << "\t\tDivision by zero is not possible." << endl
                         << endl;
                    cout << "\t-------------------------------------------------------------------" << endl;
                }
                break;
            }
            default:
            {
                cout << "\t-------------------------------------------------------------------" << endl
                     << endl;
                cout << "\t\tEnter valid choice!" << endl
                     << endl;
                cout << "\t-------------------------------------------------------------------" << endl;
            }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
