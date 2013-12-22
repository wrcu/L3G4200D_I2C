#include "stm32f4_discovery.h"
#include <stdio.h>

int main(void)
{
	int i;
	float a = 1.2;
	float b = 1.8;
	USART3_Config();
	//USART3_printf(USART3, "\r\n This is a USART3_printf demo \r\n");
	//USART3_printf(USART3, "\r\n ("__DATE__" - "__TIME__") \r\n");

	int c = a * 10;
	{
		USART3_printf(">>>>>\n");
		for(i=0; i<30000000; i++);
		printf("\r\n this is a printf demo \r\n");
		printf("\r\n ("__DATE__" - "__TIME__") \r\n");
		printf("10 = %d\r\n", 10);
		printf("10 = %d\r\n", -10);
		if(b > a) printf("b > a\n");
		printf("c = %d\n", c);
		printf("a = %d\n", (int)(a*10));
//		printf("b = %f\n", b);
//		printf("a + b = %f\n", a+b);
//		printf("a + b = %d\n", a+b);
	}
}

