#include<stdio.h> 
int funcDatos(),promAlu(),datos,promeAl; 
char op;
int main() { 
do{
datos= funcDatos();   
promeAl= promAlu();   
	
 
printf("\n ¿Desea  ingresar los  datos  de otro alumno S/N?\n");   
setbuf(stdin, NULL); 
scanf("%c",&op); 
getchar();  
}
while(op=='S'||op=='s');
}
