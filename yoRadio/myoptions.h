#ifndef myoptions_h
#define myoptions_h

#define I2S_DOUT 17
#define I2S_BCLK 16
#define I2S_LRC 15 

#define VSPI FSPI // this will redefine VSPI to FSPI
#define DSP_MODEL DSP_ILI9341
#define TFT_CS 10
#define TFT_DC 9
#define TFT_RST -1
#define TFT_MOSI 11
#define TFT_MISO 13
#define TFT_SCLK 12

#define TS_MODEL TS_MODEL_XPT2046
#define TS_CS 39
#define TS_SPIPINS 40,42,41 // this will create SWSPI

/*Touch header pin connections:
MOSI(T_DIN)= 41
MISO(T_DO)= 42
SCK(T_CLK)= 40
T_CS(TS_CS)= 39,
T_IRQ - not connected 
*/

#define IR_PIN 1

#endif
