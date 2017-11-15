#include <iostream>
using namespace std;

struct point {
    double x;
    double y;
    };
point foo (point p1, point p2)
{
    point result;

    result.x = p1.x + p2.x;
    result.x /= 2;
    result.y = p1.y + p2.y;
    result.y /= 2;

    return result;
    }

    int printPoint (int index, point p)
{
        cout <<index <<"->" <<"X =" <<p.x <<""<<"Y = "<<p.y<< endl;

        return -1;
        }

    int main ()
{       point p1 = {2,4};
        point p2 = {5,8};
        point p3 = {8,12};

        printPoint(1,p1);
        printPoint(2, p2);

        cout << (printPoint (  3, foo (p1,p2))?"Printing OK! ": "Printing Failed! ") <<endl;
        return 0;
    }

