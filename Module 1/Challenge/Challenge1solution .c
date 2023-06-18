<<<<<<< HEAD
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#define MAX_PACKET_DATA_LENGTH (50)

typedef struct data_packet_t {
    uint8_t id;
    uint8_t data_length;
    uint8_t data[MAX_PACKET_DATA_LENGTH];
    uint16_t crc;
} data_packet_t;

uint16_t calculateCRC(const uint8_t *data, size_t length) {
    uint16_t crc = 0xFFFF;  
    
    for (size_t i = 0; i < length; i++) {
        crc ^= (uint16_t)data[i];  
        
        for (int j = 0; j < 8; j++) {
            if (crc & 0x0001) {
                crc >>= 1;
                crc ^= 0xA001;  
            } else {
                crc >>= 1;
            }
        }
    }
    
    return crc;
}
=======
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#define MAX_PACKET_DATA_LENGTH (50)

typedef struct data_packet_t {
    uint8_t id;
    uint8_t data_length;
    uint8_t data[MAX_PACKET_DATA_LENGTH];
    uint16_t crc;
} data_packet_t;

uint16_t calculateCRC(const uint8_t *data, size_t length) {
    uint16_t crc = 0xFFFF;  
    
    for (size_t i = 0; i < length; i++) {
        crc ^= (uint16_t)data[i];  
        
        for (int j = 0; j < 8; j++) {
            if (crc & 0x0001) {
                crc >>= 1;
                crc ^= 0xA001;  
            } else {
                crc >>= 1;
            }
        }
    }
    
    return crc;
}
>>>>>>> 089430f4b510465f33fd33fbe6b1811cfde42ab1
