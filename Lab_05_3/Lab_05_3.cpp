// Lab_05_3.cpp

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double z(const double x);

int main()
{
    double kp, kk, F;
    int n;

    cout << "kp ="; cin >> kp;
    cout << "kk ="; cin >> kk;
    cout << "n ="; cin >> n;

    double dk = (kk - kp) / n;
    double k = kp;

    cout << fixed;
    cout << "F(k) = z(1-k^2) + z^2(1+z(k))" << endl;

    cout << "-------------------------------" << endl;
    cout << "| " << setw(10) << "k"
        << " | " << setw(14) << "F(k)" << " |" << endl;
    cout << "-------------------------------" << endl;

    while (k <= kk) {
        F = z(1 - k * k) + pow(z(1 + z(k)), 2);

        cout << "| " << setw(10) << setprecision(2) << k
            << " | " << setw(14) << setprecision(5) << F
            << " |" << endl;

        k += dk;
    }
    cout << "-------------------------------" << endl;

    return 0;

}
double z(const double x) {
    if (abs(x) >= 1) {
        return(1 - sin(x)) / (exp(x) + pow(cos(x), 2));
    }
    else {
        int j = 0;
        double a = 1;
        double S = a;
        
        do {
            j++;
            double R = -x / ((2 * j - 1) * (2 * j));
            a *= R;
            S += a;
        } while (j < 7);

        return S / exp(-x);
    }
}


