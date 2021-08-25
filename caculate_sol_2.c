#include <stdio.h>

int Add(int a, int b){
    int sum = a+b;
    return sum;
}
int Minus(int a, int b){
    int sum = a-b;
    return sum;
}

int Multiple(int a, int b){
    int sum = a*b;
    return sum;
}

int Divide(int a, int b){
    int sum = a/b;
    return sum;
}

int main(){
    int n[2] = {};
    scanf("%d %d",&n[0],&n[1]);
    printf("A + B = %d\n",Add(n[0],n[1]));
    printf("A - B = %d\n",Minus(n[0],n[1]));
    printf("A x B = %d\n",Multiple(n[0],n[1]));
    printf("A / B = %d\n",Divide(n[0],n[1]));
}
