# include <stdio.h>

int main(void){
//Declaramos la variables
int tama,i,j,filas=0,columnas=0,compara=0,con1=0,diagonalP=0,diagonalS=0;
//pedimos las dimensiones de la matriz
printf("\nIngrese el tamaño de su matriz n*n\n");	
scanf("%d",&tama);	
// Declaramos la matriz	
int matriz[tama][tama];
//Llenamos la matriz
for (i = 0; i < tama ; i++)
{
	for (j = 0; j < tama; j++)
	{
		printf("Ingrese el dato en su fila y columna\n");
		scanf("%d",&matriz[i][j]);
		//Obtenemos la suma de la primerfila
	if (i==0)
	{
	compara=compara+matriz[i][j];	
	  }
	}
}
//verificamos si la suma cada fila y columna es el mismo  valor 
for (i = 0; i < tama; i++)
{
	for (j = 0; j < tama; j++)
	{
  columnas=columnas+matriz[j][i];		
  filas=filas+matriz[i][j];		
	
	if (j==j-1)
	{
	//Verficamos si la matriz es amiga o no	
if (filas!=compara && columnas!=compara)
  {
	printf("\nLa matriz no es amiga\n");
	con1++;
	filas=0;
	columnas=0;
	break;
  }else{
	filas=0;
	columnas=0;
  }	
	}
	
	}
	

}
//verificamos si la suma cada diagonal es igual al mismo valor de la suma de cada fila y columna 
if (con1==0)
{   //Sumamos diagonal principal
	for (i = 0; i < tama; i++)
	{
	diagonalP=diagonalP+matriz[i][i];	
	}
	//Sumamos diagonal secundaria
	int aux=0;
	for (i = tama-1; i >=0; i--)
	{
	diagonalS=diagonalS+matriz[i][aux];
	aux++;	
	}
	
if (diagonalS==compara && diagonalP==compara)
{
printf("La matriz es amiga\n");
printf("El resultado de la sumade cada fila,columna y diagonal es el mismo valory es :\n");
printf("%d\t",compara);	
printf("\n");
}else{
	printf("La matriz no es amiga\n");
printf("El resultado de la sumade cada fila,columna y diagonal no es el mismo valory es :\n");
	}
  }

}
