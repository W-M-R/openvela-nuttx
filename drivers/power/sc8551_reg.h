/****************************************************************************
 * drivers/power/sc8551_reg.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __SC8551_HEADER__
#define __SC8551_HEADER__

/****************************************************************************

 * Pre-processor Definitions
 ****************************************************************************/

#ifndef BIT
#if defined(_ASMLANGUAGE)
#define BIT(n)  (1 << (n))
#else
/**
 * @brief Unsigned integer with bit position @p n set (signed in
 * assembly language).
 */
#define BIT(n)  (1UL << (n))
#endif
#endif

#define BAT_OVP_ALARM       BIT(7)
#define BAT_OCP_ALARM       BIT(6)
#define BUS_OVP_ALARM       BIT(5)
#define BUS_OCP_ALARM       BIT(4)
#define BAT_UCP_ALARM       BIT(3)
#define VBUS_INSERT         BIT(2)
#define VBAT_INSERT         BIT(1)
#define ADC_DONE            BIT(0)

#define BAT_OVP_FAULT       BIT(7)
#define BAT_OCP_FAULT       BIT(6)
#define BUS_OVP_FAULT       BIT(5)
#define BUS_OCP_FAULT       BIT(4)
#define TBUS_TBAT_ALARM     BIT(3)
#define TS_BAT_FAULT        BIT(2)
#define TS_BUS_FAULT        BIT(1)
#define TS_DIE_FAULT        BIT(0)

/* below used for comm with other module */
#define BAT_OVP_FAULT_SHIFT         0
#define BAT_OCP_FAULT_SHIFT         1
#define BUS_OVP_FAULT_SHIFT         2
#define BUS_OCP_FAULT_SHIFT         3
#define BAT_THERM_FAULT_SHIFT       4
#define BUS_THERM_FAULT_SHIFT       5
#define DIE_THERM_FAULT_SHIFT       6

#define BAT_OVP_FAULT_MASK          (1 << BAT_OVP_FAULT_SHIFT)
#define BAT_OCP_FAULT_MASK          (1 << BAT_OCP_FAULT_SHIFT)
#define BUS_OVP_FAULT_MASK          (1 << BUS_OVP_FAULT_SHIFT)
#define BUS_OCP_FAULT_MASK          (1 << BUS_OCP_FAULT_SHIFT)
#define BAT_THERM_FAULT_MASK        (1 << BAT_THERM_FAULT_SHIFT)
#define BUS_THERM_FAULT_MASK        (1 << BUS_THERM_FAULT_SHIFT)
#define DIE_THERM_FAULT_MASK        (1 << DIE_THERM_FAULT_SHIFT)

#define BAT_OVP_ALARM_SHIFT         0
#define BAT_OCP_ALARM_SHIFT         1
#define BUS_OVP_ALARM_SHIFT         2
#define BUS_OCP_ALARM_SHIFT         3
#define BAT_THERM_ALARM_SHIFT       4
#define BUS_THERM_ALARM_SHIFT       5
#define DIE_THERM_ALARM_SHIFT       6
#define BAT_UCP_ALARM_SHIFT         7

#define BAT_OVP_ALARM_MASK          (1 << BAT_OVP_ALARM_SHIFT)
#define BAT_OCP_ALARM_MASK          (1 << BAT_OCP_ALARM_SHIFT)
#define BUS_OVP_ALARM_MASK          (1 << BUS_OVP_ALARM_SHIFT)
#define BUS_OCP_ALARM_MASK          (1 << BUS_OCP_ALARM_SHIFT)
#define BAT_THERM_ALARM_MASK        (1 << BAT_THERM_ALARM_SHIFT)
#define BUS_THERM_ALARM_MASK        (1 << BUS_THERM_ALARM_SHIFT)
#define DIE_THERM_ALARM_MASK        (1 << DIE_THERM_ALARM_SHIFT)
#define BAT_UCP_ALARM_MASK          (1 << BAT_UCP_ALARM_SHIFT)

#define VBAT_REG_STATUS_SHIFT       0
#define IBAT_REG_STATUS_SHIFT       1

#define VBAT_REG_STATUS_MASK        (1 << VBAT_REG_STATUS_SHIFT)
#define IBAT_REG_STATUS_MASK        (1 << VBAT_REG_STATUS_SHIFT)

/* Register 00h */
#define SC8551_REG_00                       0x00
#define SC8551_BAT_OVP_DIS_MASK             0x80
#define SC8551_BAT_OVP_DIS_SHIFT            7
#define SC8551_BAT_OVP_ENABLE               0
#define SC8551_BAT_OVP_DISABLE              1

#define SC8551_BAT_OVP_MASK                 0x3F
#define SC8551_BAT_OVP_SHIFT                0
#define SC8551_BAT_OVP_BASE                 3500
#define SC8551_BAT_OVP_LSB                  25

