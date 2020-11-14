/**
 * 
 * écrire un programme qui trouve la Niéme valeur de la suite de Fibonacci, n est fourni en paramétre
 * 
 * pour compiler g++ -o test fibonacci.cpp
 * 
 * */
#include <iostream>

using namespace std;

int trouveFibonacci(int n){

    int i1 = 1;
    int i0 = 0;
    int indice = 2;
    while (indice <=n){
        int tmp = i1;
        i1 += i0;
        i0 = tmp;
        indice++;
    }

    return i1;
}

int main(){
    int n = 0;

    cout << "Quelle valeur de la suite voulez-vous ? :";
    cin >> n;
    cout << " la valeur est " << trouveFibonacci(n) << endl;
}