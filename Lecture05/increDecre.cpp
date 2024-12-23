#include <iostream>
using namespace std;
int main()
{
    int i = 4, k = i++;
    cout << i << "\t";
    cout << ++i << "\n\n";

    int a = 5;
    int b = a++ + ++a + a++;
    cout << "a: " << a << ", b: " << b << endl;
}
