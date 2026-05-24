#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    int min_val = min({10, 20, 30, 5, 15});
    int max_val = max({10, 20, 30, 5, 15});

    cout << "Minimum: " << min_val << endl;
    cout << "Maximum: " << max_val << endl;

    swap(a, b);

    cout << "After swap: a = " << a << ", b = " << b << endl;
}