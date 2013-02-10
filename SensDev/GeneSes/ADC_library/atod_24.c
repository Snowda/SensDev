unsigned int readAnalogueSpi(unsigned char mode){
	union{
		char databyte[2]; 		// declare temp array for adc data
		unsigned int result;    // declare integer for adc result
	}adc;       				//define union variable
	ADCS = LOW;					// select A/D device
	SSPBUF = 0x06; 				// output start
	bits MCP3204
	while(!(BF));
	adc.databyte[1] = SSPBUF;       // dummy read required by PIC18F4525
	SSPBUF = mode;                  // output 3 command, 5 dummy bits
	while(!(BF));
	adc.databyte[1] = (SSPBUF & 0x0F);// mask and output conversion MSBs
	SSPBUF = 0x00; 					// output dummy word
	while(!(BF));
	ADCS = HIGH;                    // de-select A/D device
	adc.databyte[0] = SSPBUF;       // output LSBs
	return adc.result;
};