//
//  weihnachtsbaum
//

#include <iostream>

using namespace std;


//Diese Funktion bildet eine Zeichenfolge mit der Länge a und dem Zeichen/Zeichenabfolge z

string zeichenfolge (int a, string z) {
    int i1 = a; //zähler
    string ausgabe;
    //Zeichen wird solange an ausgabe angefügt bis gewünschte Länge erreicht wurde
    for (i1=a; i1>0; i1--){
        ausgabe = ausgabe + z;
    }

    return ausgabe;
}

int main(int argc, const char * argv[]) {
    //Abfragedialog für den Benutzer
    int hoehe;
    cout << "Wie hoch darf der Baum sein? Ihre Eingabe: ";
    cin >> hoehe;
    
    //Fehlerabfang: Baum darf nicht zu hoch sein und sollte eine positive Länge besitzen
    if (hoehe > 20) {
        cout << "Das ist ein bisschen zu hoch!";
    } else {
        if (hoehe < 1) {
            cout << "Ich bewundere Ihre Vorstellungskraft. Solche Bäume gibt es leider noch nicht!";
        }
    }
    //Hauptschleife: Erzeugt Consolenausgabe bestehend aus Platzhalter und Baumstruktur mit Hilfe der Funkton zeichenfolge
    int i; //Zählervariable
    int durchlaufnr = 0;
    for (i=hoehe; i>0; i--) {

        durchlaufnr = durchlaufnr + 1;
        cout << zeichenfolge(hoehe-durchlaufnr, " ") << zeichenfolge(durchlaufnr*2-1, "*") << endl;
        }
    //Baumstumpf
    cout << zeichenfolge(hoehe-1, " ") << "*" << endl << zeichenfolge(hoehe-1, " ") << "*";
    cout << endl;
    return EXIT_SUCCESS;
}
