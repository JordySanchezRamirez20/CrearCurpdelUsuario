/*Elabora un programa que calcule el RFC de una persona.
Esta formado por:
Dos primeras letras del apellido paterno(Mayusculas)
La primer letra del apellido materno(Mayusculas)
La primer letra del primer nombre(Mayusculas)
Los ultimos dos digitos del año de nacimiento
Los dos digitos del mes de nacimiento 
Los dos digitos del Dia de nacimiento*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<string.h>
void amd(void);
main(){
  amd();
}
void amd(void){
 char annio[4],mess[4],diia[4];
 int anio;
   bool b;
   int mes;
   int dia;
   char apat[15];
   char amat[15];
   char nombre[25];
   char cadena[10]="\0";
   printf("\n\tIngrese su apellido paterno: ");
   scanf("%s",&apat);
   printf("\n\tIngrese su apellido materno: ");
   scanf("%s",&amat);
   printf("\n\tIngrese su nombre: ");
   scanf("%s",&nombre);
   strncat(cadena,apat,2);
   strncat(cadena,amat,1);
   strncat(cadena,nombre,1);
   do{
      printf("\n\tIntroduce el a%co : ",164);
      scanf("%d",&anio);
      if(anio<=1900 || anio >=2050){
         printf("\nA%co incorrecto",164);
      }
   }while(anio<=1900 || anio>=2050);
      if(anio%4==0 && anio%100!=0 || anio%400==0){
         b=1;
      }
      else{
         b=0;
      }
      sprintf(annio,"%d",anio);
      cadena[4]=annio[2];
      cadena[5]=annio[3];
      do{
         printf("\n\n\tintroduce el mes: ");
         scanf("%d",&mes);
         if(mes<=0 || mes>=13){
            printf("\nError de mes");
         }
      }while(mes<=0 || mes>=13);
      sprintf(mess,"%d",mes);
      if (mes<10){
         cadena[6]='0';
         strncat(cadena,mess,1);
      }else{
           strncat(cadena,mess,2);
      }
      switch(mes){
         case 1:
         case 3:
         case 5:
         case 7:
         case 8:
         case 10:
         case 12:
         do{
            printf("\n\n\tIngrese el dia: ");
            scanf("%d",&dia);
            if(dia<=0 || dia>=32){
               printf("\nError de dia");
            }
         }while(dia<=0 || dia>=32);
         sprintf(diia,"%d",dia);
         if(dia<10){
            cadena[8]='0';
            strncat(cadena,diia,1);
         }else{
              strncat(cadena,diia,2);
         }
         break;
         case 4:
         case 6:
         case 9:
         case 11:
         do{
            printf("\n\tIngrese el dia: ");
            scanf("%d",&dia);
            if(dia<=0 || dia>=31){
               printf("\nError del dia");
            }
        }while(dia<=0 || dia>=31);
        sprintf(diia,"%d",dia);
        if(dia<10){
            cadena[8]='0';
            strncat(cadena,diia,1);
         }else{
              strncat(cadena,diia,2);
         }
        break;
        case 2:
               if(b==0){
                 do{
                    printf("\n\n\tIngrese el dia: ");
                    scanf("%d",&dia);
                    if(dia<=0 || dia>=29){
                      printf("\nError de dia");
                    }
                 }while(dia<=0 || dia>=29);
                 sprintf(diia,"%d",dia);
                 if(dia<10){
                    cadena[8]='0';
                    strncat(cadena,diia,1);
                 }else{
                      strncat(cadena,diia,2);
                 }
               }else{
                  do{
                     printf("\n\n\tIngrese el dia: ");
                     scanf("%d",&dia);
                     if(dia<=0 || dia>=30){
                        printf("\nErro de dia");
                     }   
                  }while(dia<=0 || dia>=30);
                  sprintf(diia,"%d",dia);
                  if(dia<10){
                     cadena[8]='0';
                     strncat(cadena,diia,1);
                  }else{
                      strncat(cadena,diia,2);
                   }
               }
        }
        strupr(cadena);
        printf("\n\tEl RFC de esta persona es: %s ",cadena);
        getch();
        return;
}
