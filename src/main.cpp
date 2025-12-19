#include <iostream> 
using namespace std;
int main() {
  int nbrePlaces = 10;
  int choix; 
  do {
  cout << "************ Evaluation 2 ************" << endl << endl; 
  cout << "1 - Entrée dans le parking\n"; 
  cout << "2 - Nombre de places disponibles\n"; 
  cout << "3 - Sortie du parking\n"; 
  cout << "4 - Quitter\n"; 
  cin >> choix;
  switch (choix) {
    case 1:
      cout << "Vous choisissez l'entrée dans la parking" << endl;  
      break;
    case 2:
      cout << "Vous souhaitez connaitre le nombre de places disponibles" << endl;
      break;
    case 3:
      cout << "Vous sortez du parking" << endl;
      break;
    case 4:
      cout << "Vous quittez le menu" << endl;
  return 0;
  } 
  } while (choix!=4);
}