/* Register 01h */
#define SC8551_REG_01                       0x01
#define SC8551_BAT_OVP_ALM_DIS_MASK         0x80
#define SC8551_BAT_OVP_ALM_DIS_SHIFT        7
#define SC8551_BAT_OVP_ALM_ENABLE           0
#define SC8551_BAT_OVP_ALM_DISABLE          1

#define SC8551_BAT_OVP_ALM_MASK             0x3F
#define SC8551_BAT_OVP_ALM_SHIFT            0
#define SC8551_BAT_OVP_ALM_BASE             3500
#define SC8551_BAT_OVP_ALM_LSB              25

/* Register 02h */
#define SC8551_REG_02                       0x02
#define SC8551_BAT_OCP_DIS_MASK             0x80
#define SC8551_BAT_OCP_DIS_SHIFT            7
#define SC8551_BAT_OCP_ENABLE               0
#define SC8551_BAT_OCP_DISABLE              1

#define SC8551_BAT_OCP_MASK                 0x7F
#define SC8551_BAT_OCP_SHIFT                0
#define SC8551_BAT_OCP_BASE                 2000
#define SC8551_BAT_OCP_LSB                  100

/* Register 03h */
#define SC8551_REG_03                       0x03
#define SC8551_BAT_OCP_ALM_DIS_MASK         0x80
#define SC8551_BAT_OCP_ALM_DIS_SHIFT        7
#define SC8551_BAT_OCP_ALM_ENABLE           0
#define SC8551_BAT_OCP_ALM_DISABLE          1

#define SC8551_BAT_OCP_ALM_MASK             0x7F
#define SC8551_BAT_OCP_ALM_SHIFT            0
#define SC8551_BAT_OCP_ALM_BASE             2000
#define SC8551_BAT_OCP_ALM_LSB              100

/* Register 04h */
#define SC8551_REG_04                       0x04
#define SC8551_BAT_UCP_ALM_DIS_MASK         0x80
#define SC8551_BAT_UCP_ALM_DIS_SHIFT        7
#define SC8551_BAT_UCP_ALM_ENABLE           0
#define SC8551_BAT_UCP_ALM_DISABLE          1

#define SC8551_BAT_UCP_ALM_MASK             0x7F
#define SC8551_BAT_UCP_ALM_SHIFT            0
#define SC8551_BAT_UCP_ALM_BASE             0
#define SC8551_BAT_UCP_ALM_LSB              50

/* Register 05h */
#define SC8551_REG_05                       0x05
#define SC8551_AC_OVP_STAT_MASK             0x80
#define SC8551_AC_OVP_STAT_SHIFT            7

#define SC8551_AC_OVP_FLAG_MASK             0x40
#define SC8551_AC_OVP_FLAG_SHIFT            6

#define SC8551_AC_OVP_MASK_MASK             0x20
#define SC8551_AC_OVP_MASK_SHIFT            5

#define SC8551_VDROP_THRESHOLD_SET_MASK     0x10
#define SC8551_VDROP_THRESHOLD_SET_SHIFT    4
#define SC8551_VDROP_THRESHOLD_300MV        0
#define SC8551_VDROP_THRESHOLD_400MV        1

#define SC8551_VDROP_DEGLITCH_SET_MASK      0x08
#define SC8551_VDROP_DEGLITCH_SET_SHIFT     3
#define SC8551_VDROP_DEGLITCH_8US           0
#define SC8551_VDROP_DEGLITCH_5MS           1

#define SC8551_AC_OVP_MASK                  0x07
#define SC8551_AC_OVP_SHIFT                 0
#define SC8551_AC_OVP_BASE                  110
#define SC8551_AC_OVP_LSB                   10
#define SC8551_AC_OVP_6P5V                  65

/* Register 06h */
#define SC8551_REG_06                       0x06
#define SC8551_VBUS_PD_EN_MASK              0x80
#define SC8551_VBUS_PD_EN_SHIFT             7
#define SC8551_VBUS_PD_ENABLE               1
#define SC8551_VBUS_PD_DISABLE              0

#define SC8551_BUS_OVP_MASK                 0x7F
#define SC8551_BUS_OVP_SHIFT                0
#define SC8551_BUS_OVP_BASE                 6000
#define SC8551_BUS_OVP_LSB                  50

/* Register 07h */
#define SC8551_REG_07                       0x07
#define SC8551_BUS_OVP_ALM_DIS_MASK         0x80
#define SC8551_BUS_OVP_ALM_DIS_SHIFT        7
#define SC8551_BUS_OVP_ALM_ENABLE           0
#define SC8551_BUS_OVP_ALM_DISABLE          1

#define SC8551_BUS_OVP_ALM_MASK             0x7F
#define SC8551_BUS_OVP_ALM_SHIFT            0
#define SC8551_BUS_OVP_ALM_BASE             6000
#define SC8551_BUS_OVP_ALM_LSB              50

