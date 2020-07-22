#include "BluetoothCommon.h"

// NRF52 wants these constants as byte arrays
// Generated here https://yupana-engineering.com/online-uuid-to-c-array-converter - but in REVERSE BYTE ORDER
const uint8_t MESH_SERVICE_UUID_16[16u] = {0xfd, 0xea, 0x73, 0xe2, 0xca, 0x5d, 0xa8, 0x9f,
                                           0x1f, 0x46, 0xa8, 0x15, 0x18, 0xb2, 0xa1, 0x6b};
const uint8_t TORADIO_UUID_16[16u] = {0xe7, 0x01, 0x44, 0x12, 0x66, 0x78, 0xdd, 0xa1,
                                      0xad, 0x4d, 0x9e, 0x12, 0xd2, 0x76, 0x5c, 0xf7};
const uint8_t FROMRADIO_UUID_16[16u] = {0xd5, 0x54, 0xe4, 0xc5, 0x25, 0xc5, 0x31, 0xa5,
                                        0x55, 0x4a, 0x02, 0xee, 0xc2, 0xbc, 0xa2, 0x8b};
const uint8_t FROMNUM_UUID_16[16u] = {0x53, 0x44, 0xe3, 0x47, 0x75, 0xaa, 0x70, 0xa6,
                                      0x66, 0x4f, 0x00, 0xa8, 0x8c, 0xa1, 0x9d, 0xed};