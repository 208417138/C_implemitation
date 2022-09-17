#include <stdio.h>
#include <unistd.h>
#define U8 unsigned char

//函數宣告
int L;
int j = 1;
void multi(int L);
U8 test = 0xff;
int main(void){
    scanf("%d", &L);
    (L > 0xff)?printf("invaild input !"):multi(L);
    return 0;
}

//函數實作
void multi(int L){
    U8 u8index = 0;
    while (u8index+1 <= L && u8index+1 % 0xff != 0)
    {
       while(j <= L && j <= 0xff  ){
        printf("%d * %d \t", u8index+1, j);
        ++j;
       }
       j = 1;
       u8index++;
       printf("\n");
    }
    
    return; 
}