#include <iostream>
#include <math.h>

using namespace std;
int caso=0;
float g=9.81,pi=3.14159;
float alturao=0, alturad=0, distancia=0,velocidadO=0,angulo=0,radioO=0, radioD=0;
//otra forma de  las variables es realizando un arreglo tipo float de de 7 indices. arregloFloar[6]+

bool verificacion_del_radioDO(float a, float b);
bool verificacion_del_radioDD(float a, float b);
float altura_ofensivo(float v, float ang, float d);




float posicion_inicial_D(float a);


int main()
{       cout<<"1. Generar disparos (al menos tres) ofensivos que comprometan la integridad del cañón defensivo."<<endl;

         cout<<" 2. Generar disparos (al menos tres) defensivos que comprometan la integridad del cañón ofensivo."<<endl;

         cout<<" 3. Dado un disparo ofensivo, generar (al menos tres) disparos defensivos que impida que el cañón defensivo sea destruido sin importar si el cañón ofensivo pueda ser destruido."<<endl;

         cout<<" 4. Dado un disparo ofensivo, generar (al emnos tres) disparo defensivos que impidan que los cañones defensivo y ofensivo puedan ser destruidos."<<endl;

             cout<<"ingrese el caso de interes"<<endl;
             cin>>caso;
                 float alturao=0, alturad=0, distancia=0,velocidadO=0,angulo=0,radioO=0, radioD=0;
                 cout<<"ingrese los parametros de iniciales"<<endl;
                 cout<<"Altura del cañon ofensivo"<<endl;
                 cin>> alturao;
                 cout<<"Altura del cañon defensivo"<<endl;
                 cin>> alturad;
                 cout<<"la distancia entre los cañones"<<endl;
                 cin>> distancia;
                 cout<<"Velocidad inicial del proyectil ofensivo"<<endl;
                 cin>>velocidadO;
                 cout<<"angulo inicial del proyectil ofensivo"<<endl;
                 cin>>angulo;
                 float altura = alturad-alturao;
                 switch (caso) {

                 case(1):{




                 }break;




                 }







}//Main
bool verificacion_del_radioDo(float a, float b){
    float distancia = 0.05*b;
    if (a<=distancia) return  true;
    else return false;
     }
bool verificacion_del_radioDD(float a, float b){
    float distancia = b - 0.05*b;
    if (a >= distancia) return  true;
    else return false;
}

float altura_ofensivo(float v, float ang, float d ){
    float t, altu=0;

    t=d/(v*cos(ang*pi/180 ));
    altu=v*sin(ang*pi/180 )*t-0.5*g*t*t;
    return altu;}



