//Ejercicio 2
#include <iostream>
#include <string>

using namespace std;

int potencia(int x, int n){
     if(n==0){
         return 1;
     }
     else 
          return x* potencia(x, n-1);
}


int main()
{
 cout<<potencia(2,5);
}
