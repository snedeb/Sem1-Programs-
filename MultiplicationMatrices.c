#include <stdio.h>
void multiplyMatrices(int mat1[10][10], int mat2[10][10], int result[10][10], int rows1, int cols1, 
int rows2, int cols2) 
{
 for (int i = 0; i < rows1; i++) 
 {
     for (int j = 0; j < cols2; j++) 
     {
        result[i][j] = 0;
        for (int k = 0; k < cols1; k++) 
        {
            result[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
 }
}
void displayMatrix(int mat[10][10], int rows, int cols) 
{
 for (int i = 0; i < rows; i++) 
 {
    for (int j = 0; j < cols; j++) 
    {
        printf("%d ", mat[i][j]);
    }
    printf("\n");
 }
}
int main() 
{
 int mat1[10][10], mat2[10][10], result[10][10];
 int rows1, cols1, rows2, cols2;
 printf("Enter the number of rows for matrix 1: ");
 scanf("%d", &rows1);
 printf("Enter the number of columns for matrix 1: ");
 scanf("%d", &cols1);
 printf("Enter elements of matrix 1:\n");
 for (int i = 0; i < rows1; i++) 
 {
    for (int j = 0; j < cols1; j++) 
    {
        scanf("%d", &mat1[i][j]);
    }
 }
 printf("Enter the number of rows for matrix 2: ");
 scanf("%d", &rows2);
 printf("Enter the number of columns for matrix 2: ");
 scanf("%d", &cols2);
 printf("Enter elements of matrix 2:\n");
 for (int i = 0; i < rows2; i++) 
 {
    for (int j = 0; j < cols2; j++) 
    {
        scanf("%d", &mat2[i][j]);
    }
 }
 if (cols1 != rows2) 
 {
    printf("Matrices cannot be multiplied.\n");
    return 0;
 }
 multiplyMatrices(mat1, mat2, result, rows1, cols1, rows2, cols2);
 printf("Result of matrix multiplication:\n");
 displayMatrix(result, rows1, cols2);
 return 0;
}
