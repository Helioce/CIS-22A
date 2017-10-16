//This is a wage calculator
#include <iostream>
using namespace std;

int main ()
{
    const double rate = 16.78;
    const double full = 671.20;
    // Full is the product of the maximum hours worked (40) and the pay rate (16.78).
    const double overtime = 25.17;
    // Overtime rate is one and a half times the pay rate. (16.78 * 1.5 = 25.17).
    double opay;
    // The calculated overtime pay
    double ohours;
    // The calculated overtime hours
    double gross;
    double hours;
    double socialsecurity;
    double federaltax;
    double statetax;
    const double ss = 0.06;
    // The percentage of the wage deducted for Social Security.
    const double ft = 0.14;
    // The percentage of the wage deducted for Federal Income Taxes.
    const double st = 0.05;
    // The percentage of the wage deducted for State Income Taxes.
    double netpay;
    int dependents;

    cout << "How many hours have you worked?";
    cin >> hours;

    cout << "How many dependents do you have?";
    cin >> dependents;

    if ( hours > 40)
        {
        ohours = hours - 40;
        opay = ohours * overtime;
        gross = full + opay;

        cout << "Your gross pay is " << gross << endl << endl;
        cout << "You worked over time for " << ohours << " hours." << endl;
        cout << "You were paid " << opay << " for overtime" << endl;
        }
    else if ( hours <= 40)
       {
           gross = hours * rate;
        cout << "Your gross pays is " << gross << endl << endl;
       }

    socialsecurity = gross * ss;
    federaltax = gross * ft;
    statetax = gross * st;
    cout << "\nDisplayed below are your pay deductions." << endl;
    cout << "Social Security: " << socialsecurity << endl;
    cout << "Federal Income Tax: " << federaltax << endl;
    cout << "State Income Tax: " << statetax << endl << endl;

    if (dependents >= 3)
        {
            netpay = gross - (socialsecurity + federaltax + statetax + 35);
            cout << "Your pay is deducted of another $35 for Health Insurance." << endl;
            cout << "Your net pay is " << netpay << endl;
        }
    else if (dependents < 3)
    {
        netpay = gross - (socialsecurity + federaltax + statetax);
        cout << "Your netpay is "<< netpay << endl;
    }
}
