#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct  Nodo{
int dato;
Nodo *siguiente;
//

};

void agregar1(Nodo *&,int);

void agregar2(Nodo *&,Nodo*&,int);

void sacar2(Nodo *&,int &);

bool agregar3(Nodo *);

void sacar1(Nodo *&,Nodo *&,int &);



void menu(){
	Nodo *lista = NULL;
	int opcion, codigo;
	
	do{
		cout<<"\t.:MENU:.\n";
		cout<<"1. Ingresar Cajas: "<<endl;
		cout<<"2. Sacar Cajas"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1: cout<<"\nDigite Codigo de la Caja: ";
					cin>>codigo;
					agregar1(lista,codigo);
					break;
			case 2: cout<<"\nMostrar cajas Almacenadas: ";
					while(lista != NULL){
						sacar2(lista,codigo);
						if(lista != NULL){
							cout<<codigo;
						}
						else{
							cout<<codigo;
						}
					}
					cout<<"\n";
					system("pause");
					break;
			case 3: break;
		}
		system("cls"); 
	}while(opcion != 3);
	
}


void agregar1(Nodo *&lista,int n){

    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato=n;

    nuevo_nodo->siguiente = lista;

    lista=nuevo_nodo;

    cout<<"\nElmento "<<n<<" Agregado correctamente"<<endl;

}

bool agregar3(Nodo *frente){

    return (frente==NULL)? true : false;

}

void sacar2(Nodo *&lista,int &n){

    Nodo *aux=lista;

    n=aux->dato;

    lista=aux->siguiente;

    delete aux;

}

void agregar2(Nodo *&frente,Nodo *&fin,int n){

    Nodo *nuevo_nodo=new Nodo();

     nuevo_nodo-> dato=n;

    nuevo_nodo-> siguiente=NULL;

    if(frente==NULL){        frente=nuevo_nodo; }

    else{        fin->siguiente=nuevo_nodo; }

    fin=nuevo_nodo;

    cout<<"\tElemento "<<n<<" insertado correctamente"<<endl;

}

void sacar1(Nodo *&frente,Nodo *&fin,int &n){

    n =frente->dato;

    Nodo *aux=frente;

    if(frente==fin){        frente=NULL;        fin=NULL;    }

    else{        frente=frente->siguiente;    }

    delete aux;

}

int main(){
menu();
getch();
return 0;

}