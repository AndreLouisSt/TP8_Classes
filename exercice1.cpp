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
/// @brief fonction main, pour tester les fonctions de l'exercice 1
/// @details On utilise ici l'ensemble des fonctions utilisées dans l'exercice. 
/// Ici, il n'y a pas de fonction à proprement parler. Mais on crée un vecteur de données, et on lui affecte des valeurs.
/// On crée ensuite une copie de vecteur et on l'affiche sur la console. 
/// Enfin, on crée un itérateur et on cherche à afficher à nouveau le vecteur à l'aide de ce principe. 
///
int main() {

    // Création de vecteur 3 éléments + assignation
    vector<int> vecteurE (3);
    vector<int> vecteurCopy(vecteurE.size());
    vecteurE[0] = 1;
    vecteurE[1] = 2;
    vecteurE[2] = 3;
    vecteurE.push_back(25); // Ajout élément

    // Copie de vecteur -> Assignation
    vecteurCopy.assign(vecteurE.begin(), vecteurE.end());

    // Boucle sur une plage de nombres
    for (int i: vecteurCopy) 
        cout << i << endl;

    // Itérateur
    for (vector<int>::iterator it = vecteurE.begin(); it != vecteurE.end(); it++) {
        cout << *it << endl;
    }
    return 0;
}