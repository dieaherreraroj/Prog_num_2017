//PROGRAMA PARA OBSERVAR LA CONDICION WHITESPACE
//Adición: ordena alfabéticamente los nombres.

#include <iostream>
#include <string>

int main(void){

  //DECLARACION DE VARIABLES
  std::string nombre;              //CLAVE: string namespace std
  std::string apellido; 

  //PROMT DE ESCRITURA
  std::cout<<"Ingrese su nombre: \n";

  //PROMT DE LECTURA
  std::cin>>nombre>>apellido;

  //IMPRESION DATOS LEIDOS
  std::cout<<"HOLA "<<nombre<<" "<<apellido<<"!\n";
  std::cout<<"Tu nombre es "<<nombre<<". "<<"Tu apellido es "<<apellido<<"\n";    //Promt ingresado al final

  //PROMTS DE ADICIÓN
  if(apellido>nombre){
    std::cout<<apellido<<" está primero en el alfabeto\n";
  }
  else{
    if(apellido==nombre){
      std::cout<<apellido<<" y "<<nombre<<" tienen el mismo orden en el alfabeto\n";
    }
    else{
      std::cout<<nombre<<" está primero en el alfabeto\n";
    }
  }

  return 0;
}

/*
 SE INGRESO LA SIGUIENTE LINEA: DIEGO HERRERA

 EL COMPUTADOR IMPRIMIO: 

 HOLA DIEGO HERRRERA

 AL COMENTARIAR LA SENTENCIA DE INGRESO DE LA
 VARIABLE APELLIDO EL COMPUTADOR IMPRIMIO:

 HOLA DIEGO

 LA CONVENCION WHITESPACE HACE QUE EL COMPU-
 TADOR ACABE DE INGRSAR UNA CADENA DE CARAC-
 TERES CUANDO ENCUENTRA UN ESPACIO, O TAB, O
 FIN DE LINEA (ENTER). 
*/
