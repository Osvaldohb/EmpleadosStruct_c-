#include <iostream>
#include <conio.h>
#include <stdio.h>  
#include <windows.h>  
#include <stdlib.h>

using namespace std;

void gotoxy(int x,int y);
int agregarEmpleados(int x);
void listaEmpleados(int nume);
void ModificarSalario();
void MostrarHG(int nume);
void eliminarEmpleado(int nume);
void ModificarSalNivel();

struct info_direccion{  
 char direccion [30];
 char ciudad[20];
 char estado[20];
};
struct empleados{
  int ID; 
 char nombre[30];
 struct info_direccion dir_empleado;
 double salario;
 int nivel;
}empleado[100];



int main()
{
    int n=0;
    int x=0;
    int a;
    do
    {
        
    
    
    int elec;
    int matrix[20][50]={{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,1,1,1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};

    for(int i=0;i<20;i++)
    {
             for(int j=0;j<50;j++)
         {
             if(matrix[i][j]==1)cout<<char(219);
             else cout<<" ";

         }
         cout<<endl;

    }

   gotoxy(53,13);
   cout<<"Bienvenido a la empresa DevSantillan"<<endl;
   gotoxy(53,14);
   cout<<""<<"Este es nuestro menu"<<endl;
   gotoxy(53,15);
   cout<<"1.-Alta de nuevo empleado"<<endl;
   gotoxy(53,16);
   cout<<"2.-Modificacion del sueldo con su ID"<<endl;
   gotoxy(53,17);
   cout<<"3.-Mostrar todos los registros que viven en el estado de Hgo"<<endl;
   gotoxy(53,18);
   cout<<"4.-Eliminar registro de empleado que ya no trabaje"<<endl;
   gotoxy(53,19);
   cout<<"5.-Aumento en base a porcentajes"<<endl;
   gotoxy(53,20);
   cout<<"6.-Lista de empleados activos"<<endl;
   gotoxy(53,21);
   cout<<"7.-Salir"<<endl;
   gotoxy(53,22);
   cout<<"Porfavor ingrese su eleccion a continuacion:"<<endl; 
   cin>>elec;
   system("cls");
   switch (elec)
   {
   case 1:
          n=agregarEmpleados(x);
      

       break;
   case 2:
       ModificarSalario();
       break;
    case 3:
       MostrarHG(n);
       break;
    case 4:
        eliminarEmpleado(n);
       break;
     case 5:
       ModificarSalNivel();
       break;
    case 6:
        listaEmpleados(n);
       break;
       case 7:
       
       break;           
  
   }
    x=n;     
    cout<<"Deseas volver al menu principal? 1=Si, 2=No"<<endl;
    cin>>a;
    system("cls");
    } while (a==1);

}

int agregarEmpleados(int x)
{
           
        
 int nume;
 if(x>0)
 {

     cout<<"\nDigite el numero de empleados:";cin>>nume;
     cout<<"\n";
     nume=nume+x;
     for(x;x<+nume;x++){
    fflush(stdin);
    cout<<"Digite el nombre:";cin.getline(empleado[x].nombre,30,'\n');
    cout<<"Digite la direccion:";cin.getline(empleado[x].dir_empleado.direccion,30,'\n');
    cout<<"Digite la ciudad:";cin.getline(empleado[x].dir_empleado.ciudad,20,'\n');
    cout<<"Digite la estado:";cin.getline(empleado[x].dir_empleado.estado,20,'\n');
    cout<<"Salario:";cin>>empleado[x].salario;
    cout<<"Nivel:";cin>>empleado[x].nivel;
    empleado[x].ID=x;
  
  cout<<"\n";
 }
  cout<<"Se agregaron:"<<nume-x+1<<" empleados con exito!"<<endl;
 }
 else{
 cout<<"\nDigite el numero de empleados:";cin>>nume;
 cout<<"\n";
 
 for(int i=0;i<nume;i++){
  fflush(stdin);
  cout<<"Digite el nombre:";cin.getline(empleado[i].nombre,30,'\n');
  cout<<"Digite la direccion:";cin.getline(empleado[i].dir_empleado.direccion,30,'\n');
  cout<<"Digite la ciudad:";cin.getline(empleado[i].dir_empleado.ciudad,20,'\n');
  cout<<"Digite la estado:";cin.getline(empleado[i].dir_empleado.estado,20,'\n');
  cout<<"Salario:";cin>>empleado[i].salario;
  cout<<"Nivel:";cin>>empleado[i].nivel;
  empleado[i].ID=i;
  
  cout<<"\n";
  
  
 }
 cout<<"Se agregaron:"<<nume<<" empleados con exito!"<<endl;
 }
 
 return nume;
}

void ModificarSalario()
{
    int num,newSalario;
    cout<<"Porfavor ingrese el numero de empleado al que se le actualizara el salario:"<<endl;
    cin>>num;
    cout<<"A que cantidad deseas actualizar el salario?"<<endl;
    cin>>newSalario;
    empleado[num].salario=newSalario;
    cout<<"Cambio realizado con exito!"<<endl;
}

void MostrarHG(int nume)
{
    cout<<"Estos son los empleados que viven en el estado de Hidalgo:"<<endl;
    cout<<"\n";
    for(int i=0;i<nume;i++)
    {
      string lel=empleado[i].dir_empleado.estado;
      if(lel=="Hidalgo")
      {
           cout<<"ID:"<<empleado[i].ID<<endl;
           cout<<"Nombre:"<<empleado[i].nombre<<endl;
           cout<<"Direccion:"<<empleado[i].dir_empleado.direccion<<endl;
           cout<<"Ciudad:"<<empleado[i].dir_empleado.ciudad<<endl;
           cout<<"Estado:"<<empleado[i].dir_empleado.estado<<endl;
           cout<<"Salario:"<<empleado[i].salario<<endl;
           cout<<"Nivel:"<<empleado[i].nivel<<endl;
           cout<<"\n";
      }

    }


}

void eliminarEmpleado(int nume)
{
    int numP=0;
    cout<<"Bienvenido al sistema de borrado de datos"<<endl;
    cout<<"Porfavor dijite el numero del empleado o id a eliminar"<<endl;
    cin>>numP;
    for(int i=numP;i<nume;i++)
    {
        empleado[i]=empleado[i+1];
    }

    cout<<"Elimindado con exito!"<<endl;
    
    
}

void ModificarSalNivel()
{
    int NumP,Nivel;
    double sal,resul;
    cout<<"Porfavor ingresa el ID del empleado a aumentar el sueldo"<<endl;
    cin>>NumP;
     Nivel=empleado[NumP].nivel;
     switch(Nivel)
     {
         case 1: 
                cout<<"Lo sentimos este empleado no puede actualizar su salario ya que su nivel es 1";
         break;

         case 2:
            sal=empleado[NumP].salario;
            resul=sal*10/100;
            empleado[NumP].salario=sal+resul;
         cout<<"Se cambio el salario con exito por favor consultarlo en la opcion 6(Lista)"<<endl;
         break;

         case 3: 
         sal=empleado[NumP].salario;
            resul=sal*15/100;
            empleado[NumP].salario=sal+resul;
         cout<<"Se cambio el salario con exito por favor consultarlo en la opcion 6(Lista)"<<endl;
         break;
     }
    
}

void listaEmpleados(int nume)
{
    
    for(int i=0;i<nume;i++){
    int ls=empleado[i].nivel;
    if(ls>0)
    { 
    cout<<"ID:"<<empleado[i].ID<<endl;
    cout<<"Nombre:"<<empleado[i].nombre<<endl;
    cout<<"Direccion:"<<empleado[i].dir_empleado.direccion<<endl;
    cout<<"Ciudad:"<<empleado[i].dir_empleado.ciudad<<endl;
    cout<<"Estado:"<<empleado[i].dir_empleado.estado<<endl;
    cout<<"Salario:"<<empleado[i].salario<<endl;
    cout<<"Nivel:"<<empleado[i].nivel<<endl;
    cout<<"\n";
    }

}
}

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  