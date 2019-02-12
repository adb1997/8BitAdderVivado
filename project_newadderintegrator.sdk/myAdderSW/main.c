#include "xparameters.h"
#include "xil_io.h"
#include "xbasic_types.h"

int main(){

	u32 adder_out;

	xil_printf("Start of IP adder 8 bit \n\n\r");

	Xil_Out32(XPAR_MYIPADDER8BIT_0_S01_AXI_BASEADDR, 0x00000301);
	adder_out= Xil_In32(XPAR_MYIPADDER8BIT_0_S01_AXI_BASEADDR+4);

	xil_printf("A=1  B=3  S=%d\n\r", adder_out);




	return 0;


}
