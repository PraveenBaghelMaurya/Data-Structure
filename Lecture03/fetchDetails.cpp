// a->z    =   Lower Alphabeta
// A->Z    =   Capital Alphabeta
// 0->9    =   Number

#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a value : ";
    cin >> ch;

    // if (ch >= 'a' && ch <= 'z')
    // {
    //     cout << ch << " is smaller alphabets";
    // }
    // else if (ch >= 'A' && ch <= 'Z')
    // {
    //     cout << ch << " is capital alphabets";
    // }
    // else if (ch <= 9 && ch >= 0)
    // {
    //     cout << ch << " is number";
    // }

    if (islower(ch))
    {
        cout << "lower alphabets";
    }
    else if (isupper(ch))
    {
        cout << "capital alphabets";
    }
    else if (isdigit(ch))
    {
        cout << "Numberic";
    }
}