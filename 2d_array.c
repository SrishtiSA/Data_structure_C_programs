#include<stdio.h>
#include<math.h>
void read(int a[10][10],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    return ;
}
void display(int a[10][10],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {printf("\n");
        for(j=0;j<c;j++)
            printf("%d\t",a[i][j]);
    }
    printf("\n");
    return ;
}
 int sum(int a[10][10], int r,int c)
 {
     int i,j,s;
     for(i=0;i<r;i++)
     {
         s=0;
         for(j=0;j<c;j++)
            s=s+a[i][j];
            printf("Sum of row is %d\n",s);
     }
     return s;
 }
 int main()
 {
     int a[10][10],r,c,add;
     printf("Enter the row size\n");
     scanf("%d",&r);
     printf("Enter the column size\n");
     scanf("%d",&c);
     read(a,r,c);0000
     display(a,r,c);
     add=sum(a,r,c);
     return 0;
 }

