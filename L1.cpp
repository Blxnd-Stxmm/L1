#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>

using namespace std;

class Triad
{
protected:
    int a, b, c;

public:
    void enter()
    {

        cin >> a >> b >> c;
    }

    int summa()
    {
        int s = a + b + c;
        return s;
    }

    void display_numbers()
    {
        cout << a << " " << b << " " << c << " ";
    }

    void display_summa()
    {
        int s = summa();
        cout << s << endl;
    }

    void izm1()
    {
        int g = 1;

        if (g == 1)
        {
            int j;

            cin >> j;
            a = j;
        }

    }

    void izm2()
    {
        int g = 2;

        if (g == 2)
        {
            int j;

            cin >> j;
            b = j;
        }

    }

    void izm3()
    {
        int g = 3;

        if (g == 3)
        {
            int j;

            cin >> j;
            c = j;
        }
    }

};

class Triangle : public Triad
{

protected:

    int p1, p2, p3;

public:
    
    void enter()
    {

        cin >> p1 >> p2 >> p3;
    }

    void izm4()
    {
        int g = 4;

        if (g == 4)
        {
            int j;

            cin >> j;
            p1 = j;
        }

    }

    void izm5()
    {
        int g = 5;

        if (g == 5)
        {
            int j;

            cin >> j;
            p2 = j;
        }

    }

    void izm6()
    {
        int g = 6;

        if (g == 6)
        {
            int j;

            cin >> j;
            p3 = j;
        }
    }

    bool proverka()
    {
        bool f;
        
        f = true;

        if ((p1 + p2) <= p3 || (p3 + p2) <= p1 || (p1 + p3) <= p2)
        {
            f = false;
        }

        if (f == false)
        {
            cout << p1 << " " << p2 << " " << p3 << " " << "triangle not exist" << endl;
        }

        return f;
    }

    double angleal()
    {
        double x = acos((p3 * p3 + p1 * p1 - p2 * p2) / (2.0 * p3 * p1));
        return x * 180.0 / M_PI;
    }

    double anglebe()
    {
        double y = acos((p1 * p1 + p2 * p2 - p3 * p3) / (2.0 * p1 * p2));
        return y * 180.0 / M_PI;
    }

    double anglega()
    {
        double z = acos((p2 * p2 + p3 * p3 - p1 * p1) / (2.0 * p2 * p3));
        return z * 180.0 / M_PI;
    }

    void display_angles()
    {
        double x = angleal();
        double y = anglebe();
        double z = anglega();

        cout << fixed << setprecision(4) << z << " " << x << " " << y << " ";
    }

    double perimeter()
    {
        double perimeter;

        perimeter = p1 + p2 + p3;

        return perimeter;
    }

    double square()
    {

        double p = perimeter() / 2;
        double square = sqrt(p * (p - p1) * (p - p2) * (p - p3));
        return square;
    }

    void display_square()
    {
        double sqr = square();
        cout << fixed << setprecision(5) << sqr << endl;
    }

    void display_numbers()
    {
        cout << p1 << " " << p2 << " " << p3 << " ";
    }

};

int main()
{

    Triad ex;
    Triangle ez;

    ex.enter();
    ex.summa();
    ex.display_numbers();
    ex.display_summa();

    ez.enter();

    bool f = ez.proverka();
    
    if (f == true)
    {
        ez.display_numbers();
        ez.display_angles();
        ez.square();
        ez.display_square();
    }

    int choice;

    bool q = false;
    bool w = false;
    bool e = false;

    while (true)
    {
        cin >> choice;

        switch (choice)
        {
        case 1:
            ex.izm1();
            ex.summa();
            ex.display_numbers();
            ex.display_summa();
            break;
        case 2:
            ex.izm2();
            ex.summa();
            ex.display_numbers();
            ex.display_summa();
            break;
        case 3:
            ex.izm3();
            ex.summa();
            ex.display_numbers();
            ex.display_summa();
            break;
        case 4:
            ez.izm4();

            q = ez.proverka();

            if (q == true)
            {
                ez.display_numbers();
                ez.display_angles();
                ez.square();
                ez.display_square();
            }
            break;
        case 5:
            ez.izm5();

            w = ez.proverka();

            if (w == true)
            {
                ez.display_numbers();
                ez.display_angles();
                ez.square();
                ez.display_square();
            }
            break;
        case 6:
            ez.izm6();

            e = ez.proverka();

            if (e == true)
            {
                ez.display_numbers();
                ez.display_angles();
                ez.square();
                ez.display_square();
            }
            break;
        case 0:
            return 0;
        default:
            cout << "Invalid choice. Try again." << endl;
        }


    }

    return 0;
}
