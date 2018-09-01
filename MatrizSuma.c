#include <stdio.h>

int main() {

    int n=0;
     printf("ingresse un tamano\n");
        scanf("%i",&n);
    
    int matriz[n][n];
    
   for(int j=0;j<n;j++){  
    for(int i=0;i<n;i++){
        printf("ingresse un valor\n");
        scanf("%i",&matriz[j][i]);
    }
    }
    
    
    printf("---------");
      for(int a=0;a<n;a++){  
                printf("\n"); 

    for(int b=0;b<n;b++){
        printf(" ");
        printf("%i",matriz[a][b]);
    }  
    
    }
    
    printf("\n");
    printf("---------");
     printf("\n");
    int col=n,sumaD1=0;
    
    for(int i=n;i>0;i--){
         printf(" ");
       
         sumaD1=sumaD1+matriz[col-1][i-1];
        col--;
    }
     int col2=0,sumaD2=0;
    
    for(int i=n;i>0;i--){
     
         sumaD2=sumaD2+matriz[col2][i-1];
        col2++;
    }
     
     int sumaH=0,fil=0;
      int sumaV=0,col3=0;
     
     
     for(int i=0;i<n;i++){
         while(fil<n){
             sumaH=sumaH+matriz[i][fil];
             fil++;
         }
         
         printf("suma horizontal= ");
         printf("%i",sumaH);
          printf("\n");
          fil=0;
          sumaH=0;
          
          while(col3<n){
             sumaV=sumaV+matriz[col3][i];
             col3++;
         }
         
         printf("suma vertical= ");
         printf("%i",sumaV);
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