/* Register 08h */
#define SC8551_REG_08                       0x08
#define SC8551_BUS_OCP_DIS_MASK             0x80
#define SC8551_BUS_OCP_DIS_SHIFT            7
#define SC8551_BUS_OCP_ENABLE               0
#define SC8551_BUS_OCP_DISABLE              1

#define SC8551_IBUS_UCP_RISE_FLAG_MASK      0x40
#define SC8551_IBUS_UCP_RISE_FLAG_SHIFT     6

#define SC8551_IBUS_UCP_RISE_MASK_MASK      0x20
#define SC8551_IBUS_UCP_RISE_MASK_SHIFT     5
#define SC8551_IBUS_UCP_RISE_MASK_ENABLE    1
#define SC8551_IBUS_UCP_RISE_MASK_DISABLE   0

#define SC8551_IBUS_UCP_FALL_FLAG_MASK      0x10
#define SC8551_IBUS_UCP_FALL_FLAG_SHIFT     4

#define SC8551_BUS_OCP_MASK                 0x0F
#define SC8551_BUS_OCP_SHIFT                0
#define SC8551_BUS_OCP_BASE                 1000
#define SC8551_BUS_OCP_LSB                  250

/* Register 09h */
#define SC8551_REG_09                       0x09
#define SC8551_BUS_OCP_ALM_DIS_MASK         0x80
#define SC8551_BUS_OCP_ALM_DIS_SHIFT        7
#define SC8551_BUS_OCP_ALM_ENABLE           0
#define SC8551_BUS_OCP_ALM_DISABLE          1

#define SC8551_BUS_OCP_ALM_MASK             0x7F
#define SC8551_BUS_OCP_ALM_SHIFT            0
#define SC8551_BUS_OCP_ALM_BASE             0
#define SC8551_BUS_OCP_ALM_LSB              50

/* Register 0Ah */
#define SC8551_REG_0A                       0x0A
#define SC8551_TSHUT_FLAG_MASK              0x80
#define SC8551_TSHUT_FLAG_SHIFT             7

#define SC8551_TSHUT_STAT_MASK              0x40
#define SC8551_TSHUT_STAT_SHIFT             6

#define SC8551_VBUS_ERRORLO_STAT_MASK       0x20
#define SC8551_VBUS_ERRORLO_STAT_SHIFT      5

#define SC8551_VBUS_ERRORHI_STAT_MASK       0x10
#define SC8551_VBUS_ERRORHI_STAT_SHIFT      4

#define SC8551_SS_TIMEOUT_FLAG_MASK         0x08
#define SC8551_SS_TIMEOUT_FLAG_SHIFT        3

#define SC8551_CONV_SWITCHING_STAT_MASK     0x04
#define SC8551_CONV_SWITCHING_STAT_SHIFT    2

#define SC8551_CONV_OCP_FLAG_MASK           0x02
#define SC8551_CONV_OCP_FLAG_SHIFT          1

#define SC8551_PIN_DIAG_FALL_FLAG_MASK      0x01
#define SC8551_PIN_DIAG_FALL_FLAG_SHIFT     0

/* Register 0Bh */
#define SC8551_REG_0B                       0x0B
#define SC8551_REG_RST_MASK                 0x80
#define SC8551_REG_RST_SHIFT                7
#define SC8551_REG_RST_ENABLE               1
#define SC8551_REG_RST_DISABLE              0

#define SC8551_FSW_SET_MASK                 0x70
#define SC8551_FSW_SET_SHIFT                4
#define SC8551_FSW_SET_300KHZ               0
#define SC8551_FSW_SET_350KHZ               1
#define SC8551_FSW_SET_400KHZ               2
#define SC8551_FSW_SET_450KHZ               3
#define SC8551_FSW_SET_500KHZ               4
#define SC8551_FSW_SET_550KHZ               5
#define SC8551_FSW_SET_600KHZ               6
#define SC8551_FSW_SET_750KHZ               7

#define SC8551_WD_TIMEOUT_FLAG_MASK         0x08
#define SC8551_WD_TIMEOUT_SHIFT             3

#define SC8551_WATCHDOG_DIS_MASK            0x04
#define SC8551_WATCHDOG_DIS_SHIFT           2
#define SC8551_WATCHDOG_ENABLE              0
#define SC8551_WATCHDOG_DISABLE             1

#define SC8551_WATCHDOG_MASK                0x03
#define SC8551_WATCHDOG_SHIFT               0
#define SC8551_WATCHDOG_0P5S                0
#define SC8551_WATCHDOG_1S                  1
#define SC8551_WATCHDOG_5S                  2
#define SC8551_WATCHDOG_30S                 3

/* Register 0Ch */
#define SC8551_REG_0C                       0x0C
#define SC8551_CHG_EN_MASK                  0x80
#define SC8551_CHG_EN_SHIFT                 7
#define SC8551_CHG_ENABLE                   1
#define SC8551_CHG_DISABLE                  0

