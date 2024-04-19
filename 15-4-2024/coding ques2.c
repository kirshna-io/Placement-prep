//Write a program to find the transpose of a matrix
#include<stdio.h>  
int main()
{  
    int r,c,i,j;  
    printf("number of rows: ");  
    scanf("%d",&r);  
    printf("number of columns: ");  
    scanf("%d",&c);  
    int m[r][c];  
    printf("elements of the matrix:\n");  
    for(i=0;i<r;i++){  
        for(j=0;j<c;j++){  
            scanf("%d",&m[i][j]);  
        }  
    }  
    for(i=0;i<r;i++){  
        for(j=0;j<c;j++){  
            int temp=m[i][j];  
            m[i][j]=m[j][i];  
            m[j][i]=temp;  
        }  
    }  
    printf("transposed matrix is:\n");  
    for(i=0;i<c;i++){  
        for(j=0;j<r;j++){  
            printf("%d ",m[i][j]);  
        }  
        printf("\n");  
    }  
} 
/*
Input:
enter number of rows :  2
enter number of columns : 3
enter elements of matrix: 1 3 4 6 7 2
Output:
  1 6
  3 7
  4 2
*/
