
/*
 * Auto generated Run-Time-Environment Configuration File
 *      *** Do not modify ! ***
 *
 * Project: 'microspeech' 
 * Target:  'IMXRT1050-EVKB' 
 */

#ifndef RTE_COMPONENTS_H
#define RTE_COMPONENTS_H


/*
 * Define the Device Header File: 
 */
#define CMSIS_device_header "fsl_device_registers.h"

/* ARM::CMSIS-Compiler:I/O:STDERR:User:1.0.0 */
#define RTE_Compiler_IO_STDERR          /* Compiler I/O: STDERR */
        #define RTE_Compiler_IO_STDERR_User     /* Compiler I/O: STDERR User */
/* ARM::CMSIS-Compiler:I/O:STDIN:User:1.0.0 */
#define RTE_Compiler_IO_STDIN           /* Compiler I/O: STDIN */
        #define RTE_Compiler_IO_STDIN_User      /* Compiler I/O: STDIN User */
/* ARM::CMSIS-Compiler:I/O:STDOUT:User:1.0.0 */
#define RTE_Compiler_IO_STDOUT          /* Compiler I/O: STDOUT */
        #define RTE_Compiler_IO_STDOUT_User     /* Compiler I/O: STDOUT User */
/* ARM::CMSIS-View:Event Recorder:DAP:1.5.2 */
#define RTE_CMSIS_View_EventRecorder
        #define RTE_CMSIS_View_EventRecorder_DAP
/* ARM::CMSIS:RTOS2:Keil RTX5:Source:5.7.0 */
#define RTE_CMSIS_RTOS2                 /* CMSIS-RTOS2 */
        #define RTE_CMSIS_RTOS2_RTX5            /* CMSIS-RTOS2 Keil RTX5 */
        #define RTE_CMSIS_RTOS2_RTX5_SOURCE     /* CMSIS-RTOS2 Keil RTX5 Source */
/* Keil::CMSIS Driver:Ethernet MAC:1.6.0 */
#define RTE_Drivers_ETH_MAC0    (1U)    /* Driver ETH_MAC0 */
/* Keil::CMSIS Driver:Ethernet PHY:KSZ8081RNA:6.3.0 */
#define RTE_Drivers_PHY_KSZ8081RNA      /* Driver PHY KSZ8081RNA/RND */
/* Keil::CMSIS Driver:MCI:1.5.0 */
#define RTE_Drivers_MCI0        (1U)    /* Driver MCI0 */
        #define RTE_Drivers_MCI1        (1U)    /* Driver MCI1 */
/* Keil::CMSIS Driver:VIO:Board:IMXRT1050-EVKB:2.0.0 */
#define RTE_VIO_BOARD
        #define RTE_VIO_IMXRT1050_EVKB
/* NXP::Board Support:SDK Project Template:project_template:evkbimxrt1050:1.0.0 */
#ifndef XIP_EXTERNAL_FLASH
#define XIP_EXTERNAL_FLASH 1
#endif
#ifndef XIP_BOOT_HEADER_ENABLE
#define XIP_BOOT_HEADER_ENABLE 1
#endif
/* NXP::Device:SDK Drivers:codec:2.3.1 */
#ifndef SDK_I2C_BASED_COMPONENT_USED
#define SDK_I2C_BASED_COMPONENT_USED 1
#endif
/* NXP::Device:SDK Drivers:codec_i2c:2.1.0 */
#ifndef SDK_I2C_BASED_COMPONENT_USED
#define SDK_I2C_BASED_COMPONENT_USED 1
#endif
/* NXP::Device:SDK Drivers:wm8960:2.2.2 */
#ifndef SDK_I2C_BASED_COMPONENT_USED
#define SDK_I2C_BASED_COMPONENT_USED 1
#endif
#ifndef BOARD_USE_CODEC
#define BOARD_USE_CODEC 1
#endif
#ifndef CODEC_WM8960_ENABLE
#define CODEC_WM8960_ENABLE 
#endif
/* NXP::Device:SDK Utilities:serial_manager_uart:1.0.0 */
#ifndef SERIAL_PORT_TYPE_UART
#define SERIAL_PORT_TYPE_UART 1
#endif
/* tensorflow::Data Exchange:Serialization:flatbuffers:tensorflow:1.22.5-rc4 */
#define RTE_DataExchange_Serialization_flatbuffers     /* flatbuffers */
/* tensorflow::Data Processing:Math:gemmlowp fixed-point:tensorflow:1.22.5-rc4 */
#define RTE_DataExchange_Math_gemmlowp     /* gemmlowp */
/* tensorflow::Data Processing:Math:kissfft:tensorflow:1.22.5-rc4 */
#define RTE_DataExchange_Math_kissfft     /* kissfft */
/* tensorflow::Data Processing:Math:ruy:tensorflow:1.22.5-rc4 */
#define RTE_DataProcessing_Math_ruy     /* ruy */
/* tensorflow::Machine Learning:TensorFlow:Kernel:CMSIS-NN:1.22.5-rc4 */
#define RTE_ML_TF_LITE     /* TF */


#endif /* RTE_COMPONENTS_H */