#define SC8551_MS_MASK                      0x60
#define SC8551_MS_SHIFT                     5
#define SC8551_MS_STANDALONE                0
#define SC8551_MS_SLAVE                     1
#define SC8551_MS_MASTER                    2

#define SC8551_FREQ_SHIFT_MASK              0x18
#define SC8551_FREQ_SHIFT_SHIFT             3
#define SC8551_FREQ_SHIFT_NORMINAL          0
#define SC8551_FREQ_SHIFT_POSITIVE10        1
#define SC8551_FREQ_SHIFT_NEGATIVE10        2
#define SC8551_FREQ_SHIFT_SPREAD_SPECTRUM   3

#define SC8551_TSBUS_DIS_MASK               0x04
#define SC8551_TSBUS_DIS_SHIFT              2
#define SC8551_TSBUS_ENABLE                 0
#define SC8551_TSBUS_DISABLE                1

#define SC8551_TSBAT_DIS_MASK               0x02
#define SC8551_TSBAT_DIS_SHIFT              1
#define SC8551_TSBAT_ENABLE                 0
#define SC8551_TSBAT_DISABLE                1

/* Register 0Dh */
#define SC8551_REG_0D                       0x0D
#define SC8551_BAT_OVP_ALM_STAT_MASK        0x80
#define SC8551_BAT_OVP_ALM_STAT_SHIFT       7

#define SC8551_BAT_OCP_ALM_STAT_MASK        0x40
#define SC8551_BAT_OCP_ALM_STAT_SHIFT       6

#define SC8551_BUS_OVP_ALM_STAT_MASK        0x20
#define SC8551_BUS_OVP_ALM_STAT_SHIFT       5

#define SC8551_BUS_OCP_ALM_STAT_MASK        0x10
#define SC8551_BUS_OCP_ALM_STAT_SHIFT       4

#define SC8551_BAT_UCP_ALM_STAT_MASK        0x08
#define SC8551_BAT_UCP_ALM_STAT_SHIFT       3

#define SC8551_ADAPTER_INSERT_STAT_MASK     0x04
#define SC8551_ADAPTER_INSERT_STAT_SHIFT    2

#define SC8551_VBAT_INSERT_STAT_MASK        0x02
#define SC8551_VBAT_INSERT_STAT_SHIFT       1

#define SC8551_ADC_DONE_STAT_MASK           0x01
#define SC8551_ADC_DONE_STAT_SHIFT          0
#define SC8551_ADC_DONE_STAT_COMPLETE       1
#define SC8551_ADC_DONE_STAT_NOTCOMPLETE    0

/* Register 0Eh */
#define SC8551_REG_0E                       0x0E
#define SC8551_BAT_OVP_ALM_FLAG_MASK        0x80
#define SC8551_BAT_OVP_ALM_FLAG_SHIFT       7

#define SC8551_BAT_OCP_ALM_FLAG_MASK        0x40
#define SC8551_BAT_OCP_ALM_FLAG_SHIFT       6

#define SC8551_BUS_OVP_ALM_FLAG_MASK        0x20
#define SC8551_BUS_OVP_ALM_FLAG_SHIFT       5

#define SC8551_BUS_OCP_ALM_FLAG_MASK        0x10
#define SC8551_BUS_OCP_ALM_FLAG_SHIFT       4

#define SC8551_BAT_UCP_ALM_FLAG_MASK        0x08
#define SC8551_BAT_UCP_ALM_FLAG_SHIFT       3

#define SC8551_ADAPTER_INSERT_FLAG_MASK     0x04
#define SC8551_ADAPTER_INSERT_FLAG_SHIFT    2

#define SC8551_VBAT_INSERT_FLAG_MASK        0x02
#define SC8551_VBAT_INSERT_FLAG_SHIFT       1

#define SC8551_ADC_DONE_FLAG_MASK           0x01
#define SC8551_ADC_DONE_FLAG_SHIFT          0
#define SC8551_ADC_DONE_FLAG_COMPLETE       1
#define SC8551_ADC_DONE_FLAG_NOTCOMPLETE    0

/* Register 0Fh */
#define SC8551_REG_0F                       0x0F
#define SC8551_BAT_OVP_ALM_MASK_MASK        0x80
#define SC8551_BAT_OVP_ALM_MASK_SHIFT       7
#define SC8551_BAT_OVP_ALM_MASK_ENABLE      1
#define SC8551_BAT_OVP_ALM_MASK_DISABLE     0

#define SC8551_BAT_OCP_ALM_MASK_MASK        0x40
#define SC8551_BAT_OCP_ALM_MASK_SHIFT       6
#define SC8551_BAT_OCP_ALM_MASK_ENABLE      1
#define SC8551_BAT_OCP_ALM_MASK_DISABLE     0

#define SC8551_BUS_OVP_ALM_MASK_MASK        0x20
#define SC8551_BUS_OVP_ALM_MASK_SHIFT       5
#define SC8551_BUS_OVP_ALM_MASK_ENABLE      1
#define SC8551_BUS_OVP_ALM_MASK_DISABLE     0

