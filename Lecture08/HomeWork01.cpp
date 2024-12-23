#include <iostream>
using namespace std;
int arithmaticProgression(int num)
{
    int answer = (3 * num) + 7;
    return answer;
}
int main()
{
    int value;
    cout << "Enter a number: \t";
    cin >> value;
    cout << "The AP of Number is : " << arithmaticProgression(value) << endl;
}