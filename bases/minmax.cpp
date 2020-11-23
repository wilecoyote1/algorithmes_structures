#include <iostream>

using namespace std;

/**
 * 
 * Écrire, de deux façons différentes, un programme qui lit 10 nombres entiers dans un tableau avant d’en rechercher le plus grand et le plus petit :
 *  a.en utilisant uniquement le « formalisme tableau » ;
 *  b.en utilisant le « formalisme pointeur », à chaque fois que cela est possible.
 * 
 * pour compiler 
 * g++ -o minmax.out max.cpp
 * 
 * */

void minmax1();
void minmax2();

int main()
{
    // minmax1();
    minmax2();
    return 0;
}

void minmax1()
{
    int tableau[10];
    for (int i = 0; i < 10; i++)
    {
        cout << " valeur " << i << endl;
        cin >> tableau[i];
    }

    int min = tableau[0];
    int max = tableau[0];
    for (int i = 1; i < 10; i++)
    {
        if (tableau[i] > max)
        {
            max = tableau[i];
        }
        if (tableau[i] < min)
        {
            min = tableau[i];
        }
    }
    cout << "le min est " << min << " et le max est " << max << endl;
}

void minmax2()
{
    int tableau[10];

    int *pointer = &tableau[0];

    for (int i = 0; i < 10; i++)
    {
        cout << " valeur " << i << endl;
        cin >> *pointer++;
    }

    int *pointer2 = &tableau[0];

    int min = *pointer2;
    int max = *pointer2;
    for (int i = 1; i < 10; i++)
    {
        if (*pointer2 > max)
        {
            max = *pointer2;
        }
        if (*pointer2 < min)
        {
            min = *pointer2;
        }
        *pointer2++;
    }
    cout << "le min est " << min << " et le max est " << max << endl;
}