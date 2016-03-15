#include <stdio.h>

main(){
    
    int mazeDimensions[2];
    int ratInitalLocation[2];
    int cheeseLocation[2];

    system("clear");

    //Get the maze dimensions
    printf("Digite a quantidade de linhas do labirinto(comecando em 0): ");
    scanf("%d" , &mazeDimensions[0]);
    printf("Digite a quantidade de colunas do labirinto(comecando em 0): ");
    scanf("%d" , &mazeDimensions[1]);

    //Get the initial rat location
    printf("Digite a linha inicial do rato: ");
    scanf("%d" , &ratInitalLocation[0]);
    printf("Digite a coluna inicial do rato: ");
    scanf("%d" , &ratInitalLocation[1]);

    //Get the cheese location
    printf("Digite a linha inicial do queijo: ");
    scanf("%d" , &cheeseLocation[0]);
    printf("Digite a coluna inicial do queijo: ");
    scanf("%d" , &cheeseLocation[1]);

    //Print the maze
    printf("\nmazeDimensions: (%d , %d) \nratInitialLocation: (%d , %d) \ncheeseLocation: (%d , %d)\n" , mazeDimensions[0] , mazeDimensions[1] , ratInitalLocation[0] , ratInitalLocation[1] , cheeseLocation[0] , cheeseLocation[1]);


    //Initialize the maze matrix
    int maze[mazeDimensions[0]][mazeDimensions[1]];

    //Draw the maze (walls and empty blocks)
    printf("\n****Instrucoes****\n");
    printf("Digite 0 para blocos livres (sem paredes) por onde o rato passará\n");
    printf("Digite -1 para blocos ocupados (paredes) por onde o rato não poderá passar\n\n");
    printf("--------------------------------------Desenhe o labirinto--------------------------------------\n");
    
    int i;
    int j;
    
    for(i = 0 ; i < mazeDimensions[0] ; i++){
        for(j = 0 ; j < mazeDimensions[1] ; j++){
            printf("Atribua um valor para o bloco [ %d x %d]: " , i , j);
            scanf("%d" , &maze[i][j]);
        }
    }

    system("clear");

    //Printf the drawed maze 
    printf("--------------------------------------O labirinto--------------------------------------\n\n");
    
    for(i = 0 ; i < mazeDimensions[0] ; i++){
        
        for(j = 0 ; j < mazeDimensions[1] ; j++){
            printf("%d \t" , maze[i][j]);
        }
        
        printf("\n");
    
    }

    printf("\n");

    


}