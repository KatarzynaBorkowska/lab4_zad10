//zad 10
#include <stdio.h>
#include "modul_wejscia_wyjscia.h"
#include "modul_dzialania.h"

int main(){
    float x, y;
    char z;
    wprowadz_dane(&x,&z,&y);
    switch (z) {
        case '+':
            wypisz(x, z, y, dodaj(x, y));
            break;
        case '-':
            wypisz(x, z, y, odejmnij(x, y));
            break;
        case '*':
            wypisz(x, z, y, pomnoz(x, y));
            break;
        case '/':
            wypisz(x, z, y,y!=0? podziel(x, y) : blad());
            break;
            
        default:
            printf("Nie ma takiego znaku.\n");
            break;
    }
    return 0;
}
