#include <stdio.h>

void OneToTen( int number );
void TenToTwenty ( int number );
void TwentyToOneHundred ( int number );
int tens ( int number );

int main()
{
    int number;
    scanf("%d", &number);

    if ( number <= 10 )
    {
        OneToTen(number);
    }
    else if ( number <= 20 )
    {
        TenToTwenty(number);
    }
    else if ( number < 99 )
    {
        TwentyToOneHundred(number);
    }

    return 0;
}

void OneToTen( int number )
{
    switch(number)
    {
    case 1:
        printf("edno");
        break;
    case 2:
        printf("dve");
        break;
    case 3:
        printf("tri");
        break;
    case 4:
        printf("chetiri");
        break;
    case 5:
        printf("pet");
        break;
    case 6:
        printf("shest");
        break;
    case 7:
        printf("sedem");
        break;
    case 8:
        printf("osem");
        break;
    case 9:
        printf("devet");
        break;
    case 10:
        printf("deset");
        break;
    }
}

void TenToTwenty ( int number )
{
    switch(number)
    {
    case 11:
        printf("edinadeset");
        break;
    case 12:
        printf("dvanadeset");
        break;
    case 13:
        printf("trinadeset");
        break;
    case 14:
        printf("chetirinadeset");
        break;
    case 15:
        printf("petnadeset");
        break;
    case 16:
        printf("shestnadeset");
        break;
    case 17:
        printf("sedemnadeset");
        break;
    case 18:
        printf("osemnadeset");
        break;
    case 19:
        printf("devetnadeset");
        break;
    }
}

int tens ( int number )
{
    int tens;
    while ( number != 0 )
    {
        tens = number % 10;
        number /= 10;
    }
    return tens;
}

void TwentyToOneHundred ( int number )
{
	int temp;
	
    switch(tens(number))
    {
    case 2:
        printf("dvadeset");
        break;
    case 3:
        printf("trideset");
        break;
    case 4:
        printf("chetirideset");
        break;
    case 5:
        printf("petdeset");
        break;
    case 6:
        printf("shestdeset");
        break;
    case 7:
        printf("sedemdeset");
        break;
    case 8:
        printf("osemdeset");
        break;
    case 9:
        printf("devetdeset");
        break;
    }

	temp = number % 10;

	if ( temp != 0 )
	{
		printf(" i ");
		OneToTen(temp);
	}
}
