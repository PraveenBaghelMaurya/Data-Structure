#include <iostream>
using namespace std;
int main()
{
    int money, Ruppee100, Ruppee50, Ruppee20, Ruppee10, Ruppee5, Ruppee2, Ruppee1;
    cout << "Enter the amount of money you wan to have: ";
    cin >> money;

    switch (money)
    {
    default:
        cout << "You need" << endl;

        Ruppee100 = money / 100;
        cout << Ruppee100 << "* 100 Notes" << endl;
        money = money % 100;

        Ruppee50 = money / 50;
        cout << Ruppee50 << "* 50 Notes" << endl;
        money = money % 50;

        Ruppee20 = money / 20;
        cout << Ruppee20 << "* 20 Notes" << endl;
        money = money % 20;

        Ruppee10 = money / 10;
        cout << Ruppee10 << "* 10 Notes" << endl;
        money = money % 10;

        Ruppee5 = money / 5;
        cout << Ruppee5 << "* 5 Coines" << endl;
        money = money % 5;

        Ruppee2 = money / 2;
        cout << Ruppee2 << "* 2 Coines" << endl;
        money = money % 2;

        Ruppee1 = money / 1;
        cout << Ruppee1 << "* 1 Coines" << endl;
        money = money % 1;

        cout << "rupees only";
    }
}