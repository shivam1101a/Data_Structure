#include<stdio.h>

/*making a 5*5 2d matrix*/
/*int main()
{
int i,j,a[5][5];
for(i=0;i<=4;i++)
{
    for(j=0;j<=4;j++)
{
    printf("enter value\n");
scanf("%d",&a[i][j]);
}
}
for(i=0;i<=4;i++
)
{
    for(j=0;j<=4;j++)
{
printf(" %d ",a[i][j]);
}
printf("\n");
}
}*/


/* sum of all element of matrix*/
/*int main()
{
    int i,j,a[3][3],sum=0;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("enter value");
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
    }for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }printf("%d",sum);
}*/


/*greatest and smallest number in matrix*/
/*int main()
{
    int i,j,max,min,a[3][3];
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("enter number");
            scanf("%d",&a[i][j]);
        }
    }max=a[0][0];
    max=a[0][0];
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(max<a[i][j])
                max=a[i][j];
            else if(min>a[i][j])
                min=a[i][j];
        }printf("greatest=%d smallest=%d",max,min);
    }
}*/


/*linear search in matrix*/
/*int main()/*ask*/
/*{
    int a[3][3],i,j,choice;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("enter value");
            scanf("%d",&a[i][j]);
        }
        }
        printf("enter value of choice");
        scanf("%d",&choice);
        for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
            if(choice==a[i][j])
            {printf("%d,%d index",i,j);
            break;
            }
            }
        }if(i==3&&j==3)
        printf("invalid");
}*/


/* bubble sort in 2D*/
/*int main()
{
    int b[9],a[3][3],i,j,step,pass,temp,k;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("enter 9 numbers");
            scanf("%d",&a[i][j]);
        }
    }
    k=0;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            b[k]=a[i][j];
            k++;
        }
    }
    for(i=0;i<9;i++)
    {
        for(j=0;j<9-i-1;j++)
        {
            if(b[j]>b[j+1])
            {
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    k=0;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            a[i][j]=b[k];
        k++;
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf(" %d ",a[i][j]);
        }printf("\n");
    }
}*/

/*sum of 2 matrix*/
/*int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("enter value of a");
            scanf(" %d ",&a[i][j]);

        }printf("\n");
    }
for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++)
    {
        printf("enter value of b");
        scanf(" %d ",&b[i][j]);

    }printf("\n");
}
for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
    }
}
for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++)
    {
        printf(" %d ",c[i][j]);
    }printf("\n");
}
}*/

/*product of 2 matrix*/
/*int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("enter number a");
            scanf("%d",&a[i][j]);
        }
    }for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("enter values b");
            scanf("%d",&b[i][j]);
        }
    }for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            c[i][j]=0;
            for(k=0;k<=2;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf(" %d ",c[i][j]);
        }printf("\n");

    }
}*/

/* transpose of a matrix*/
/*int main()
{
    int a[3][3],b[3][3],i,j;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("enter values");
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<=2;j++)
    {
        for(i=0;i<=2;i++)
        {
            b[i][j]=a[j][i];
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf(" %d ",b[i][j]);
        }printf("\n");
    }
}*/


/*int main()/*sum of diagonal elements left to right*/
/*{
   int a[3][3],i,j,sum=0;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("enter values");
            scanf("%d",&a[i][j]);
        }
    }for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(i==j)
                (sum=sum+a[i][j]);
        }
    }printf("%d",sum);
}*/

/*sum of diagonal elements right to left*/
/*int main()
{
    int a[3][3],i,j,sum=0;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("enter value");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {for(j=0;j<=2;j++)
    {
        if((i+j)==2)
    sum=sum+a[i][j];
    }
    }printf("%d",sum);
}*/


/*int main()/*upper left triangular matrix sum*/
/*{
    int a[3][3],i,j,sum=0;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("enter value");
            scanf("%d",&a[i][j]);
        }
    }for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {if((i+j)<=2)
            sum=sum+a[i][j];
        }
    }printf("%d",sum);
}*/

/*int main()/*upper right triangular matrix sum*/
/*{
    int a[3][3],i,j,sum=0;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("emter values");
            scanf("%d",&a[i][j]);
        }
    }for(i=0;i<=2;i++)
    {
        for(j=0+i;j<=2;j++)
        {
            sum=sum+a[i][j];
        }
    }printf("%d",sum);
}*/


/*int main()/*lower left triangular matrix sum */
/*{
    int a[3][3],i,j,sum=0;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("enter values");
            scanf("%d",&a[i][j]);
        }
    }for(j=0;j<=2;j++)
    {
        for(i=0+j;i<=2;i++)
        {
            sum=sum+a[i][j];
        }
    }printf("%d",sum);
}*/


/*int main()/*lower right triangular matrix sum*/
/*{
    int a[3][3],i,j,sum=0;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("enter values");
            scanf("%d",&a[i][j]);
        }
    }for(j=0;j<=2;j++)
    {
        for(i=0;i<=2;i++)
        {if((i+j)>=2)
            sum=sum+a[i][j];
        }
    }printf("%d",sum);
}*/




































