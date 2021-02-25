#include<stdio.h>

int main(){
	int c;

    while((c=getchar())!=EOF){
        if(c=='<'){
        do{
           c=getchar();
        }
        while(c!=EOF && c!='>');
    }else{
        putchar(c);
        }
    }
}
