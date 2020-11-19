/**
 * 
 * Afficher toutes les manières possibles d’obtenir un euro avec des pièces de 2 cents, 5 cents et 10 cents. 
 * Dire combien de possibilités ont été ainsi trouvées. Les résultats seront affichés comme suit :
 * 1 euro = 50 X 2c
 * 1 euro = 45 X 2c   2 X 5c
 * 1 euro = 40 X 2c   4 X 5c
 * 1 euro = 35 X 2c   6 X 5c
 * 1 euro = 30 X 2c   8 X 5c
 * 1 euro = 25 X 2c  10 X 5c
 * 1 euro = 20 X 2c  12 X 5c
 * 1 euro = 15 X 2c  14 X 5c
 * 1 euro = 10 X 2c  16 X 5c
 * 1 euro =  5 X 2c  18 X 5c
 * 1 euro = 20 X 5c
 * 1 euro = 45 X 2c   1 X 10c
 * 1 euro = 40 X 2c   2 X 5c   1 X 10c
 * 1 euro = 35 X 2c   4 X 5c   1 X 10c
 * 1 euro = 10 X 2c   2 X 5c   7 X 10c
 * 1 euro =  5 X 2c   4 X 5c   7 X 10c
 * 1 euro =  6 X 5c   7 X 10c
 * 1 euro = 10 X 2c   8 X 10c
 * 1 euro =  5 X 2c   2 X 5c   8 X 10c
 * 1 euro =  4 X 5c   8 X 10c
 * 1 euro =  5 X 2c   9 X 10c
 * 1 euro =  2 X 5c   9 X 10c
 * 1 euro = 10 X 10c
 * En tout, il y a 66 façons de faire 1 euro.
 * 
 * pour compiler 
 * g++ -o combinaison.out combinaison.cpp
 * 
 * */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int total = 100; 
    const int c2 = 2;
    const int c5 = 5;
    const int c10 = 10;
    int nombreSolution = 0;

    for (int i = 0; i <= total / c2; i++)
    {
        for (int j = 0; j <= total / c5; j++)
        {
            for (int k = 0; k <= total / c10; k++)
            {
                if ((i * c2 + j * c5 + k * c10) == total)
                {
                    string s = "";
                    if (i > 0)
                    {
                        s += to_string(i) + " X 2c ";
                    }
                    if (j > 0)
                    {
                        s += to_string(j) + " X 5c ";
                    }
                    if (k > 0)
                    {
                        s = s + to_string(k) + " X 10c ";
                    }

                    cout << "1 euro = " << s << endl;
                    nombreSolution++;
                }
            }
        }
    }
    cout << "en tout, il y a " << nombreSolution << " façons de faire " << 100 / 100 << " euros";
}