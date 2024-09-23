// Set Operation
#include<stdio.h>
#include<conio.h>

void initialize_set(int set1[50]){
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    set1[0]=n;
    printf("Enter the elements: ");
    for(i=1;i<=set1[0];i++){
        scanf("%d",&set1[i]);
    }
}

void display(int set1[50]){
    int i;
    for(i=1;i<=set1[0];i++){
        printf("%d\t", set1[i]);
    }
    printf("\n");
}

void unionn(int set1[50],int set2[50]){
    int unio[50],i;
    unio[0]=set1[0];
    for(i=1;i<=set1[0];i++){
        unio[i]=set1[i];
    }
    for(i=1;i<=set2[0];i++){
        if(!member(set1,set2[i])){
            unio[++unio[0]]=set2[i];
        }
    }
    printf("\nUnion of two sets: \n");
    display(unio);
}

void intersection(int set1[50], int set2[50]){
    int intr[50],i,e=0;
    for(i=1;i<=set2[0];i++){
        if(member(set1,set2[i])){
            intr[++e]=set2[i];
        }
    }
    intr[0]=e;
    printf("\nIntersection of two sets: \n");
    display(intr);
}

void difference(int set1[50],int set2[50]){
    int i,diff[50],e=0;
    for(i=1;i<=set1[0];i++){
        if(!member(set2,set1[i])){
            diff[++e]=set1[i];
        }
    }
    diff[0]=e;
    printf("\nDifference \n");
    display(diff);
}

void cartesian(int set1[50],int set2[50]){
    int i,j;
    printf("\nCartesian product of two sets: \n");
    for(i=1;i<=set1[0];i++){
        for(j=1;j<=set2[0];j++){
            printf("(%d,%d)\n",set1[i],set2[j]);
        }
    }
}

int member(int set1[50], int value){
    int i;
    for(i=1;i<=set1[0];i++){
        if(set1[i]==value){
            return 1;
        }
    }
    return 0;
}

int main(){
    int set1[50],set2[50];
    initialize_set(set1);
    display(set1);
    initialize_set(set2);
    display(set2);
    unionn(set1,set2);
    intersection(set1,set2);
    difference(set1,set2);
    cartesian(set1,set2);
    getch();
    return 0;
}