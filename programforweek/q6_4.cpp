#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n + 4; i++)
        cout << " ";
    cout << "|" << endl;
    for (int i = 0; i < n + 2; i++)
        cout << " ";
    cout << "__*__" << endl;
    for (int i = 0; i < n + 3; i++)
        cout << " ";
    cout << "/|\\" << endl;
    for (int i = 0; i < n + 2; i++)
        cout << " ";
    cout << "/* *\\" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < n + 1 - j - i; k++)
                cout << " ";
            cout << "/";
            for (int k = 0; k < i + j + 2; k++)
                cout << "* ";
            cout << "*\\" << endl;
        }

    }


    for (int i = 0; i < n + 3; i++)
        cout << " ";
    cout << "|||" << endl;
    for (int i = 0; i < n + 3; i++)
        cout << "_";
    cout << "|||";
    for (int i = 0; i < n + 3; i++)
        cout << "_";
    return 0;
}
