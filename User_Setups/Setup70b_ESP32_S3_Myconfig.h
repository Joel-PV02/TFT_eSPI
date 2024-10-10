// Setup personalizado para ESP32 S3 con pantalla ILI9341

#define USER_SETUP_ID 100
// Controlador de pantalla
#define ILI9341_DRIVER

// Definición de pines (ajústalos según tu código)
#define TFT_CS   1    // Pin para Chip Select
#define TFT_MOSI 41   // Pin para MOSI
#define TFT_SCLK 40   // Pin para Reloj (SCLK)
#define TFT_MISO 16   // Pin para MISO (si es necesario)
#define TFT_DC   42   // Pin para Data/Command
#define TFT_RST  2    // Pin para Reset (si es necesario)

// Opcional: Definir para pantalla táctil si la usas
// #define TOUCH_CS 15

// Frecuencias SPI
#define SPI_FREQUENCY  40000000   // Frecuencia máxima para ILI9341
#define SPI_READ_FREQUENCY  6000000 // Frecuencia de lectura máxima
