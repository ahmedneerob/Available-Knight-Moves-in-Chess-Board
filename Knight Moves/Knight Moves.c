#include <stdio.h>
int main()
{
    char c;
    int i,j,a,b,s[8][8],o=1,m[8];
    printf("Enter Position Of Knight In Chess Board\t");
    scanf("%c %d",&c,&b);
    a=c-97;
    b=b-1;

    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            s[i][j]=o;
            o++;
        }
    }
    printf("\nChess Board \n");
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
    printf("\n%d %d\n",a,b);
    printf("\n%d\n",s[a][b]);
    if((a-2)>=0 && (a-2)<8)
    {
        if((b-1)>=0 && (b-1)<8)
        {
            m[0]=s[a-2][b-1];
        }
        else
        {
            m[0]=0;
        }
    }
    else
    {
        m[0]=0;
    }
    if((a-2)>=0 && (a-2)<8)
    {
        if((b+1)>=0 && (b+1)<8)
        {
            m[1]=s[a-2][b+1];
        }
        else
        {
            m[1]=0;
        }
    }
    else
    {
        m[1]=0;
    }
    if((a-1)>=0 && (a-1)<8)
    {
        if((b-2)>=0 && (b-2)<8)
        {
            m[2]=s[a-1][b-2];
        }
        else
        {
            m[2]=0;
        }
    }
    else
    {
        m[2]=0;
    }
    if((a-1)>=0 && (a-1)<8)
    {
        if((b+2)>=0 && (b+2)<8)
        {
            m[3]=s[a-1][b+2];
        }
        else
        {
            m[3]=0;
        }
    }
    else
    {
        m[3]=0;
    }
    if((a+1)>=0 && (a+1)<8)
    {
        if((b-2)>=0 && (b-2)<8)
        {
            m[4]=s[a+1][b-2];
        }
        else
        {
            m[4]=0;
        }
    }
    else
    {
        m[4]=0;
    }
    if((a+1)>=0 && (a+1)<8)
    {
        if((b+2)>=0 && (b+2)<8)
        {
            m[5]=s[a+1][b+2];
        }
        else
        {
            m[5]=0;
        }
    }
    else
    {
        m[5]=0;
    }
    if((a+2)>=0 && (a+2)<8)
    {
        if((b-1)>=0 && (b-1)<8)
        {
            m[6]=s[a+2][b-1];
        }
        else
        {
            m[6]=0;
        }
    }
    else
    {
        m[6]=0;
    }
    if((a+2)>=0 && (a+2)<8)
    {
        if((b+1)>=0 && (b+1)<8)
        {
            m[7]=s[a+2][b+1];
        }
        else
        {
            m[7]=0;
        }
    }
    else
    {
        m[7]=0;
    }
    printf("Available moves in chess board\n");
    for(i=0;i<8;i++)
    {
        printf("%d ",m[i]);
    }
    printf("\n\n\n");
    return 0;
}
