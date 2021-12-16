#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<string> maliste;   //déclaration une liste
    string n;
    int i;
    cout<<"inserez le nom, le prenom et l'age de chaque personne sous form de nom,prenom,age. inserez arreter quand vous terminez :"<<endl;
    for (i = 0;; i++) 
    {
    cin>>n;
    if(n=="arreter")
    {
        break;   
    }
    maliste.push_back(n); 
    }
    list<string>::iterator it;  
    maliste.sort();     
    it=maliste.begin();
    cout<<"votre liste  est : ";
    for (it;it!=maliste.end();it++)  
    {
            cout<<*it<<"  ";
    }
}
