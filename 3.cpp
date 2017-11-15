#include <iostream>
using namespace std;

void yuksekSesle (int a)
{
    switch (a/2) {

    case 2:
        cout << endl <<"Canim" ;
    case 3:
        cout << endl <<"Feda" ;
          break;
    case 0:
        cout <<"Vatan" ;
          break;
    case 1:
        cout <<"Sana" ;
          break;
    case 4:
        cout <<"Bu" ;
    case 5:
        cout <<"Vatana" ;

   default:

        cout << "Olsun" ;
        break;
    }
}
 int main ()
 {
     int i=0;
     do{
         yuksekSesle(i++);
    } while (i<6);

     return 0;
 }