#define SC8551_BUS_OCP_ALM_MASK_MASK        0x10
#define SC8551_BUS_OCP_ALM_MASK_SHIFT       4
#define SC8551_BUS_OCP_ALM_MASK_ENABLE      1
#define SC8551_BUS_OCP_ALM_MASK_DISABLE     0

#define SC8551_BAT_UCP_ALM_MASK_MASK        0x08
#define SC8551_BAT_UCP_ALM_MASK_SHIFT       3
#define SC8551_BAT_UCP_ALM_MASK_ENABLE      1
#define SC8551_BAT_UCP_ALM_MASK_DISABLE     0

#define SC8551_ADAPTER_INSERT_MASK_MASK     0x04
#define SC8551_ADAPTER_INSERT_MASK_SHIFT    2
#define SC8551_ADAPTER_INSERT_MASK_ENABLE   1
#define SC8551_ADAPTER_INSERT_MASK_DISABLE  0

#define SC8551_VBAT_INSERT_MASK_MASK        0x02
#define SC8551_VBAT_INSERT_MASK_SHIFT       1
#define SC8551_VBAT_INSERT_MASK_ENABLE      1
#define SC8551_VBAT_INSERT_MASK_DISABLE     0

#define SC8551_ADC_DONE_MASK_MASK           0x01
#define SC8551_ADC_DONE_MASK_SHIFT          0
#define SC8551_ADC_DONE_MASK_ENABLE         1
#define SC8551_ADC_DONE_MASK_DISABLE        0

/* Register 10h */
#define SC8551_REG_10                       0x10
#define SC8551_BAT_OVP_FLT_STAT_MASK        0x80
#define SC8551_BAT_OVP_FLT_STAT_SHIFT       7

#define SC8551_BAT_OCP_FLT_STAT_MASK        0x40
#define SC8551_BAT_OCP_FLT_STAT_SHIFT       6

#define SC8551_BUS_OVP_FLT_STAT_MASK        0x20
#define SC8551_BUS_OVP_FLT_STAT_SHIFT       5

#define SC8551_BUS_OCP_FLT_STAT_MASK        0x10
#define SC8551_BUS_OCP_FLT_STAT_SHIFT       4

#define SC8551_TSBUS_TSBAT_ALM_STAT_MASK    0x08
#define SC8551_TSBUS_TSBAT_ALM_STAT_SHIFT   3

#define SC8551_TSBAT_FLT_STAT_MASK          0x04
#define SC8551_TSBAT_FLT_STAT_SHIFT         2

#define SC8551_TSBUS_FLT_STAT_MASK          0x02
#define SC8551_TSBUS_FLT_STAT_SHIFT         1

#define SC8551_TDIE_ALM_STAT_MASK           0x01
#define SC8551_TDIE_ALM_STAT_SHIFT          0

/* Register 11h */
#define SC8551_REG_11                       0x11
#define SC8551_BAT_OVP_FLT_FLAG_MASK        0x80
#define SC8551_BAT_OVP_FLT_FLAG_SHIFT       7

#define SC8551_BAT_OCP_FLT_FLAG_MASK        0x40
#define SC8551_BAT_OCP_FLT_FLAG_SHIFT       6

#define SC8551_BUS_OVP_FLT_FLAG_MASK        0x20
#define SC8551_BUS_OVP_FLT_FLAG_SHIFT       5

#define SC8551_BUS_OCP_FLT_FLAG_MASK        0x10
#define SC8551_BUS_OCP_FLT_FLAG_SHIFT       4

#define SC8551_TSBUS_TSBAT_ALM_FLAG_MASK    0x08
#define SC8551_TSBUS_TSBAT_ALM_FLAG_SHIFT   3

#define SC8551_TSBAT_FLT_FLAG_MASK          0x04
#define SC8551_TSBAT_FLT_FLAG_SHIFT         2

#define SC8551_TSBUS_FLT_FLAG_MASK          0x02
#define SC8551_TSBUS_FLT_FLAG_SHIFT         1

#define SC8551_TDIE_ALM_FLAG_MASK           0x01
#define SC8551_TDIE_ALM_FLAG_SHIFT          0

/* Register 12h */
#define SC8551_REG_12                       0x12
#define SC8551_BAT_OVP_FLT_MASK_MASK        0x80
#define SC8551_BAT_OVP_FLT_MASK_SHIFT       7
#define SC8551_BAT_OVP_FLT_MASK_ENABLE      1
#define SC8551_BAT_OVP_FLT_MASK_DISABLE     0

#define SC8551_BAT_OCP_FLT_MASK_MASK        0x40
#define SC8551_BAT_OCP_FLT_MASK_SHIFT       6
#define SC8551_BAT_OCP_FLT_MASK_ENABLE      1
#define SC8551_BAT_OCP_FLT_MASK_DISABLE     0

