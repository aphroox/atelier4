#include <iostream>
#include <cmath>

using namespace std;

class complexe { //cr"atio de la classe complexe
    double Re;
    double Img;

public:
    complexe(double a = 0, double b = 0) //déclaration des variables par defaut
    {
        Re = a;
        Img = b;
    }
    void afficher()
    {
    	cout << Re;
    	
    	//Pour ne pas afficher 4 + -6i (si Img est negatif)
        if (Img >= 0)
            cout << " + ";
            
        cout << Img << "i" << endl;
    }
    double module()
    {
        return sqrt(Re * Re + Img + Img);
    }
    complexe conjugue()
    {
        complexe c;
        c.Re = Re;
        c.Img = -Img;
        return c;
    }
    
    //Opérateur : complexe + complexe
    complexe operator+(complexe a)
    {
        complexe s;
        s.Re = Re + a.Re;
        s.Img = Img + a.Img;
        return s;
    }
    
    //Opérateur : complexe + double
    complexe operator+(double x)
    {
        complexe s;
        s.Re = Re + x;
        s.Img = Img;
        return s;
    }
    
    //Opérateur : complexe - complexe
    complexe operator-(complexe a)
    {
        complexe s;
        s.Re = Re - a.Re;
        s.Img = Img - a.Img;
        return s;
    }
    
    //Opérateur : complexe * complexe
    complexe operator*(complexe a)
    {
        complexe p;
        p.Re = Re * a.Re - Img * a.Img;
        p.Img = Re * a.Img + Img * a.Re;
        return p;
    }
    //Même principe pour la division (utiliser le conjugé)
    
    //Opérateur : double + complexe
    friend complexe operator+(double, complexe);

};
complexe operator+(double x, complexe a)
{
    complexe s;
    s.Re = a.Re + x;
    s.Img = a.Img;
    return s;
    
    /*
    2ème Méthode
    On peut utiliser l'operateur complexe + double
    return a + x;
    */
}
int main()
{
    complexe a(1, 3), b(2, 7), c;
    cout << "Complexe A = ";
    a.afficher();
    cout << "Le module de A est : " << a.module() << endl;
    cout << "Le conjugue de A est : ";
    a.conjugue().afficher();
    
    cout << "A = ";
    a.afficher();
    cout << "B = ";
    b.afficher();
    
    cout << "A + B = ";
    c = (a + b);
	c.afficher();
    
    cout << "A + 12 = ";
    c = (a + 12);
	c.afficher();
    
    cout << "8 + A = ";
    c = (8 + a);
	c.afficher();
    
    cout << "A * B = ";
    c = (a * b);
	c.afficher();
    
    cout << "B - A = ";
    c = (b - a);
	c.afficher();
}

