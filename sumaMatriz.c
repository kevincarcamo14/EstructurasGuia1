﻿//Ejercicio #4

int main() {

    int n=0;
     printf("ingresse un tamano\n");
        scanf("%d",&n);
    
    int matriz[n][n];
    
   for(int m=0;m<n;m++){  
    for(int k=0;k<n;k++){
        printf("ingresse un valor\n");
        scanf("%d",&matriz[m][k]);
    }
    }
    
    
    printf("---------");
      for(int a=0;a<n;a++){  
                printf("\n"); 

    for(int b=0;b<n;b++){
        printf(" ");
        printf("%d",matriz[a][b]);
    }  
    
    }
    
    printf("\n");
    printf("---------");
     printf("\n");
    int col=n,sumaD1=0;
    
    for(int k=n;k>0;k--){
         printf(" ");
       
         sumaD1=sumaD1+matriz[col-1][k-1];
        col--;
    }
     int col2=0,sumaD2=0;
    
    for(int k=n;k>0;k--){
     
         sumaD2=sumaD2+matriz[col2][k-1];
        col2++;
    }
     
     int sumaH=0,fil=0;
      int sumaV=0,col3=0;
     
     
     for(int k=0;k<n;k++){
         while(fil<n){
             sumaH=sumaH+matriz[k][fil];
             fil++;
         }
         
         printf("suma horizontal= ");
         printf("%d",sumaH);
          printf("\n");
          fil=0;
          sumaH=0;
          
          while(col3<n){
             sumaV=sumaV+matriz[col3][k];
             col3++;
         }
         
         printf("suma vertical= ");
         printf("%d",sumaV);
          printf("\n");
          col3=0;
          sumaV=0;
     }
     
     printf("suma diagonal 1= ");
      printf("%i",sumaD2);
      printf("\n");
     printf("suma diagonal 2= ");
      printf("%i",sumaD1); 
     
    return 0;
}

