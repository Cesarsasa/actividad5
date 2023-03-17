#include<iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    //codigo 1
    int notas[4];
    notas[0]=80;
    notas[1]=60;
    notas[2]=65;
    notas[3]=70;
    for (int i = 0; i <  3; i++)
    {
        cout<<i<<":"<<notas[i]<<endl;
    }
    
    for (int i : notas)

      cout<<i<<endl;
    
    //codigo 2
    int tam=0;
    int promedio=0;
    int suma=0;
    cout<<"cuantans notas desea agregar:";
    cin>>tam;
    int notas[tam];
      for (int i = 0; i <  tam; i++)
    {
         cout<<"ingrese nota"<<i+1<<":"<<endl;
          cin>>notas[i];
    } 
    for (int i = 0; i < tam; i++)
    {
        suma+=notas[i];
    }
    promedio =suma /tam;
     cout<<"promedio notas"<<promedio;


    

    //codigo 3
      int tam=0;
    int promedio=0;
    int suma=0;
    int notas[tam];
    char res;
    do
    {
        tam++;
        cout<<"ingrese notas: "<<tam;
       cin>>notas[tam-1];
       cout<<"desea ingresar otra nota:";
       cin>>res;

    } while (res =='s' || res =='S');
    


 //codigo 4
 string nombre;
 int dato;
 cout<<"dato:";
 cin>>dato;
 cin.ignore();
 cout<<"Ingrese nombre completo";
 getline(cin, nombre);

 //codigo 5
 string semana[7]={"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado"};

	
	semana[3]="Jueves";
	cout<<semana[6]<<endl;
	cout<<"______________"<<endl;
	for(int i=0;i<7;i++){
		cout<<semana[i]<<endl;
	}
    return 0;
}
