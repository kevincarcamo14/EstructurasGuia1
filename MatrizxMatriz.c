//Ejercicio #1
int main() {

     int n=0;
     printf("ingrese un tamano\n");
        scanf("%d",&n);
    
    int matriz[n][n],matriz2[n][n],matriz3[n][n];
    
   for(int m=0;m<n;m++){  
    for(int k=0;k<n;k++){
        printf("ingrese un valor\n");
        scanf("%i",&matriz[m][k]);
    }
    }
     printf("SIGUIENTE MATRIZ\n");
    for(int m=0;m<n;m++){  
    for(int k=0;k<n;k++){
        printf("ingrese un valor\n");
        scanf("%i",&matriz2[m][k]);
    }
    }
     printf("\n");
     printf("MATRIZ 1\n");
    printf("---------");
      for(int a=0;a<n;a++){  
                

    for(int b=0;b<n;b++){
        printf(" ");
        printf("[%d]",matriz[a][b]);
    }  
    printf("\n");
    }
     printf("---------\n");
     
     printf("MATRIZ 2\n");
    printf("---------");
      for(int a=0;a<n;a++){  
                printf("\n"); 

    for(int b=0;b<n;b++){
        printf(" ");
        printf("[%d]",matriz2[a][b]);
    }  
    
    }
    printf("\n");
     printf("---------");
    printf("\n");
     
     
      for(int m=0;m<n;m++){  
    for(int k=0;k<n;k++){
        matriz3[m][k]=matriz[m][k]*matriz2[m][k];
    }
    }
     
    printf("\n");
      printf("MATRIZ RESULTANTE\n");
    printf("---------");
      for(int a=0;a<n;a++){  
                printf("\n"); 

    for(int b=0;b<n;b++){
        printf(" ");
        printf("[%d]",matriz3[a][b]);
    }  
    
    }
    printf("\n");
     printf("---------");
    printf("\n");
     
     
    return (0);
}

