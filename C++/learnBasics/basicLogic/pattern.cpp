#include<iostream>
void printSquare(int);
void printTriangle(int);
void printTriangleReverse(int);
void printTriangle1(int);
void printTriangle2(int);

using namespace std;
int main()
{
    // printSquare(5);
    // printTriangleReverse(5);
    printTriangle2(5);
    
}
void printTriangle2(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf(" ");
        }
        for(int k=n*2-i; k>=i; k--){
            printf("*");
        }
        printf("\n");
    }
}
void printTriangle1(int n){
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            printf(" ");
        }
        for(int k=1; k<=i*2-1; k++){
            printf("*");
        }
        printf("\n");
    }
}

void printTriangleReverse(int n){
    printf("\nTriangle\n");
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            // printf("*");
            printf("%d",j);
            // printf("%d",i);
        }
        printf("\n");
    }
}
void printTriangle(int n){
    printf("\nTriangle\n");
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            // printf("*");
            // printf("%d",j);
            printf("%d",i);
        }
        printf("\n");
    }
}
void printSquare(int n){
    printf("Square\n");
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
}