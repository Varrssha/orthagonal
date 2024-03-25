#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num=n*n;
    if(num%10==n)
    {
        printf("orthagonal");
    }
    else{
        printf("not an orthagonal");
    }    
}