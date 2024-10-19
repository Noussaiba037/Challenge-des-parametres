#include <iostream>
using namespace std;

void test_tab_dynamique(int tab[], long long taille) {
    cout << "Test reussi avec " << taille << " parametres." << endl;
}
int main() {
    long long taille = 100;  
    cout <<"Le test commence: "<<endl;

    try {
        while (true) {
            // Allocation dynamique du tableau
            int *tab = new int[taille];  
            
            for (long long i = 0; i < taille; i++) {
                tab[i] = i + 1;
            }

            test_tab_dynamique(tab, taille);

            // Liberer la mémoire
            delete[] tab;

            // Augmenter la taille pour le prochain test
            taille *= 2;  
        }
    }catch (const bad_alloc& e) {
        cerr << "Erreur d'allocation memoire apres avoir essaye avec " << taille << " parametres." << endl;
    }

    return 0;
}
