#include <stdio.h>
#include <string.h>
#include"election.h"
int main()
{
    election e1= {11,"Ariana",1700,45,10,9,2055},e2= {111,"benarous",15,40,{10,9,2555}},e3;
   int x=ajouter("election.txt", e1);
	 x=ajouter("election.txt", e2);
x=ajouter("election.txt", e3);
    if(x==1)
        printf("\najout de point avec succés  ");
    else printf("\nechec ajout");
  
  x=modifier("election.txt",11137279,e2);

    if(x==1)
        printf("\nModification de point avec succés ");
    else printf("\nechec Modification");
    x=supprimer("election.txt",11137278);
    if(x==1)
        printf("\nSuppression de point avec succés ");
    else printf("\nechec Suppression");
    e3=chercher("election.txt",11137279 );
    if(e3.id==-1)
        printf("introuvable");
    return 0;
}

