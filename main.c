#include<stdio.h>

void loop(char m[3][3]);
void mostrar_tablero(char m[3][3]);
void colocar_pieza(char m[3][3]);
void turno(char m[3][3]);
void victoria(char m[3][3]);
void pantalla_final(char m[3][3]);


int main()
{
     char m[3][3];
     void loop(m);
     return 0;
};



void loop(char m[3][3])
{
     void mostrar_tablero(m);
     void turno(m);
     void colocar_pieza(m);
     void victoria(m);
     void pantalla_final(m);
};


void mostrar_tablero(char m[3][3])
{

};


void turno(char m[3][3])
{
      int a;
     for (a=1; a<10; a++){
          if (a%2==0){
               printf("Es turno del jugador X");
          } 
          else{
               printf("Es turno del jugador O");
          }
          return 0;
     }

};


void colocar_pieza(char m[3][3])
{

};


void victoria(char m[3][3])
{
 if (c[0][0] == 'X' || c[0][0] == 'O') {
            if (c[0][0] == c[0][1] && c[0][0] == c[0][2]){
                  if(c[0][0] == 'X') {
                        return 0; //jugador 1 ganó
                  }
                  else {
                        return 1; //jugador 2 ganó
                  }
            }
            if (c[0][0] == c[1][0] && c[0][0] == c[2][0]){
                  if(c[0][0] == 'X') {
                        return 0; //jugador 1 ganó
                  }
                  else {
                        return 1; //jugador 2 ganó
                  }  
            }
      }
      if (c[1][1] == 'X' || c[1][1] == 'O') {
            if (c[1][1] == c[0][0] && c[1][1] == c[2][2]){
                  if(c[1][1] == 'X') {
                        return 0; //jugador 1 ganó
                  }
                  else {
                        return 1; //jugador 2 ganó
                  }
            }
            if (c[1][1] == c[1][0] && c[1][1] == c[1][2]){
                  if(c[1][1] == 'X') {
                        return 0; //jugador 1 ganó
                  }
                  else {
                        return 1; //jugador 2 ganó
                  }
            }
            if (c[1][1] == c[2][0] && c[1][1] == c[0][2]){
                  if(c[1][1] == 'X') {
                        return 0; //jugador 1 ganó
                  }
                  else {
                        return 1; //jugador 2 ganó
                  }
            }
            if (c[1][1] == c[0][1] && c[1][1] == c[2][1]){
                  if(c[1][1] == 'X') {
                        return 0; //jugador 1 ganó
                  }
                  else {
                        return 1; //jugador 2 ganó
                  }
            }
      }
      if (c[2][2] == 'X' || c[2][2] == 'O') {
            if (c[2][2] == c[0][2] && c[2][2] == c[1][2]){
                  if(c[2][2] == 'X') {
                        return 0; //jugador 1 ganó
                  }
                  else {
                        return 1; //jugador 2 ganó
                  }
            if (c[2][2] == c[2][0] && c[2][2] == c[2][1]){
                  if(c[2][2] == 'X') {
                        return 0; //jugador 1 ganó
                  }
                  else {
                        return 1; //jugador 2 ganó
                  }
            }
      return 2; //empate
};

void pantalla_final(char m[3][3])
{

};
