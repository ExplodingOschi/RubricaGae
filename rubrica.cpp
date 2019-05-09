#include <iostream>
#include <fstream>
#define MAX 100
using namespace std;

void fill (ifstream &f, string name[], string phone[], int &l){

    f.open("contacts.txt");

    f>>l;

    for(int i = 0; i < l; i++) {

        f>>name[i];
        f>>phone[i];

    }

    f.close();

}

void print (string name[], string phone[], int l){

    for (int i = 0; i < l; i++) {

        cout << name[i] << ": " << phone[i] << endl;

    }

}

int count (ifstream &f){

    f.open("contacts.txt");

    int i;

    f>>i;

    f.close();

    return i;

}

int main() {

    ifstream f;
    string name[MAX], phone[MAX];
    int l;

    fill(f, name, phone, l);


    print(name, phone, l);
    cout << "il numero di contatti in rubrica e' "<< count(f) << endl;


  return 0;
}
