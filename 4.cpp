#include <iostream>
using namespace std;

double foo (int *a,  int size)
{

    int i=0;
    int b=0;
    while (i<size)
    {
        b += a[i++];
        cout << "b = " << b << endl;
    }

    return 1.0 * b / size;
}

int main ()

{
    int a [6] = {1,1,1};
    cout <<"foo =" << foo(a,6) << endl;

    return 0;

}
