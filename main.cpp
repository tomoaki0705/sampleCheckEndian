#include <iostream>
#include <iomanip>

volatile unsigned int original = 0xfedc4321;

int main()
{
	unsigned char *p = (unsigned char*)&original;
	std::cout << "[0]:0x" << std::hex << (unsigned int)*(p  ) << std::endl;
	std::cout << "[1]:0x" << std::hex << (unsigned int)*(p+1) << std::endl;
	std::cout << "[2]:0x" << std::hex << (unsigned int)*(p+2) << std::endl;
	std::cout << "[3]:0x" << std::hex << (unsigned int)*(p+3) << std::endl;
	return 0;
}
