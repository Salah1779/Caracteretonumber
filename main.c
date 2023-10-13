#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define BL ' '
#define RC '\n'

int estnumerique(char c)
{
    if(((c<='9')&&
        (c>='0'))
       )
        return(int)1;
    return(int)0;
}
int convertInt(char c)
{
    return ((int)(c-'0'));
}
char epurerblanc()
{
    char c;
    do
    {
        c=getchar();
    }
    while(c== BL);
    return c;
}

int lireInt()
{
    char c;
    int val=0;
    c=epurerblanc();
    do
    {
        if(estnumerique(c))
            val=val*10+convertInt(c);
        else
            break;
    }while((c=getchar())!=RC);
    if(c==BL) c=epurerblanc();
     if(c==RC)return(int)val;
    //if(c!='.')
    //{
        printf("\nerreur");
        exit(-1);
    //}

}
float lirereel()
{
    char c;
    float val=0;
    int h=0,signe=1;
    c=epurerblanc();
    if((c=='+') || (c=='-'))
    {
        if(c=='-') signe=-1;
        c=getchar();
        printf("\n ggwge");
    }
    do
    {
        if(estnumerique(c))
            val=val*10+convertInt(c);
        else
            break;
        printf("\n hhhhge");

    }while((c=getchar())!=RC);
    if(c=='.')
    {

      while((c=getchar())!=RC)
     {
        if(estnumerique(c))
        {
            val=val*10+convertInt(c);
            printf("\n val=%f",val);
        }

        else
            break;
        printf("\n ......e");
        h--;
        printf("\n h= %d",h);
      }
    }
    if(c==BL) c=epurerblanc();
    if(c==RC)
    {
         printf("\n vallle");
         val=(val*(10^h))*signe;
         printf("val=%f",val);
         return(float)val;
    }

        printf("\nerreur");
        exit(-1);

}
int main()
{

printf("\n %.4f",lirereel());

    return 0;
}
