#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,result;

    scanf("%d %d %d %d", &h1 , &m1 , &h2 , &m2);

    if((h1>=00&&h1<=23)&&(m1>=00&&m1<=59)&&(h2>=00&&h2<=23)&&(m2>=00&&m2<=59))
      {
      result=(h2*60+m2-h1*60-m1+24*60)%(24*60);
      printf("%d", result);
      }

    else
    printf("Invalid time");

return 0;
}
