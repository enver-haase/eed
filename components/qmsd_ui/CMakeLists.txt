file(GLOB SOURCES *.c ./ui/*.c ./res/*.c ./modbus/*.c ./gpio/*.c)

idf_component_register(SRCS ${SOURCES}
                       INCLUDE_DIRS . ./ui ./res ./modbus ./gpio
                       REQUIRES lvgl REQUIRES qmsd_init
                       )

