#include <iostream>

using namespace std;

int main()
{
    double m1,b1,y,x,m2,b2,m3,b3,x3;
    cout << " ---------------RECTA 1-------------- "<< endl;
    cout << "Ingrese la pendiente:" << endl;
    cin>>m1;
    cout << "Ingrese la ordenada al origen:" << endl;
    cin>>b1;
    cout << " ----------------------------- "<< endl;
    cout<< "RECTA 1: Y="<< m1 <<"*"<< "X"<<"+"<< b1 << endl;
    cout << " ----------------------------- "<< endl;



     cout << " ---------------RECTA 2-------------- "<< endl;
    cout << "Ingrese la pendiente:" << endl;
    cin>>m2;
    cout << "Ingrese la ordenada al origen:" << endl;
    cin>>b2;
    cout << " ----------------------------- "<< endl;
    cout<< "RECTA 2: Y="<< m2 <<"*"<< "X"<<"+"<< b2 << endl;
    cout << " ----------------------------- "<< endl;




    if(m3==0&&b3==0){

         cout << " Sus rectas son Coincidentes"<< endl;
    }

    if(m1==m2&&b1!=b2){
               cout << " Sus rectas son paralelas, no existe interseccion"<< endl;
    }

    if(m1!=m2){


    m3=m1-m2;
    b3=b2-b1;
    x=b3/m3;

    y = m1 * x + b1;

    cout<< "Sus rectas son perpendiculares, la interseccion es:"<<endl;


    cout<<"("<<x<<","<<y<<")"<<endl;
    }


    return 0;
}
