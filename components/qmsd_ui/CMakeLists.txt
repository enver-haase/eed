file(GLOB SOURCES *.c ./ui/*.c ./res/*.c ./modbus/*.c ./gpio/*.c ./lsio/*.c)

idf_component_register(SRCS ${SOURCES}
                       INCLUDE_DIRS . ./ui ./res ./modbus ./gpio ./lsio
                       REQUIRES lvgl REQUIRES qmsd_init aw9523
                       )

