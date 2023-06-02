#include <iostream>
#include "numericalMethod.h"

using namespace std;
int main()
{
    float lower_limit, upper_limit, error, result;

    cout << "Input lower limit, upper limit, and error: " << endl;
    cin >> lower_limit >> upper_limit >> error;

    result = secantMethod(lower_limit, upper_limit, error);

    cout << "Estimated root: " << result << endl;
    cout << "Functional value at root: " << func(result) << endl;

    return 0;
}