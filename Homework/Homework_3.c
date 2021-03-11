#include <stdio.h>
#define FALSE 0
#define TRUE 1

int main() {
  int c, num = FALSE, parentesis = FALSE, comillas = FALSE;
  while ((c = getchar()) != EOF) {
      switch(c){
      case '(':
          parentesis=TRUE;
          putchar(c);
          break;
      case ')':
          parentesis=FALSE;
          putchar(c);
          break;
      case '[':
          parentesis=TRUE;
          putchar(c);
          break;
      case ']':
          parentesis=FALSE;
          putchar(c);
          break;
      case '{':
          parentesis=TRUE;
          putchar(c);
          break;
      case '}':
          parentesis=FALSE;
          putchar(c);
          break;
      case '<':
          parentesis=TRUE;
          putchar(c);
          break;
      case '>':
          parentesis=FALSE;
          putchar(c);
          break;
      case '\"':
          putchar(c);
          comillas++;
          break;

       case '\'':
          putchar(c);
          comillas++;
          break;

      default:
        if(c!='.'&&c!=':'&&c!=';'&&c!='!'&&c!='-'&&c!='_'&&c!='\?'){
            if (parentesis==TRUE||comillas==TRUE){
            putchar(c);
            }
            else{
                if (comillas==2){
                    comillas=0;
                }
                if (c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'||c=='0'){
                    num++;
                }else{
                  num=0;
                }
                if (num==0){
                    putchar(c);
                }
                if (num==1){
                    putchar('X');
                }
            }
          }
        }
    }
    return 0;
  }
