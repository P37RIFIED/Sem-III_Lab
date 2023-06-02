#include <iostream>
#include <cmath>
#include <functional>

using namespace std;

double evaluateEquation(const string &equation, double x)
{
    string modifiedEquation = equation;
    int pos = static_cast<int>(modifiedEquation.find('x'));

    // Replace 'x' with the actual value
    while (pos != -1)
    {
        modifiedEquation.replace(pos, 1, to_string(x));
        pos = static_cast<int>(modifiedEquation.find('x', pos + 1));
    }

    cout<<modifiedEquation;

    return 0;
    //return stod(modifiedEquation);
    
}

int main()
{
    string equationStr = "cos(x) + 5 * x - 6";
    double x = 2.0;

    double result = evaluateEquation(equationStr, x);
    cout << "Result: " << result << endl;

    return 0;
}
