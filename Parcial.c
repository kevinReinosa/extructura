# include <stdio.h>

int main(void){
//Declaramos la variables
int fila,columna,i,j,valor,menor,k;
//pedimos las dimensiones de la matriz
printf("\nIngrese el numero de filas de su matriz\n");	
scanf("%d",&fila);	
printf("\nIngrese el numero de columnas de su matriz\n");	
scanf("%d",&columna);
// Declaramos la matriz	
int matriz[fila][columna];
//Llenamos la matriz

for (i = 0; i < fila ; i++)
{
	for (j = 0; j < columna; j++)
	{
		printf("Ingrese el dato en su fila y columna\n");
		scanf("%d",&matriz[i][j]);
	}
	
}
//Buscamos el punto de silla
for (i = 0; i < fila ; i++)
{   
	menor=matriz[i][i];  
	for (j = 0; j < columna; j++)
	{
	   if (menor > matriz[i][j])
	   {    valor=j; 
		   menor=matriz[i][j];
	   }
	   
	   if (j==columna-1)
	   {  
		int contador=0;
		for ( k=0; k < fila ; k++)
		{   
		   if (menor<matriz[k][valor])
		   {
			  contador++;
		   }
		}
		
		if (contador==0)
		{
		printf("\nEl primer punto de silla es\t");
		printf("%d",menor);
		printf("\n");
     		}else{
		printf("\nNo hay punto de silla");
		printf("\n");
			
			}
	      contador=0;
	      }
	     
		}
		
      }
	}
