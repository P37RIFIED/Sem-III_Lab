#include <iostream>
#include <cmath>
using namespace std;

float func(float x)
{
    return cos(x) + 5 * x - 6;
}

float derivfunc(float x)
{
    return -sin(x) + 5;
}

float newton_raphson(float x, float error)
{
    float x_old = x;
    float x_new;
    float new_error = 1;
    while (new_error > error);
    {
    x_new = x_old - (func(x_old)/derivfunc(x_old));
    new_error = abs((x_new - x_old)/x_new); 
    x_old = x_new;
    }
    return x_new;
}

int main()
{
    float x, error,root;
    cout<<"Enter a number and expected error:"<<endl;
    cin>>x>>error;
    root = newton_raphson(x,error);
    cout<<"The root is: "<<root;
    return 0;
}