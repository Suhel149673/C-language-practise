#include <stdio.h>
#include <conio.h>
int main() {
   int a=20;
   int b=5;
   int c=a%b;
   printf("%d",c);

} 
int main(){
    int a = a+5;
    printf("%d",a);
}
int main(){
    printf("Hello world");
    return 0;
}
int main(){
    int x= 10,y;
    y=--x;
    printf("%d",x);
    printf("%d",y+x);
}
int main(){
    int a=10,b=5,result;
    result=a>b || a<=b ;
    printf("%d",result);
}
int main(){
    int a,b,sum;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum is %d",sum);
}