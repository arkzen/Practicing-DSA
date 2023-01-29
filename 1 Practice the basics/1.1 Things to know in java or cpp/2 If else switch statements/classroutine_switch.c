#include <stdio.h>
int main()
{
    int num;
    printf("enter any number (1 to 7):");
    scanf("%d",&num);
    printf("---------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\tGONO BISHABIDYALAY\n\t\t\t\t\t\t\t\t\tCLASS ROUTINE\n\t\t\t\t\tDEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING\n\t\t\t\t\t\t\t\t\t1ST SEMESTER\n");
    printf("\n\n");
    switch(num)
    {

    case 1:
        printf("time/day\t\t8.45-9.35\t9.40-10.30\t10.35-11.25\t11.30-12.20\t12.25-1.15\n");
          printf("SATURDAY\t\tS1:LAN-116\tS1:ENV-114\tS1:MAT-113\tS1:LAN-115\tS1:CSE-112\n");
        printf("\t\t\tT-AS,R-A332\tT-NP,R-332\tT-MA,R-B316\tT- ,R-A332\tT-TA,R-B316\n");
        printf("\n");
        printf("---------------------------------------------------------------------------------------------\n");
        printf("NA=NAZNIN PAEVIN\nMA=MOUSUMI AKTER\nTA=TANIA AKTER\nAS=AYSHA SIDDIK\nSA=SHARIF AHAMED\n");
        break;
    case 2:
        printf("time/day\t8.45-9.35\t9.40-10.30\t10.35-11.25\t11.30-12.20\t12.25-1.15\t\t2.00-2.45\t2.45-3.30\n");
        printf("SUNDAY\t\t\t\tS1:ENV-114\tS1:ENV-114\tS1:CSE-111\t\t\t\tS1:CSE-112L\tS1:CSE-112L\n");
        printf("\t\t\t\tT-NP,R-B342\tT-NP,R-B342\tT-SA,R-B320\t\t\t\tT-TA,R-B316\tT-TA,R-B316\n");
        printf("---------------------------------------------------------------------------------------------\n");
        printf("\n");
        printf("NA=NAZNIN PAEVIN\nMA=MOUSUMI AKTER\nTA=TANIA AKTER\nAS=AYSHA SIDDIKA\nSA=SHARIF AHAMED\n");
        break;
    case 3:
        printf("time/day\t8.45-9.35\t9.40-10.30\t10.35-11.25\t11.30-12.20\t12.25-1.15\n");
        printf("MONDAY\t\t\t\tS1:LAN-116\tS1:CSE-112L\tS1:CSE-112L\tS1:CSE-112\n");
        printf("\t\t\t\tT-AS,R-332\tT-SA,R-B318\tT-SA,R-B318\tT-TA,R-B316\n");
        printf("\n");
        printf("---------------------------------------------------------------------------------------------\n");
        printf("NA=NAZNIN PAEVIN\nMA=MOUSUMI AKTER\nTA=TANIA AKTER\nAS=AYSHA SIDDIKA\nSA=SHARIF AHAMED\n");
        break;
    case 4:
        printf("time/day\t8.45-9.35\t9.40-10.30\t10.35-11.25\t11.30-12.20\t12.25-1.15\t2.00-2.45\n");
        printf("TUESDAY\t\t\t\t\t\t\t\t\t\tS1:CSE-112\tS1:CSE-111\n");
        printf("\t\t\t\t\t\t\t\t\t\tT-TA,R-B316\tT-SA,R-B320\n");
        printf("\n");
        printf("---------------------------------------------------------------------------------------------\n");
        printf("NA=NAZNIN PAEVIN\nMA=MOUSUMI AKTER\nTA=TANIA AKTER\nAS=AYSHA SIDDIKA\nSA=SHARIF AHAMED\n");
        break;
    case 5:
        printf("time/day\t8.45-9.35\t9.40-10.30\t10.35-11.25\t11.30-12.20\t12.25-1.15\t2.00-2.45\n");
        printf("TUESDAY\t\t\t\t\t\tS1:CSE-111\tS1:MAT-113\tS1:LAN-115\n");
        printf("\t\t\t\t\t\tT-SA,R-B332\tT-MA,R-B320\tT- R-B320\n");
        printf("\n");
        printf("---------------------------------------------------------------------------------------------\n");
        printf("NA=NAZNIN PAEVIN\nMA=MOUSUMI AKTER\nTA=TANIA AKTER\nAS=AYSHA SIDDIKA\nSA=SHARIF AHAMED\n");
        break;
    case 6:
        printf("First Semester holiday is Thursday. So Recover your working week.");
        break;
    case 7:
        printf("WOW!It's Friday.Ready for Jummah, No class there");
        break;
    default:
        printf("Error.Out of the week");
    }
    return 0;
}