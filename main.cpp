///
/// @brief Bibliothèques
/// @details Nécéssaires pour le bon focntionnement u projet.
///
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>

using namespace std;

///
/// @brief Virgule
/// @details Ajout d'une virgule entre chaque éléments du vecteur
///
void virgule(string i) {
    cout << i << ',';
}

// Fonction d'affichage vecteur constant
void affiche(vector<string> const &V1)
{
    for (vector<string>::const_iterator it = V1.begin(); it != V1.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
}

// Concaténation du vecteur et stockage du résultat dans une variable string unique
void concatene(vector<string> const &V2)
{
    string var;
    for (string i : V2)
    {
        var += i;
    }
    cout << var << endl;
}

// Ajout d'une virgule après chaque éléments du vecteur 
void ajout_virgule(vector<string> V3) {
    for_each(V3.begin(), V3.end(), virgule);
    cout << endl;
}

// main
int main()
{
    // Création de vecteur 3 éléments + assignation
    vector<string> vecteurE;
    vector<string>::iterator it;
    vecteurE.push_back("Something");
    vecteurE.push_back("wicked");
    vecteurE.push_back("this");
    vecteurE.push_back("way");
    vecteurE.push_back("comes.");
    // vecteurE.push_back("???");
    // vecteurE.push_back(".");

    // cout << vecteurE.size() << endl;               // Taille vecteur
    // vecteurE.insert(vecteurE.begin() + 1, "very"); // Ajout élément sur la case [1]
    // Retourne la capacité max.du vecteur avant d'allouer plus de mémoire
    // cout << vecteurE.capacity() << endl;           // Capacité
    // sort(vecteurE.begin(), vecteurE.end());        // tri des éléments du vecteur
    // swap(vecteurE[0], vecteurE[2]);                // Echange case indice 1 et 3
    /*
        // Boucle sur une plage de nombres
        for (string i : vecteurE)
            cout << i << ' ';
        cout << endl;

        // Itérateur
        for (vector<string>::iterator it = vecteurE.begin(); it != vecteurE.end(); it++)
        {
            cout << *it << ' ';
        }
        cout << endl;
    */

    //affiche(vecteurE);
    //concatene(vecteurE);
    ajout_virgule(vecteurE);
    return 0;
}