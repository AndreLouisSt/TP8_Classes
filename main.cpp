#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>

using namespace std;

int main() {
    vector<int> vecteurE (3);
    vecteurE.push_back(1);
    vecteurE.push_back(2);
    vecteurE.push_back(3);
    for(int i: vecteurE) 
        cout << i << endl;
}