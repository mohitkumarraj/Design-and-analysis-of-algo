#include<stdio.h>
#include<conio.h>
void main()
{

int mat1[20][20],mat2[20][20],mat3[20][20];
int i,j,k;
int row1,col1,row2,col2;
printf("Enter the row and columns of matrix 1\n ");
scanf("%d %d",&row1,&col1);

printf("enter the element of matrix 1\n");
for(i=0;i<row1;i++)
{
for(j=0;j<col1;j++)
{
scanf("%d",&mat1[i][j]);
}
}

for(i=0;i<row1;i++)
{
for(j=0;j<col1;j++)
{
printf(" %d ",mat1[i][j]);
}
printf("\n");
}

printf("Enter the row and columns of matrix 2\n ");
scanf("%d %d",&row2,&col2);
printf("enter the element of matrix 1\n");
for(i=0;i<row2;i++)
{
for(j=0;j<col2;j++)
{
scanf("%d",&mat2[i][j]);
}
}



for(i=0;i<row2;i++)
{
for(j=0;j<col2;j++)
{
printf(" %d ",mat2[i][j]);
}
printf("\n");
}



if(col1==row2){
	
	print("Mulitplication of matrix=")
	 for(i=0; i<row1; i++)
        {
            for(j=0; j<col2; j++)
            {
                mat3[i][j]=0;
                for(k=0; k<row1; k++){
				
                    mat3[i][j]+=mat1[i][k]*mat2[k][j];
                 }
				printf("%d  ",mat3[i][j]);
            }
            printf("\n");
        }

 

//printf("\nmultiplication matrix");
//		for(i=0;i<col1;i++){
//		   for(j=0;j<row2;j++)
//	      	printf(" %d ",mat3[i][j]);
//		printf("\n");
//		}

}else
{
printf("multiplication  cannot occur\n" );
}

getch();

}
