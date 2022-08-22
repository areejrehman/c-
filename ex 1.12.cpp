#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    for (int number = -100; number <= 100; ++number)
    {
        sum += number; // sum as sum = number
    }
    cout << sum << endl;
    return 0;
}