#include<string.h>
#include<stdlib.h>
int n;
int a[100];
void create()
{
    int i;
    printf("Enter Array Size:\n");
    scanf("%d",&n);
    printf("Enter %d Array Element:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
}
void display()
{
    int i;
    printf("The Array Element are:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
void insert()
{
    int p,v;
    printf("Enter Position and its Value:\n");
    scanf("%d%d",&p,&v);
    a[p]=v;

}
void delete()
{int i,p;
printf("Enter the position Element:\n");
scanf("%d",&p);
for(i=p-1;i<n-1;i++)
{
    a[i]=a[i+1];
}
}
int main()
{
    char s;
    while(1)
    {
        printf("Choice a Suitable Option:\n");
        printf("A.Create\nB.Display\nC.Insert\nD.Delete\nE.Exit\n");
        scanf("%c",&s);
        switch(s){
    case'A':
        create();
            break;
        case'B':
            display();
            break;
        case'C':
            insert();
            break;
        case'D':
            delete();
            break;
        case'E':
            exit(0);
            break;
    }
}
}
