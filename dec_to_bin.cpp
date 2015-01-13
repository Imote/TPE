#include <iostream> //Inclut les fonctionnalités de la console

using namespace std; //Permet d'inclure toutes les fonctionnalités inclus dans le paquet standard (std) du C++

void decimalToBinary(int n) //Petit algorithme pour convertir un nombre décimal en binaire
{
    if (n / 2 != 0)
        decimalToBinary(n / 2);

    cout << n % 2; //L'opérateur % est le modulo. Autrement dit, c'est le reste de la division.
}

int main()
{
    int originalNumber; //Création d'une variable pour contenir le nombre décimal
    
    /* cout permet d'afficher du texte selon la syntaxe suivante */
    /* endl permet de revenir à la ligne */
    cout << "Bienvenue dans ce logiciel de conversion." << endl
         << "Nous allons vous demander d'entrer un nombre (entier) puis nous le convertirons "
         << "en binaire pour ensuite vous l'afficher." << endl
         << "Votre nombre : ";

    cin >> originalNumber; //Récupération du nombre à convertir dans 
    cin.ignore(); //Permet d'indiquer la fin de la saisie une fois la touche entrée pressé

    /* Conversion */
    decimalToBinary(originalNumber); //Appel de l'algorithme d'affichage

    cin.ignore(); //Permet dans le contexte actuel d'attendre la pression de la touche entrée pour fermer le programme
    //Sinon le programme se ferme directement après l'affichage du résultat
    
    return 0;
}