#define SC8551_BUS_OVP_FLT_MASK_MASK        0x20
#define SC8551_BUS_OVP_FLT_MASK_SHIFT       5
#define SC8551_BUS_OVP_FLT_MASK_ENABLE      1
#define SC8551_BUS_OVP_FLT_MASK_DISABLE     0

#define SC8551_BUS_OCP_FLT_MASK_MASK        0x10
#define SC8551_BUS_OCP_FLT_MASK_SHIFT       4
#define SC8551_BUS_OCP_FLT_MASK_ENABLE      1
#define SC8551_BUS_OCP_FLT_MASK_DISABLE     0

#define SC8551_TSBUS_TSBAT_ALM_MASK_MASK    0x08
#define SC8551_TSBUS_TSBAT_ALM_MASK_SHIFT   3
#define SC8551_TSBUS_TSBAT_ALM_MASK_ENABLE  1
#define SC8551_TSBUS_TSBAT_ALM_MASK_DISABLE 0

#define SC8551_TSBAT_FLT_MASK_MASK          0x04
#define SC8551_TSBAT_FLT_MASK_SHIFT         2
#define SC8551_TSBAT_FLT_MASK_ENABLE        1
#define SC8551_TSBAT_FLT_MASK_DISABLE       0

#define SC8551_TSBUS_FLT_MASK_MASK          0x02
#define SC8551_TSBUS_FLT_MASK_SHIFT         1
#define SC8551_TSBUS_FLT_MASK_ENABLE        1
#define SC8551_TSBUS_FLT_MASK_DISABLE       0

#define SC8551_TDIE_ALM_MASK_MASK           0x01
#define SC8551_TDIE_ALM_MASK_SHIFT          0
#define SC8551_TDIE_ALM_MASK_ENABLE         1
#define SC8551_TDIE_ALM_MASK_DISABLE        0

/* Register 13h */
#define SC8551_REG_13                       0x13
#define SC8551_DEV_ID_MASK                  0x0F
#define SC8551_DEV_ID_SHIFT                 0

/* Register 14h */
#define SC8551_REG_14                       0x14
#define SC8551_ADC_EN_MASK                  0x80
#define SC8551_ADC_EN_SHIFT                 7
#define SC8551_ADC_ENABLE                   1
#define SC8551_ADC_DISABLE                  0

#define SC8551_ADC_RATE_MASK                0x40
#define SC8551_ADC_RATE_SHIFT               6
#define SC8551_ADC_RATE_CONTINOUS           0
#define SC8551_ADC_RATE_ONESHOT             1

#define SC8551_IBUS_ADC_DIS_MASK            0x01
#define SC8551_IBUS_ADC_DIS_SHIFT           0
#define SC8551_IBUS_ADC_ENABLE              0
#define SC8551_IBUS_ADC_DISABLE             1

/* Register 15h */
#define SC8551_REG_15                       0x15
#define SC8551_VBUS_ADC_DIS_MASK            0x80
#define SC8551_VBUS_ADC_DIS_SHIFT           7
#define SC8551_VBUS_ADC_ENABLE              0
#define SC8551_VBUS_ADC_DISABLE             1

#define SC8551_VAC_ADC_DIS_MASK             0x40
#define SC8551_VAC_ADC_DIS_SHIFT            6
#define SC8551_VAC_ADC_ENABLE               0
#define SC8551_VAC_ADC_DISABLE              1

#define SC8551_VOUT_ADC_DIS_MASK            0x20
#define SC8551_VOUT_ADC_DIS_SHIFT           5
#define SC8551_VOUT_ADC_ENABLE              0
#define SC8551_VOUT_ADC_DISABLE             1

#define SC8551_VBAT_ADC_DIS_MASK            0x10
#define SC8551_VBAT_ADC_DIS_SHIFT           4
#define SC8551_VBAT_ADC_ENABLE              0
#define SC8551_VBAT_ADC_DISABLE             1

#define SC8551_IBAT_ADC_DIS_MASK            0x08
#define SC8551_IBAT_ADC_DIS_SHIFT           3
#define SC8551_IBAT_ADC_ENABLE              0
#define SC8551_IBAT_ADC_DISABLE             1

#define SC8551_TSBUS_ADC_DIS_MASK           0x04
#define SC8551_TSBUS_ADC_DIS_SHIFT          2
#define SC8551_TSBUS_ADC_ENABLE             0
#define SC8551_TSBUS_ADC_DISABLE            1

#define SC8551_TSBAT_ADC_DIS_MASK           0x02
#define SC8551_TSBAT_ADC_DIS_SHIFT          1
#define SC8551_TSBAT_ADC_ENABLE             0
#define SC8551_TSBAT_ADC_DISABLE            1

#define SC8551_TDIE_ADC_DIS_MASK            0x01
#define SC8551_TDIE_ADC_DIS_SHIFT           0
#define SC8551_TDIE_ADC_ENABLE              0
#define SC8551_TDIE_ADC_DISABLE             1

