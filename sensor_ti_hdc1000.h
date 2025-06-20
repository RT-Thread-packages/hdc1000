
#ifndef SENSOR_TI_HDC1000_H__
#define SENSOR_TI_HDC1000_H__

#include <rtdevice.h>
#include "hdc1000_reg.h"

#define HDC1000_SLAVE_ADDR_DEFAULT       ( HDC1000_DEVICE_IIC_BUS_ADDRESS )

#if defined(RT_VERSION_CHECK)
    #if (RTTHREAD_VERSION >= RT_VERSION_CHECK(5, 0, 2))
        #define RT_SIZE_TYPE   rt_ssize_t
    #else
        #define RT_SIZE_TYPE   rt_size_t
    #endif
#endif

int rt_hw_hdc1000_init(const char *name, struct rt_sensor_config *cfg);

#endif
