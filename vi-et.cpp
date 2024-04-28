#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    double S, P, x1, x2;
    cout << "The equation: ax^2 + bx + c = 0 has 2 roots x1 and x2\n";
    cout << "Enter the coefficients \n";
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    // Check if the equation has 2 roots
    double delta;
    if (a == 0)
        cout << "Error \n";
    else
    {
        delta = pow(b, 2) - 4 * a * c;
        if (delta < 0)
        {
            cout << "The equation has no roots \n";
        }
        else if (delta == 0)
        {
            cout << "The equation has a double root \n";
        }
        else
        {
            cout << "The sum of the two roots: S= ";
            S = (-b) / a;
            cout << S << endl;
            cout << "The product of the two roots: P= ";
            P = c / a;
            cout << P << endl;

            // The consequence
            int sum;
            sum = a + b + c;
            if (sum == 0)
            {
                cout << "There is one root x1 = 1 and x2 = ";
                x2 = c / a;
                cout << x2;
            }
            else
            {
                int total;
                total = a - b + c;
                if (total == 0)
                {
                    cout << "There is one root x1 = -1 and x2 = ";
                    x2 = (-c) / a;
                    cout << x2;
                }
            }
        }
    }
}
