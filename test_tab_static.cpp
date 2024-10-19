#include <iostream>

using namespace std;

void test_tab_static(int tab[], long long taille){
    cout <<"Test avec "<<taille<<" parametres"<< endl;
    for(long long i=0 ; i < taille ; i++){
        tab[i] = i;
        if (i % 100 == 0) {
            cout << "parametre " << i + 1 << " : " << tab[i] << endl;
        } 
    }
}

int main(){
    long long taille;
    
    cout <<"Entrer la taille du tableau : ";
    cin  >>taille;
    cout << "Tentative d'allocation de memoire pour  "<<taille<<" parametres..." << endl;
    int tab[taille];
    test_tab_static(tab,taille);
    
    cout << "--------------Fin de l'affichage pour une taille = "<<taille<<" -------------"<< endl;



    return 0;
}