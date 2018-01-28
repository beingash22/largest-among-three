#include <stdio.h>

void main()
{

int a, b, c;
scanf ("%d%d%d",&a,&b,&c);

if (a>b)
{
  if(a>c && a>=0)
     printf ("%d",a);

  else if (a>c && a<0)
    printf ("0");

  else if (c>a && c>=0)
    printf ("%d",c);
  
  else if (c>a && c<0)
    printf ("0");
}

else
{
 if (b>c && b>=0)
    printf ("%d",b);

  else if (b>c && b<0)
    printf ("0");

  else if (c>b && c>=0)
    printf ("%d",c);
  
  else if (c>b && c<0)
    printf ("0");
}
}
