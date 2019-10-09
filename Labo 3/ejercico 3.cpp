#include <iostream>
#include <string>
#include <stack>
using namespace std;

struct libro{
    string libro;
    int cantPaginas;
};

void BuscarLibro(stack<libro> libros, string titulo){
	if (libros.empty()){
		cout << "El libro no ha sido encontrado :(" << endl;
	}else{
        if(libros.top().libro == titulo){
    	    cout << "Cantidad de paginas del libro que buscas: " << libros.top().cantPaginas << endl;
        }else{
            libros.pop();
            BuscarLibro(libros, titulo);
        }
	}
}

int main(){
	
	stack<libro> libros;
        
    libro El_PRINCIPITO, HUSH, CRIMEN_DE_AUTOR, IT, LA_RAZON_DE_VALER_EN_EL_CICLO;
    
    El_PRINCIPITO.libro = "El PRINCIPITO";
    El_PRINCIPITO.cantPaginas = 150;
    
    HUSH.libro = "HUSH";
    HUSH.cantPaginas = 200;
    
    CRIMEN_DE_AUTOR.libro = "CRIMEN_DE_AUTOR";
    CRIMEN_DE_AUTOR.cantPaginas = 450;
    
    IT.libro = "IT";
    IT.cantPaginas = 300;
    
    LA_RAZON_DE_VALER_EN_EL_CICLO.libro = "LA RAZON DE VALER EN EL CICLO";
    LA_RAZON_DE_VALER_EN_EL_CICLO.cantPaginas = 15022;
    
	libros.push(El_PRINCIPITO);
	libros.push(HUSH);
	libros.push(CRIMEN_DE_AUTOR);
	libros.push(IT);
	libros.push(LA_RAZON_DE_VALER_EN_EL_CICLO);

    string libro;
    cout << "CATOLOGO: " << endl;
    cout <<"El PRINCIPITO"<< endl;
    cout <<"HUSH"<< endl;
    cout <<"CRIMEN DE AUTOR"<< endl;
    cout <<"IT"<< endl;
    cout <<"LA_RAZON DE VALER EN EL CICLO"<< endl;
	cout << "Escribe el libro que buscas (no olvides escribir en MAYUSCULAS :D)" << endl;
    cin >> libro;
    
    BuscarLibro(libros, libro);
    
    return 0;
}
