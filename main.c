#include <stdio.h>
int CntRange(int ino)
{
    int idigit=0;
    int icnt=0;

    while(ino!=0)
    {
        idigit=ino%10;
        if(idigit<7 && idigit>3)
        {
            icnt++;
        }

        ino=ino/10;
    }
    return icnt;

}
int main()
{
    int ivalue=0,iret=0;
    printf("enter number\n");
    scanf("%d",&ivalue);
    iret=CntRange(ivalue);
    printf("the number in between 3 to 7 is %d\n",iret);

    return 0;
}
