#include <iostream>
using namespace std;
class Enano
{
    private:
    float altura;
    int edad;
    int vida;
    public: 
    Enano() {}
   ~Enano() {}

   void Inicializar (){
    this -> altura =2;
    this -> edad =150;
    this->vida =10;
   }
   void Comer (){
      this->vida +=1;
   }

};

class Personaje (){

private:

public:
Personaje(){}
~Personaje(){}



}


 

int main(int argc,char const *argv[]){
    int a=5;
    bool b= true;
    float f=0.1;
    double d=.01;
    char c='a';

    cout<"Tamaño tipos de datos nativos: "<<endl;
    cout<<"Tamaño int:  "<<sizeof(int)<<"bytes."<<endl;
    cout<<"Tamaño bool:  "<<sizeof(bool)<<"bytes."<<endl;
    cout<<"Tamaño float:  "<<sizeof(float)<<"bytes."<<endl;
    cout<<"Tamaño double:  "<<sizeof(double)<<"bytes."<<endl;
    cout<<"Tamaño char:  "<<sizeof(char)<<"bytes."<<endl;
    cout<<"Tamaño enano:  "<<sizeof(char)<<"bytes."<<endl;
 
   cout <<"Direccion de memoria: "<<endl;
   cout <<"Direccion de int"<<&i<<endl;
   cout <<"Direccion de bool"<<&b<<endl;
   cout <<"Direccion de float"<<&f<<endl;
   cout <<"Direccion de double"<<&d<<endl;
   cout <<"Direccion de "<<&c<<endl;
   cout <<"Direccion de "<<&e<<endl;

   cout<<"Memoria Estatica C/C++:"<<endl;
   cout <<"Direccion de int"<<&i<<endl;
   cout <<"Direccion de bool"<<&b<<endl;
   cout <<"Direccion de float"<<&f<<endl;
   cout <<"Direccion de double"<<&d<<endl;
   cout <<"Direccion de char : "<<static_cast<void*> (&c)<<endl;
   cout <<"Direccion de rnano"<<&e<<endl;
 
   cout<<enld;
   cout<<
 

// puntero en c
Enano* direccion =(Enano*)malloc(sizeof(Enano));
direccion -> Inicializar();

//Punteros en c++
Enano* instancia= new Enano();

// operador ->
instancia-> Comer();
instancia-> Hablar();

return 0;



}