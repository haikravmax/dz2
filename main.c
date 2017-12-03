#include <plib.h>

int main()
{
	int a = 0; 
	int btn = 0;
	TRISE = 0;
	TRISD = 1 << 5;
	
	while(1)
	{
		if (PORTD & (1 << 5))
	 	{
	 		if (btn==0)
	 		{
	 			a++;
	 			btn=1;
	 		}
	 	}
	 	else 
	 		btn=1;

	 	if (a>8)
	 	{
	 		PORTE = 0;
	 		a=0;
	 	}

	 	
	 for (int i = 0; i < a; ++i)
		{
			PORTE = 1 <<i;
		}
	}
}
