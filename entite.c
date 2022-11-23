#include"entite.h"
#include<stdio.h>
#include<string.h>


void TPHF( char * filename, int * f, int * h)
{
User u;
int nbrte=0;
float nbrh=0,nbrf=0;
FILE *file=fopen(filename, "r");
if(file!=NULL)
{
while(fscanf(file," %s %s %s %s %s %d %s %s %s %d %s %s %s",u.identifiant,u.nom,u.prenom,u.date_de_naissance,u.lieu_de_naissance,&u.age,u.genre,u.statut_social,u.addresse,&u.code_postal,u.gouvernorat,u.email,u.role)!= EOF)
{
if(strcmp(u.role,"electeur")==0)
	{
	nbrte+=1;
	if(strcmp(u.genre,"homme")==0) 
		{
			nbrh+=1;
		}
	else
		{
			nbrf+=1;
		}
	}
	
}
fclose(file);
if(nbrte!=0)
	{
	*f=(nbrf/nbrte)*100;
	*h=(nbrh/nbrte)*100;
	}
else
{
*f=0;
*h=0;
}
}
}

float agemoyen(char * fichierusers)
{
User u;
float nbre=0,age_total=0;
FILE *file=fopen(fichierusers, "r");
if(file!=NULL)
{
while(fscanf(file," %s %s %s %s %s %d %s %s %s %d %s %s %s",u.identifiant,u.nom,u.prenom,u.date_de_naissance,u.lieu_de_naissance,&u.age,u.genre,u.statut_social,u.addresse,&u.code_postal,u.gouvernorat,u.email,u.role)!= EOF)
{
	if (strcmp(u.role,"electeur")==0)
		{
		nbre+=1;
		age_total+=u.age;
		}

}
fclose(file);
if(nbre!=0)
	{
	return age_total/nbre;
	}
else
	{
	return 0;
	}
}
}