/* Register 16h */
#define SC8551_REG_16                       0x16
#define SC8551_IBUS_POL_H_MASK              0x0F
#define SC8551_IBUS_ADC_LSB                 1.5625

/* Register 17h */
#define SC8551_REG_17                       0x17
#define SC8551_IBUS_POL_L_MASK              0xFF

/* Register 18h */
#define SC8551_REG_18                       0x18
#define SC8551_VBUS_POL_H_MASK              0x0F
#define SC8551_VBUS_ADC_LSB                 3.75

/* Register 19h */
#define SC8551_REG_19                       0x19
#define SC8551_VBUS_POL_L_MASK              0xFF

/* Register 1Ah */
#define SC8551_REG_1A                       0x1A
#define SC8551_VAC_POL_H_MASK               0x0F
#define SC8551_VAC_ADC_LSB                  5

/* Register 1Bh */
#define SC8551_REG_1B                       0x1B
#define SC8551_VAC_POL_L_MASK               0xFF

/* Register 1Ch */
#define SC8551_REG_1C                       0x1C
#define SC8551_VOUT_POL_H_MASK              0x0F
#define SC8551_VOUT_ADC_LSB                 1.25

/* Register 1Dh */
#define SC8551_REG_1D                       0x1D
#define SC8551_VOUT_POL_L_MASK              0x0F

/* Register 1Eh */
#define SC8551_REG_1E                       0x1E
#define SC8551_VBAT_POL_H_MASK              0x0F
#define SC8551_VBAT_ADC_LSB                 1.25*1.005

/* Register 1Fh */
#define SC8551_REG_1F                       0x1F
#define SC8551_VBAT_POL_L_MASK              0xFF

/* Register 20h */
#define SC8551_REG_20                       0x20
#define SC8551_IBAT_POL_H_MASK              0x0F
#define SC8551_IBAT_ADC_LSB                 3.125

/* Register 21h */
#define SC8551_REG_21                       0x21
#define SC8551_IBAT_POL_L_MASK              0xFF

/* Register 22h */
#define SC8551_REG_22                       0x22
#define SC8551_TSBUS_POL_H_MASK             0x03
#define SC8551_TSBUS_ADC_LSB                0.09766

/* Register 23h */
#define SC8551_REG_23                       0x23
#define SC8551_TSBUS_POL_L_MASK             0xFF

/* Register 24h */
#define SC8551_REG_24                       0x24
#define SC8551_TSBAT_POL_H_MASK             0x03
#define SC8551_TSBAT_ADC_LSB                0.09766

/* Register 25h */
#define SC8551_REG_25                       0x25
#define SC8551_TSBAT_POL_L_MASK             0xFF

/* Register 26h */
#define SC8551_REG_26                       0x26
#define SC8551_TDIE_POL_H_MASK              0x01
#define SC8551_TDIE_ADC_LSB                 0.5

/* Register 27h */
#define SC8551_REG_27                       0x27
#define SC8551_TDIE_POL_L_MASK              0xFF

/* Register 28h */
#define SC8551_REG_28                       0x28
#define SC8551_TSBUS_FLT1_MASK              0xFF
#define SC8551_TSBUS_FLT1_SHIFT             0
#define SC8551_TSBUS_FLT1_BASE              0
#define SC8551_TSBUS_FLT1_LSB               0.19531

/* Register 29h */
#define SC8551_REG_29                       0x29
#define SC8551_TSBAT_FLT0_MASK              0xFF
#define SC8551_TSBAT_FLT0_SHIFT             0
#define SC8551_TSBAT_FLT0_BASE              0
#define SC8551_TSBAT_FLT0_LSB               0.19531

/* Register 2Ah */
#define SC8551_REG_2A                       0x2A
#define SC8551_TDIE_ALM_MASK                0xFF
#define SC8551_TDIE_ALM_SHIFT               0
#define SC8551_TDIE_ALM_BASE                25
#define SC8551_TDIE_ALM_LSB                 5  /* careful multiply is used for calc */

/* Register 2Bh */
#define SC8551_REG_2B                       0x2B
#define SC8551_SS_TIMEOUT_SET_MASK          0xE0
#define SC8551_SS_TIMEOUT_SET_SHIFT         5
#define SC8551_SS_TIMEOUT_DISABLE           0
#define SC8551_SS_TIMEOUT_12P5MS            1
#define SC8551_SS_TIMEOUT_25MS              2
#define SC8551_SS_TIMEOUT_50MS              3
#define SC8551_SS_TIMEOUT_100MS             4
#define SC8551_SS_TIMEOUT_400MS             5
#define SC8551_SS_TIMEOUT_1500MS            6
#define SC8551_SS_TIMEOUT_100000MS          7

#define SC8551_EN_REGULATION_MASK           0x10
#define SC8551_EN_REGULATION_SHIFT          4
#define SC8551_EN_REGULATION_ENABLE         1
#define SC8551_EN_REGULATION_DISABLE        0

