#include "iostream"
#include "stdio.h"
using namespace std;
class cliente 
{
private:     
  char nombre [30];
  int registro;
  int mes;
  int ventas;
  int ventaTotal;
public: 
cliente();
    char meter();  
    int fechar();
    int otorgar();
    int contabilizar();
};         
cliente::cliente() 
{   
    registro=0;
    mes=0;
    ventas=0;
    ventaTotal=0;
}
//f1
char cliente::meter(){
    printf("\n   Nombre de Cliente: ");
    scanf("%s" ,nombre);} 
//f2
int cliente::fechar(){
    printf("   Inserta Nº del Mes: ");
    scanf("%s" ,&mes);}
//f3
int cliente::contabilizar(){
    char seguir;
    int acumulador, numero;
    acumulador = 0;
    do
    {
        printf("\n------------------\n");
        printf("\nIntroduce VENTAS: " );
        scanf("%d", &numero );
        acumulador += numero;
        printf("Introducir más VENTAS (s/n)?: ");
        getchar ();
        scanf( "%c", &seguir );
    } while ( seguir != 'n' );
}
//funcion 4
int cliente::otorgar(){
    int acumulador, numero;
    printf("\n___________________________\n");
    printf("\nCLIENTE: %s | Nº: %s | Mes: %s | VENTAS TOTALES: %d\n\n" ,nombre, registro, &mes, acumulador)
    ;}
int main()
{
cliente c;
c.meter();
c.fechar();
c.contabilizar();
c.otorgar();
return 0;
}
