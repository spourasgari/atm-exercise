#include <stdio.h>
main()
{
    int i, mi, am, hun, fif, twe, ten, fiv, two, one, m100, m50, m20, m10, m5, m2, r100, r50, r20, r10, r5, r2, r1;

    for(i=1;r100||r50||r20||r10||r5||r2||r1!=0;i++)
    {
     mi=i%10;
     if(mi==1)
      {
      printf("\n\nGood Morning! Welcome to a new lovely day with Sina ATM");
      r100=10;
      r50=10;
      r20=10;
      r10=10;
      r5=10;
      r2=10;
      r1=10;
      }

    printf("\nJust tell me how much do you want?! ");
    scanf("%d", &am);

    if(am>350)
    {printf("Sorry, It's more than allowed amount!");
    i=i-1;}
    else
    {
    hun=am/100;
    m100=am%100;
    fif=m100/50;
    m50=m100%50;
    twe=m50/20;
    m20=m50%20;
    ten=m20/10;
    m10=m20%10;
    fiv=m10/5;
    m5=m10%5;
    two=m5/2;
    m2=m5%2;
    one=m2/1;

    if(m100==0 && r100>0)
    {printf(" %d * 100$", hun);
    r100-=hun;}
    else
    {
        if(m50==0 && (r100>0 || r50>0))
        {printf(" %d * 100$\n %d * 50$", hun, fif);
        r100-=hun; r50-=fif;}
        else
        {
            if(m20==0 && (r100>0 || r50>0 || r20>0))
            {printf(" %d * 100$\n %d * 50$\n %d * 20$", hun, fif, twe);
            r100-=hun; r50-=fif; r20-=twe; }
            else
            {
                if(m10==0 && (r100>0 || r50>0 || r20>0 || r10>0))
                {printf(" %d * 100$\n %d * 50$\n %d * 20$\n %d * 10$", hun, fif, twe, ten);
                r100-=hun; r50-=fif; r20-=twe; r10-=ten; }
                else
                {
                    if(m5==0 && (r100>0 || r50>0 || r20>0 || r10>0 || r5>0))
                    {printf(" %d * 100$\n %d * 50$\n %d * 20$\n %d * 10$\n %d * 5$", hun, fif, twe, ten, fiv);
                    r100-=hun; r50-=fif; r20-=twe; r10-=ten; r5-=fiv; }
                    else
                    {
                        if(m2==0 && (r100>0 || r50>0 || r20>0 || r10>0 || r5>0 || r2>0))
                        {printf(" %d * 100$\n %d * 50$\n %d * 20$\n %d * 10$\n %d * 5$\n %d * 2$", hun, fif, twe, ten, fiv, two);
                        r100-=hun; r50-=fif; r20-=twe; r10-=ten; r5-=fiv; r2-=two; }
                        else
                        {
                            if(r100!=0 && (r50>0 || r20>0 || r10>0 || r5>0 || r2>0 || r1>0))
                            {printf(" %d * 100$\n %d * 50$\n %d * 20$\n %d * 10$\n %d * 5$\n %d * 2$\n %d * 1$", hun, fif, twe, ten, fiv, two, one);
                            r100-=hun; r50-=fif; r20-=twe; r10-=ten; r5-=fiv; r2-=two; r1-=one;}
                        }

                    }
                }
            }
        }
    }
    }
    }
}