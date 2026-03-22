#include <stdio.h>

int add(int n1,int n2){
    return n1 + n2;
}

int main(){
    int n1,n2;
    printf("ひとつ目の数字を入力してください：");
    scanf("%d",&n1);
    printf("ふたつ目の数字を入力してください:");
    scanf("%d",&n2);
    
    printf("%d+%dは%dです",n1,n2,add(n1,n2));

    return 0;
}