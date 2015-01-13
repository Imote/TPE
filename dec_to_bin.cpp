#include <iostream>

using namespace std;

void decimalToBinary(int n) //Petit algorithme pour convertir un nombre décimal en binaire
{
    if (n / 2 != 0)
        decimalToBinary(n / 2);

    cout << n % 2; //L'opérateur % est le modulo. Autrement dit, c'est le reste de la division.
}

int main()
{
    int originalNumber; //Création d'une variable pour contenir le nombre décimal
    std::string convertedNumber; //Création d'une variable pour contenir le nombre binaire

    cout << "Bienvenue dans ce logiciel de conversion." << endl
         << "Nous allons vous demander d'entrer un nombre (entier) puis nous le convertirons "
         << "en binaire pour ensuite vous l'afficher." << endl
         << "Votre nombre : ";

    cin >> originalNumber; //Récupération du nombre à convertir
    cin.ignore();

    /* Conversion */
    decimalToBinary(originalNumber);

    cout << convertedNumber << endl; //Affichage du résultat

    cin.ignore();

    return 0;
}