#define SC8551_VOUT_OVP_DIS_MASK            0x08
#define SC8551_VOUT_OVP_DIS_SHIFT           3
#define SC8551_VOUT_OVP_ENABLE              1
#define SC8551_VOUT_OVP_DISABLE             0

#define SC8551_IBUS_UCP_RISE_TH_MASK        0x04
#define SC8551_IBUS_UCP_RISE_TH_SHIFT       2
#define SC8551_IBUS_UCP_RISE_150MA          0
#define SC8551_IBUS_UCP_RISE_250MA          1

#define SC8551_SET_IBAT_SNS_RES_MASK        0x02
#define SC8551_SET_IBAT_SNS_RES_SHIFT       1
#define SC8551_SET_IBAT_SNS_RES_2MHM        0
#define SC8551_SET_IBAT_SNS_RES_5MHM        1

#define SC8551_VAC_PD_EN_MASK               0x01
#define SC8551_VAC_PD_EN_SHIFT              0
#define SC8551_VAC_PD_ENABLE                1
#define SC8551_VAC_PD_DISABLE               0

/* Register 2Ch */
#define SC8551_REG_2C                       0x2C
#define SC8551_IBAT_REG_MASK                0xC0
#define SC8551_IBAT_REG_SHIFT               6
#define SC8551_IBAT_REG_200MA               0
#define SC8551_IBAT_REG_300MA               1
#define SC8551_IBAT_REG_400MA               2
#define SC8551_IBAT_REG_500MA               3
#define SC8551_VBAT_REG_MASK                0x30
#define SC8551_VBAT_REG_SHIFT               4
#define SC8551_VBAT_REG_50MV                0
#define SC8551_VBAT_REG_100MV               1
#define SC8551_VBAT_REG_150MV               2
#define SC8551_VBAT_REG_200MV               3

#define SC8551_VBAT_REG_ACTIVE_STAT_MASK    0x08
#define SC8551_IBAT_REG_ACTIVE_STAT_MASK    0x04
#define SC8551_VDROP_OVP_ACTIVE_STAT_MASK   0x02
#define SC8551_VOUT_OVP_ACTIVE_STAT_MASK    0x01

#define SC8551_REG_2D                       0x2D
#define SC8551_VBAT_REG_ACTIVE_FLAG_MASK    0x80
#define SC8551_IBAT_REG_ACTIVE_FLAG_MASK    0x40
#define SC8551_VDROP_OVP_FLAG_MASK          0x20
#define SC8551_VOUT_OVP_FLAG_MASK           0x10
#define SC8551_VBAT_REG_ACTIVE_MASK_MASK    0x08
#define SC8551_IBAT_REG_ACTIVE_MASK_MASK    0x04
#define SC8551_VDROP_OVP_MASK_MASK          0x02
#define SC8551_VOUT_OVP_MASK_MASK           0x01

#define SC8551_REG_2E                       0x2E
#define SC8551_IBUS_LOW_DG_MASK             0x08
#define SC8551_IBUS_LOW_DG_SHIFT            3
#define SC8551_IBUS_LOW_DG_10US             0
#define SC8551_IBUS_LOW_DG_5MS              1

#define SC8551_REG_2F                       0x2F
#define SC8551_PMID2OUT_UVP_FLAG_MASK       0x08
#define SC8551_PMID2OUT_OVP_FLAG_MASK       0x04
#define SC8551_PMID2OUT_UVP_STAT_MASK       0x02
#define SC8551_PMID2OUT_OVP_STAT_MASK       0x01

#define SC8551_REG_30                       0x30
#define SC8551_IBUS_REG_EN_MASK             0x80
#define SC8551_IBUS_REG_EN_SHIFT            7
#define SC8551_IBUS_REG_ENABLE              1
#define SC8551_IBUS_REG_DISABLE             0
#define SC8551_IBUS_REG_ACTIVE_STAT_MASK    0x40
#define SC8551_IBUS_REG_ACTIVE_FLAG_MASK    0x20
#define SC8551_IBUS_REG_ACTIVE_MASK_MASK    0x10
#define SC8551_IBUS_REG_ACTIVE_MASK_SHIFT   4
#define SC8551_IBUS_REG_ACTIVE_NOT_MASK     0
#define SC8551_IBUS_REG_ACTIVE_MASK         1
#define SC8551_IBUS_REG_MASK                0x0F
#define SC8551_IBUS_REG_SHIFT               0
#define SC8551_IBUS_REG_BASE                1000
#define SC8551_IBUS_REG_LSB                 250

#define SC8551_REG_31                       0x31
#define SC8551_CHARGE_MODE_MASK             0x01
#define SC8551_CHARGE_MODE_SHIFT            0
#define SC8551_CHARGE_MODE_2_1              0
#define SC8551_CHARGE_MODE_1_1              1

#define SC8551_REG_34                       0x34
#define SC8551_REG_MAX                      0x35

#endif
