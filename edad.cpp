//PROGRAMA QUE DICE NOMBRE Y EDAD EN AÑOS, MESES Y DIAS 

#include <iostream>
#include <string>

int main(void){

  //DECLARACION DE VARIABLES
  std::string nombre;
  std::string apellido;
  int anac=0, menac=0, dinac=0;    //VAR. FECHA NACICMIENTO
  int ahoy=0, mehoy=0, dihoy=0;    //VAR. FECHA ACTUAL
  int anos=0, meses=0, dias=0;     //DATOS EDAD CALCULADA

  //LECTURA DE DATOS
  std::cout<<"Para saber tu edad exacta, escribe tu primer nombre y apellido: ";
  std::cin>>nombre>>apellido;

  //LECTURA DATOS (nacimiento)
  std::cout<<"Ingresa tu fecha de nacimiento: \n";
  std::cout<<"Año: "; std::cin>>anac;
  std::cout<<"Mes(número): "; std::cin>>menac;
  std::cout<<"Día: "; std::cin>>dinac; std::cout<<"\n";

  //LECTURA DATOS (hoy)
  std::cout<<"Ingresa la fecha de hoy: \n";
  std::cout<<"Año: "; std::cin>>ahoy;
  std::cout<<"Mes(número): "; std::cin>>mehoy;
  std::cout<<"Día: "; std::cin>>dihoy; std::cout<<"\n";

  //COMPUTAMOS EDAD EXACTA EN AÑOS DE 360 DIAS Y 12 MESES
  anos=ahoy-anac; meses=mehoy-menac; dias=dihoy-dinac;
  if(dias<0){
    meses-=1;
    dias+=30;
  }
  if(meses<0){
    anos-=1;
    meses+=12;
  }

  //IMPRIME RESULTADOS
  std::cout<<"HOLA "<<nombre<<" "<<apellido<<"\n"<<"TIENES "<<anos<<" AÑOS "<<meses<<" MESES ";
  if(dias==1){
    std::cout<<dias<<" DÍA.\n";
  }
  else{
    std::cout<<dias<<" DÍAS.\n";
  }
  
  return 0;
}
