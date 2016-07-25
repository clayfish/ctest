//
// Created by Pawan Mishra on 25-07-2016.
//

#include <stdio.h>
#include <conio.h>

int x, y ;

int main() {
  printf("Please inter two numbers");
    scanf("%d %d", &x,&y);
    if(x > y)
    {
        printf("%d is greater than %d", x,y);
    }
    else
    {
        printf("%d is less than %d or equal", x,y);
    }
    getch();
    return 0;
}
