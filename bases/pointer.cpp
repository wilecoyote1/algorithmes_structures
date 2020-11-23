/**
 * 
 * exemples divers sur les pointer
 * 
 * pour compiler 
 * g++ -o pointer.out pointer.cpp
 * 
 * */
#include <iostream>

using namespace std;

/*
sur une variable, comme la variableage:

agesignifie : « Je veux la valeur de la variableage»,

&agesignifie : « Je veux l'adresse à laquelle se trouve la variableage» ;

sur un pointeur, commepointeurSurAge:

pointeurSurAgesignifie : « Je veux la valeur depointeurSurAge» (cette valeur étant une adresse),

*pointeurSurAgesignifie : « Je veux la valeur de la variable qui se trouve à l'adresse contenue danspointeurSurAge».
*/

int main()
{
    int *adresseden;    //création d'un emplacement en mémoire pour contenir une adresse d'un int

    int n = 10;
    int &a = n;         //
    adresseden = &n;    // je stocke dans le pointeur l'adresse de la variable n

    cout << " la valeur de n est : " << n << endl;
    cout << " la valeur de &a est : " << a << endl;
    cout << " la valeur de adresseden est : " << adresseden << endl;
    cout << " la valeur sur quoi pointe *adresseden est : " << *adresseden << endl;
}