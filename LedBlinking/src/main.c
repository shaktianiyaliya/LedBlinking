

/* Includes */
#include "stm32f0xx.h"


GPIO_InitTypeDef GPIO_LED ;

void Delay( uint32_t  x )
{
	uint32_t  i , j ;
	for( i = 0 ; i <= x ; i ++ );

		for( j = 0 ; j <= 99999 ; j ++);
}


int main(void)
{

RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOB, ENABLE);

GPIO_LED.GPIO_Pin = GPIO_Pin_12 ;
GPIO_LED.GPIO_Mode = GPIO_Mode_OUT ;
GPIO_LED.GPIO_OType = GPIO_OType_PP ;
GPIO_LED.GPIO_Speed = GPIO_Speed_50MHz ;

GPIO_Init(GPIOB , &GPIO_LED) ;


  while (1)
  {
	GPIO_WriteBit(GPIOB,GPIO_Pin_12, Bit_SET);
	Delay(10);
	GPIO_WriteBit(GPIOB,GPIO_Pin_12, Bit_RESET);
	Delay(10);

  }
}
