//PROGRAMA QUE DETECTA PALABRAS REPETIDAS EN UN TEXTO, EN TIEMPO DE EJECUCIÓN

#include <iostream>
#include <string>

int main(void){

  //DECLARACIÓN DE VARIABLES
  std::string actual, previa="";

  //CICLO DE ANÁLISIS
  while(std::cin>>actual){
    if(previa==actual){
      std::cout<<"PALABRA REPETIDA: "<<actual<<"\n";
    }
    previa=actual;
  }

  /*El programa finaliza con un end-of-input character. 
    Para Linux es ctr+D*/

  /*El programa solo mira si hay repeticiones consecu-
    tivas, pero no cuneta las repeticiones de una palabra*/

  return 0;
}
