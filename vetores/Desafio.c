
#include <stdio.h>

int main(void) {
  char game[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
  int x=0,y=0,contO=0,contX=0;
  for (int i = 0; i < 9; i++) {
    if(i%2==0){
        printf("Agora é o O!\n");
        printf("Digite a coordenado y: ");
        scanf("%d",&x );
        printf("Digite a coordenado x: ");
        scanf("%d",&y );
        if(game[x][y]==' '){
            game[x][y]='O'; 
        }
        else{
            printf("Erro!!!"); 
        }
    }
    else{
        printf("Agora é o X!\n");
        printf("Digite a coordenado y: ");
        scanf("%d",&x );
        printf("Digite a coordenado x: ");
        scanf("%d",&y );
        if(game[x][y]==' '){
            game[x][y]='X'; 
        }
        else{
            printf("Erro!!!"); 
        }
    }
    //print
    for(int l=0; l<3; l++){
        printf(" %c | %c | %c \n",game[l][0],game[l][1],game[l][2]);
    } 
    //ganhar
    for(int l=0; l<3; l++){
        if(contX==3||contO==3){
            printf("vc ganhou!");
            return 0;
        }
        contO=0;
        contX=0;
        for(int c=0; c<3; c++){
            if(game[l][c]=='X'){
                contX++;
            }
            if(game[l][c]=='O'){
                contO++;
            }
        }
    }
    for(int c=0; c<3; c++){
        if(contX==3||contO==3){
            printf("vc ganhou!");
            return 0;
        }
        contO=0;
        contX=0;
        for(int l=0; l<3; l++){
            if(game[l][c]=='X'){
                contX++;
            }
            if(game[l][c]=='O'){
                contO++;
            }
        }
    }
    for(int l=0; l<3; l++){
        for(int c=0; c<3; c++){
            if(l==c){
                if(game[l][c]=='X'){
                    contX++;
                }
                if(game[l][c]=='O'){
                    contO++;
                }
            }
            if(l+c==2){


            }
            
        }
    }
    
  }
  return 0;
}