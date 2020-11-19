/**
 * 
 * Afficher un triangle isocèle formé d’étoiles. La hauteur du triangle (c’est-à-dire le nombre de lignes) sera fourni en donnée. 
 * On s’arrangera pour que la dernière ligne du triangle s’affiche sur le bord gauche de l’écran.
 * 
 * pour compiler 
 * g++ -o triangleisocele.out triangleisocele.cpp
 * 
 * */
#include <iostream>
#include <string>

using namespace std;

string triangleisocele(int n);

int main()
{
    int n = 0;

    cout << "Quelle hauteur du triangle voulez-vous ? : ";
    cin >> n;
    cout << triangleisocele(n) << endl;
}

string triangleisocele(int n)
{
    int etoile = 1;
    int espace = n-1;
    string triangle = "";

    // si la hauteur est de 10, alors la base du rectangle sera de 19
    // on remplit le rectangle par sa base
    for (int i = 0; i < n; i++)
    {
        for (int j=0;j<espace;j++){
            triangle += " ";
        }
        for (int j=0;j<etoile;j++){
            triangle += "*";
        }
        for (int j=0;j<espace;j++){
            triangle += " ";
        }
        triangle += "\n";
        espace--;
        etoile+=2;

    }
    return triangle;
}
