/**
 * 
 * calcul des n premiers terme d'une suite harmonique
 * une suite harmonique est une suite de 1 + 1/2 + 1/3 + 1/4 ...
 * 
 * pour compiler 
 *  g++ -o harmonique.out harmonique.cpp
 * 
 * */
#include <iostream>

using namespace std;

double sommeHarmonique(int n);

int main()
{
    int n = 0;

    cout << "Quelle indice de la suite voulez-vous ? : ";
    cin >> n;
    cout << " la somme de la suite harmonique pour l'indice " << n << " est " << sommeHarmonique(n) << endl;
}

double sommeHarmonique(int n)
{

    double somme = 0;
    int indice = 1;
    while (indice <= n)
    {
        somme += (double)1 / indice;
        indice++;
    }

    return somme;
}
