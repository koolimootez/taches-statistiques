#include "entite.h"
#include<stdio.h>
int main()
{
int nbrh=0,nbrf=0;
TPHF("users.txt",&nbrf,&nbrh);
printf("le taux de participation des hommes est  %d %% \n",nbrh);
printf("le taux de participation des femmes est %d %% \n",nbrf);

float age_moyen_electeur=agemoyen("users.txt");
printf("age moyen des electeurs est %.2f \n",age_moyen_electeur);

}
