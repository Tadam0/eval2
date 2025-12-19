#include <iostream>
using namespace std;
int main() {
  int nbrePlaces = 10;
  int choix;
  do {
    cout << "\n";
    cout << "************ Evaluation 2 ************" << endl << endl;
    cout << "1 - Entrée dans le parking\n";
    cout << "2 - Nombre de places disponibles\n";
    cout << "3 - Sortie du parking\n";
    cout << "4 - Quitter\n";
    cin >> choix;
    switch (choix) {
    case 1:
      if (nbrePlaces > 0) {
        nbrePlaces = nbrePlaces - 1;
        cout << "\n";
        cout << "Vous entrez dans le parking\n";
      }
      if (nbrePlaces <= 0) {
        cout << "Il n'y a plus de places \n";
      }
      break;
    case 2:
      cout << "\n";
      cout << "Il reste " << nbrePlaces << " places\n";
      break;
    case 3:
      if (nbrePlaces < 10) {
        nbrePlaces = nbrePlaces + 1;
        cout << "\n";
        cout << "Vous sortez du parking.\n";
      }
      if (nbrePlaces >= 10) {
        cout << "\n";
        cout << "Il n'est plus possible de sortir du parking (parking vide).\n";
      }
      break;
    case 4:
      cout << "Au revoir !" << endl;
      return 0;
    }
  } while (choix != 4);
}