//
//  modul_wejscia_wyjscia.c
//  lab4_zad10
//
//  Created by Kasia on 17/12/2020.
//
#include <stdio.h>
#include <string.h>
#include "modul_wejscia_wyjscia.h"
void wprowadz_dane(float *x,char *z,float *y)
{
    scanf("%f %c %f",x,z,y);
}
void wypisz(float x ,char z,float y,float s)
{
    printf("%.2f %c %.2f = %.2f\n",x,z,y,s);
}
int blad()
{
    printf("BLAD tak nie mozna!!! ");
    return 0;
}
