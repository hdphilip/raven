#include "platform/platform_macros.h"

#include "target/bands/433.h"

#define PIN_BUTTON_1 0

#define PIN_BEEPER 12

#define PIN_LED_1 22

#define PIN_SX127X_SCK 5
#define PIN_SX127X_MISO 19
#define PIN_SX127X_MOSI 27
#define PIN_SX127X_CS 18
#define PIN_SX127X_RST 14
#define PIN_SX127X_DIO0 26

#define SX127X_OUTPUT_TYPE SX127X_OUTPUT_PA_BOOST

#define PIN_DEFAULT_TX 29
#define PIN_DEFAULT_RX 28

#define PIN_UNUSED_TX 2
#define PIN_UNUSED_RX 35

#define PIN_USABLE_MASK (PIN_N(PIN_DEFAULT_TX) | PIN_N(PIN_DEFAULT_RX))
#define BOARD_NAME "ESP32+LoRa OMEGA"
