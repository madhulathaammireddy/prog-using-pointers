1.Program to initialize a 3×3 array
#include<studio.h>
Void main()
{
int arr1[3][3],i,j;
printf("\n\nread a 2D array of size 3 by 3 and print the matrix:\n");
Printf(".....\n");
printf("input elements in the matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("elements-[%d][%d]:",i,j);
scanf("\n the matrix is:\n");
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
printf("%d\t",arr1[i][j]);
}
printf("\n\n");
}
2.Program to find the sum of diagonal elements
#include<studio.h>
int main()
{
int i,j,rows,columns,a[10][10],sum=0;
printf ("\n please enter number of rows and columns:\n");
scanf("%d%d",&i,&j);
printf(\n please enter the matrix elements\n");
for(rows=0;rows<i;rows++)
{
for(columns=0;columns<j;columns++)
{
scanf ("%d",&a[rows][columns]);
}
for(rows=0;rows<i;rows++)
{
sum=sum+a[rows][columns];
printf("\n the sum of diagonal elements of a matrix=%d",sum);
return 0;
}
