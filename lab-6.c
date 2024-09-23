// Directed and Undirected Paths.

#include<stdio.h>
#include<conio.h>
void directed()
{
    int n,in,out;
    printf("enter a number of nodes: ");
    scanf("%d",&n);
    int a[n][n];
    int i ,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("enter 1 for %d ---> %d else 0:" ,i,j);
            scanf("%d",&a[i][j]);
            }
        printf("\n");
    }
    printf("Adjacency matrix is:\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d\t",a[i][j]);
        }
    printf("\n");
}
        printf("\n");
    for(i=1;i<=n;i++){
    in=0,out=0;
        for(j=1;j<=n;j++){
        if(a[i][j]==1){
        in++;
        }
    if(a[j][i]==1){
        out++;
    }
    }
    printf("%d Node Indegree:  %d\t",i,in);
    printf("%d Node Outdegree: %d\n",i,out);
    }
}

void undirected()
{

    int n,i,j,deg;
    printf("enter a number of nodes: ");
    scanf("%d",&n);
    int a[n][n];
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("enter 1 for %d ---> %d else 0:",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Adjacency matrix is:\n\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d\t",a[i][j]);
        }
    printf("\n");
    }
    printf("\n");
    for(i=1;i<=n;i++){
            deg=0;
        for(j=1;j<=n;j++){
            if(a[i][j]==1){
                ++deg;
            }
        }
       printf("%d Node Degree = %d\n",i,deg);
    }
}

int main()
{
    int a;
    printf("Enter 1.Directed \n 2.Indirected: \n");
    scanf("%d",&a);
    if(a==1){
        directed();
    }
    else if(a==2){
        undirected();
    }
    else{
        printf("error while giving number...");
    }
    return 0;

}