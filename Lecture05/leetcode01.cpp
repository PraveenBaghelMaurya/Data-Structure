#include <iostream>
using namespace std;
int main()
{
    int userInput, prod = 1, sum = 0;
    cout << "Enter a number : ";
    cin >> userInput;
    while (userInput != 0)
    {
        int digit = userInput % 10;
        prod = prod * digit;
        sum = sum + digit;
        userInput /= 10;

        cout << "digit :\t" << digit << endl;
        cout << "prod :\t" << prod << endl;
        cout << "sum :\t" << sum << endl;
        cout << "userInput :\t" << userInput << endl;
        cout << "--------------end--------------" << endl;
    }
    int answer = prod - sum;
    cout << "\nAnswer is :" << answer;
}