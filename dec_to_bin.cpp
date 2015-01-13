#include <iostream>
#include <string>
#include <bitset>

using namespace std;

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

    convertedNumber = std::bitset<16>(originalNumber).to_string(); //Conversion

    cout << convertedNumber << endl; //Affichage du résultat

    cin.ignore();

    return 0;
}

