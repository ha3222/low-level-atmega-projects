#define DDRA (*(volatile unsigned char*)0x3A)
#define PORTA (*(volatile unsigned char*)0x3B)
#define PINA (*(volatile unsigned char*)0x39)




int main(void)
{
    DDRA=0XFF;
	PORTA=0XFF;
    while (1) 
    {
    }
}

