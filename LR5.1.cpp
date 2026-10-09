#include <iostream> 
#include <cmath> 
using namespace std;
double g(const double a, const double b, const double c);
int main()
{
    double x, y;
    cout << "a = "; cin >> x;
    cout << "b = "; cin >> y;

    double ans = (g(x * y, x * x, y * y) - pow(g(1, x, y), 2)) / (1 + g(abs(x), y * y, 1));

    cout << "Answer = " << ans << endl;

    return 0;
}

double g(const double a, const double b, const double c)
{
    return a*a+b*b-c*c;
}