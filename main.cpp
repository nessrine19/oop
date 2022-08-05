#include <iostream>
#include "DivideByZeroException.h"
#include "OverflowException.h"
#include "RootOfNegativeException.h"

#include <iostream>
#include <cmath>

using namespace std;


int main(int argc, char **argv) {



   try
    {
        //division by 0
        int a, b;
        cin >> a >> b;

        if(b == 0)
        {
            throw DivideByZeroException();
        }

        cout << a/b << endl;

        //overflow
        long long c;
        cin >> c;
        if(c > 5000000)
        {
            throw OverflowException();
        }

       cout << "num: " << c << endl;

        //negative root
        int d;
        cin >> d;

        if(d<0)
        {
            throw RootOfNegativeException();
        }

        cout << sqrt(d) << endl;
    }
    catch(MathException e)
    {
        cout << e.what() << endl;
    }



    return 0;
}
