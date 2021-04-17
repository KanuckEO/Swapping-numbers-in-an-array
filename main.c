#include <stdio.h>

int main(void) {
  int a[4] = {10, 20, 30, 40};
  int b=20;
  int temp = 0;

  for(int i=0;i<4;i=i+2){
    // a[i] =10  // a[1]
    // a[i+1] = 20  //a[2]
    temp =a[i];
    a[i] = a[i+3];
    a[i+3] = temp;
    //{20,10,30,40}
  }

  for(int i=0;i<4;i++)
  {
    printf("\t%d",a[i]);
  }
}


