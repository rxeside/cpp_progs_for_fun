#include <iostream>
#include <vector>

using namespace std;

int main() {
  pair<string, int> shluha = {"nastya", 9000};
  pair<string, int> terpila = {"odin", 14000};
  pair<string, int> babushka = {"anya", 63};

  string pol_actes = "сколько раз: ";
  string terpel = "сколько раз терпел: ";
  string age = "возраст: ";
  
  vector<string> description = {pol_actes, terpel, age};
 
  vector<pair<string, int> > rebyata = {shluha, terpila, babushka}; 
  for(int i = 0; i < rebyata.size(); i++){
    cout << rebyata[i].first << ' ' << description[i] << rebyata[i].second << endl;
  }
  return 0;
}