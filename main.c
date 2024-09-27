#include <stdio.h>

void aufgabe1();
void aufgabe2();
void aufgabe3();
void aufgabe4();
void aufgabe5();

int addition(int a, int b);
int multiplikation(int a, int b);

int main(void) {
    int eingabe;
    printf("Bitte waehle eine Zahl von 1 bis 5 fuer die entsprechende Aufgabe\n");
    scanf("%d", &eingabe);
    switch (eingabe) {
        case 1:
            aufgabe1();
            break;
        case 2:
            aufgabe2();
            break;
        case 3:
            aufgabe3();
            break;
        case 4:
            aufgabe4();
            break;
        case 5:
            aufgabe5();
            break;
        default:
            printf("Ungueltige Eingabe!\n");
    }
}


void aufgabe1() {
    int zahl1;
    int zahl2;

    printf("Bitte gib eine Zahl ein: \n");
    scanf("%d", &zahl1);
    printf("Bitte gib eine Zahl ein: \n");
    scanf("%d", &zahl2);

    if (zahl1 > 10) {
        printf("Zahl1 ist kleiner als 10\n");
    }
    if (zahl2 > 10) {
        printf("Zahl2 ist groesser als 10\n");
    }
}

void aufgabe2() {
    int zahl1;
    int zahl2;

    printf("Bitte gib eine Zahl ein: \n");
    scanf("%d", &zahl1);
    printf("Bitte gib eine Zahl ein: \n");
    scanf("%d", &zahl2);

    while(zahl1 < zahl2) {
        printf("In der while-Schleife.\n");
    }
}

void aufgabe3() {
    int zahl1;

    printf("Bitte gib eine Zahl ein: \n");
    scanf("%d", &zahl1);

    for(int i = 0; i < zahl1; i++) {
        printf("Zahlen von 0 bis %d\n", zahl1);
        printf("%d", i);
    }
}
void aufgabe4() {
    int zahl1;
    int zahl2;

    printf("Bitte gib eine Zahl ein: \n");
    scanf("%d", &zahl1);
    printf("Bitte gib eine Zahl ein: \n");
    scanf("%d", &zahl2);

    if (zahl1 > 10) {
        printf("Zahl1 ist kleiner als 10\n");
        if (zahl2 > 10) {
            printf("Zahl2 ist groesser als 10\n");
        }
    }


}

void aufgabe5() {
    int zahl1;
    int zahl2;
    int wahl;
    int resultat = 0;
    int ungueltigeEingabe = 0;

    printf("Bitte gib eine Zahl ein: \n");
    scanf("%d", &zahl1);
    printf("Bitte gib eine Zahl ein: \n");
    scanf("%d", &zahl2);

    while (ungueltigeEingabe == 0) {
        printf("1 fuer addition, 2 fuer multiplikation\n");
        scanf("%d", &wahl);
        if(wahl == 1) {
            ungueltigeEingabe = 1;
            resultat = addition(zahl1, zahl2);
        }else if (wahl == 2) {
            ungueltigeEingabe = 1;
            resultat = multiplikation(zahl1, zahl2);
        }else {
            printf("Ungueltige Eingabe!\n");
        }
    }
    printf("Resultat: %d\n", resultat);
}

int addition(int a, int b) {
    return a + b;
}

int multiplikation(int a, int b) {
    return a * b;
}


