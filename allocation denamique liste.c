#include<stdio.h>
#include<stdlib.h>
int main()
{
char *p; /* allocation statique d'une var ( p ) de type pointeur */
p = malloc( sizeof(char) ); /* allocation dynamique d'une var de m�me
taille qu'un caract�re : sizeof(type) retourne le
nb d'octets n�cessaire pour repr�senter une var
de ce type */
*p = 'A'; /* utilisation indirecte de la var dynamique */
free(p); /* destruction de la var dynamique */
return 0;
}
