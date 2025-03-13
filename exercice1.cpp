#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>

using namespace std;

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