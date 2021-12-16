#include<iostream>
using namespace std;
int main(){
char chaine[13]="021020001258";
int i;
cout<<"la date est : le jour ";
for( i = 0; i < 2; i++)
{
    cout<<chaine[i];
};
cout<<" du mois ";
for( i = 2; i < 4; i++)
{
    cout<<chaine[i];
};
cout<<" de l'annee ";
for( i = 4; i < 8; i++)
{
    cout<<chaine[i];
};
cout<<" a l'heure ";
for( i = 8; i < 10; i++)
{
    cout<<chaine[i];
};
cout<<" : ";
for( i = 10; i < 12; i++)
{
    cout<<chaine[i];
}; 
}

