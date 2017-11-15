#include <iostream>

using namespace std;

void foo (int &i) {i--;}

int main () {
int b;

for (int i=0, b=5; (i<10 && b>2); i++)
{
   cout <<"result = "<< i*i <<endl;
   foo(b);
}

   return 0;
}
