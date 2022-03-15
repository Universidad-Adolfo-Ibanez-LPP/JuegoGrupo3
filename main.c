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
    printf("%c|%c|%c \n", m[0][0], m[0][1], m[0][2]);
    printf("- - -\n");
    printf("%c|%c|%c \n", m[1][0], m[1][1], m[1][2]);
    printf("- - -\n");
    printf("%c|%c|%c \n", m[2][0], m[2][1], m[2][2]);
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
    int aux; //Definimos una variable auxiliar de caracteres
    int i,j,k; //Definimos tres variables numericas

    do{
        //Pedimos al usuario que ingrese un numero, lo guardamos si es que esta entre el 1 y el 9 , considerandolos.
         
        do{
        printf("Elige una casilla basandote en los numeros del tablero:\n");
        fflush(stdin); //Refrescamos
        scanf("%i",&aux);
        } while (aux<1||aux>9);

        k=0;//Definimos una especie de contador para terminar ciclos

        //Ahora, marcaremos X o O con un ciclo switch dependiendo de lo que ingresa el usuario. 
        //Tendremos en total 9 casos, y si nuestra casilla ya esta ocupada, pediremos otra casilla.
         
        switch(aux){
                  
            case 1:{
                i=0;
                j=0;
                if (m[i][j]=='X'|| m[i][j]=='O'){
                    k=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.\n\n");
                }
                break;
            }
                  
            case 2:{
                i=0;
                j=1;
                if (m[i][j]=='X'|| m[i][j]=='O'){
                    k=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.");
                }
                break;
            }
                  
            case 3:{
                i=0;
                j=2;
                if (m[i][j]=='X'|| m[i][j]=='O'){
                    k=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.");
                }
                break;
            }
                  
            case 4:{
                i=1;
                j=0;
                if (m[i][j]=='X'|| m[i][j]=='O'){
                    k=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.");
                }
                break;
            }
                  
            case 5:{
                i=1;
                j=1;
                if (m[i][j]=='X'|| m[i][j]=='O'){
                    k=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.");
                }
                break;
            }
                  
            case 6:{
                i=1;
                j=2;
                if (m[i][j]=='X'|| m[i][j]=='O'){
                    k=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.");
                }
                break;
            }
                  
            case 7:{
                i=2;
                j=0;
                if (m[i][j]=='X'|| m[i][j]=='O'){
                    k=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.");
                }
                break;
            }
                  
            case 8:{
                i=2;
                j=1;
                if (m[i][j]=='X'|| m[i][j]=='O'){
                    k=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.");
                }
                break;
            }
                  
            case 9:{
                i=2;
                j=2;
                if (m[i][j]=='X'|| m[i][j]=='O'){
                    k=1;
                    printf("La casilla no esta disponible, selecciona una que este disponible.");
                }
                break;
            }
        }
    }while (k==1);
     
    m[i][j] = 'X';
};


void victoria(char m[3][3])
{
 if (m[0][0] == 'X' || m[0][0] == 'O') {
            if (m[0][0] == m[0][1] && m[0][0] == m[0][2]){
                  if(m[0][0] == 'X') {
                        return 0; //jugador 1 ganó
                  }
                  else {
                        return 1; //jugador 2 ganó
                  }
            }
            if (m[0][0] == m[1][0] && m[0][0] == m[2][0]){
                  if(m[0][0] == 'X') {
                        return 0; //jugador 1 ganó
                  }
                  else {
                        return 1; //jugador 2 ganó
                  }  
            }
      }
      if (m[1][1] == 'X' || m[1][1] == 'O') {
            if (m[1][1] == m[0][0] && m[1][1] == m[2][2]){
                  if(m[1][1] == 'X') {
                        return 0; //jugador 1 ganó
                  }
                  else {
                        return 1; //jugador 2 ganó
                  }
            }
            if (m[1][1] == m[1][0] && m[1][1] == m[1][2]){
                  if(m[1][1] == 'X') {
                        return 0; //jugador 1 ganó
                  }
                  else {
                        return 1; //jugador 2 ganó
                  }
            }
            if (m[1][1] == m[2][0] && m[1][1] == m[0][2]){
                  if(m[1][1] == 'X') {
                        return 0; //jugador 1 ganó
                  }
                  else {
                        return 1; //jugador 2 ganó
                  }
            }
            if (m[1][1] == m[0][1] && m[1][1] == m[2][1]){
                  if(m[1][1] == 'X') {
                        return 0; //jugador 1 ganó
                  }
                  else {
                        return 1; //jugador 2 ganó
                  }
            }
      }
      if (m[2][2] == 'X' || m[2][2] == 'O') {
            if (m[2][2] == m[0][2] && m[2][2] == m[1][2]){
                  if(m[2][2] == 'X') {
                        return 0; //jugador 1 ganó
                  }
                  else {
                        return 1; //jugador 2 ganó
                  }
            if (m[2][2] == m[2][0] && m[2][2] == m[2][1]){
                  if(m[2][2] == 'X') {
                        return 0; //jugador 1 ganó
                  }
                  else {
                        return 1; //jugador 2 ganó
                  }
            }
      return 2; //empate
};

void pantalla_final(char m[3][3]){
     int j; 
     system("cls");
     j = victoria(m)
     if(j==0){
          printf("Ha ganado el jugador 1");
     }    
     else if(j==1){
          printf("Ha ganado el jugador 2");
     }
     else{
          printf("Han empatado!! Intentenlo de nuevo.");
     }
};
