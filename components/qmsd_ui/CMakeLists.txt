file(GLOB SOURCES *.c ./ui/*.c ./res/*.c)

idf_component_register(SRCS ${SOURCES}
                       INCLUDE_DIRS . ./ui ./res ./modbus
                       REQUIRES lvgl REQUIRES qmsd_init
                       )

