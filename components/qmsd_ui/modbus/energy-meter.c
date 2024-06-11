#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "mbcontroller.h"          // for modbus controller
#include "modbus_params.h"         // for modbus parameters

// Modbus parameters
#define MB_PORT_NUM     2         // UART port number for modbus
#define MB_DEV_SPEED    115200    // Modbus baudrate
#define MB_PARITY       UART_PARITY_EVEN  // UART parity

// Number of Modbus parameters to read
#define MB_READ_REG_START_ADDR   0
#define MB_READ_REG_COUNT        4   // number of registers to read

// Master ID
#define MB_MASTER_ID     1

static const char *TAG = "MB_MASTER";

// Setup Modbus controller
static void setup_modbus_master()
{
    mb_communication_info_t comm_info = {
        .port = MB_PORT_STR_UART,
        .mode = MB_MODE_RTU,
        .slave_addr = MB_MASTER_ID,
        .baudrate = MB_DEV_SPEED,
        .parity = MB_PARITY
    };
    
    mb_controller_init(MB_PORT_NUM, &comm_info);   // Initialization of Modbus controller
    mb_controller_start();                         // Start Modbus controller
}

// Modbus task to read registers
void modbus_test_task(void *arg)
{
    uint16_t data[MB_READ_REG_COUNT] = {0};

    setup_modbs_master();  // Setup Modbus master

    while (1) {
        esp_err_t err = mb_controller_read_registers(MB_READ_REG_START_ADDR, (uint8_t*)&data, MB_READ_REG_COUNT);
        if (err == ESP_OK) {
            ESP_LOGI(TAG, "Read data: ");
            for (int i = 0; i < MB_READ_REG_COUNT; i++) {
                printf("Register %d: %u\n", MB_READ_REG_START_ADDR + i, data[i]);
            }
        } else {
            ESP_LOGE(TAG, "Modbus read error: %s", esp_err_to_name(err));
        }
        vTaskDelay(pdMS_TO_TICKS(1000));  // Poll every 1000 ms
    }
}

void app_main()
{
    xTaskCreate(modbus_test_task, "modbus_test_task", 2048, NULL, 10, NULL);
}

