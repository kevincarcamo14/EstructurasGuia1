//Ejercicio#2

int main() {
    int n=0;
    int k,m;
    printf("ingrese un tamano");
    scanf("%d",&n);
    
	int arreglo[n][n],arreglo2[n][n];
	
	
	for(m=0;m<n;m++){
		for(k=0;k<n;k++){
			printf("Ingrese un número:");
			scanf("%d", &arreglo[m][k]);
		}
	}
	
        for(int a=0;a<n;a++){
		for(int c=0;c<n;c++){
                   arreglo2[c][a]=arreglo[a][c];
			
		}
	}
        
	for(m=0;m<n;m++){
		printf("\n");
		for(k=0;k<n;k++){
			printf("%d", arreglo[m][k]);
			}
		}
	printf("\n");
        printf("\n");
        printf("-----------");
        printf("\n");
	for(m=0;m<n;m++){
		printf("\n");
		for(k=0;k<n;k++){
			printf("%d",arreglo2[m][k]);
			}
		}
    return (0);
}

