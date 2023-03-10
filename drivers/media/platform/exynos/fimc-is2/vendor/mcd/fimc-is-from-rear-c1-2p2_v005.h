#ifndef FIMC_IS_FROM_REAR_C1_2P2_V005_H
#define FIMC_IS_FROM_REAR_C1_2P2_V005_H

/* Header referenced section */
#define FROM_HEADER_VERSION_START_ADDR 0x40
#define FROM_HEADER_MODULE_ID_START_ADDR 0x0
#define FROM_HEADER_MODULE_ID_SIZE 0x2
#define FROM_HEADER_CAL_MAP_VER_START_ADDR 0x60
#define FROM_HEADER_ISP_SETFILE_VER_START_ADDR 0x64
#define FROM_HEADER_PROJECT_NAME_START_ADDR 0x6E
#define FROM_HEADER_CONCORD_HEADER_VER_START_ADDR 0x50
#define FROM_HEADER_ISP_BINARY_START_ADDR 0x0
#define FROM_HEADER_ISP_BINARY_END_ADDR 0x4
#define FROM_HEADER_OEM_START_ADDR 0x8
#define FROM_HEADER_OEM_END_ADDR 0xC
#define FROM_HEADER_AWB_START_ADDR 0x10
#define FROM_HEADER_AWB_END_ADDR 0x14
#define FROM_HEADER_SHADING_START_ADDR 0x18
#define FROM_HEADER_SHADING_END_ADDR 0x1C
#define FROM_HEADER_ISP_SETFILE_START_ADDR 0x20
#define FROM_HEADER_ISP_SETFILE_END_ADDR 0x24
#define FROM_HEADER_CONCORD_CAL_START_ADDR 0x28
#define FROM_HEADER_CONCORD_CAL_END_ADDR 0x2C
#define FROM_HEADER_CONCORD_BINARY_START_ADDR 0x30
#define FROM_HEADER_CONCORD_BINARY_END_ADDR 0x34
#define FROM_HEADER_CONCORD_MASTER_SETFILE_START_ADDR 0xA8
#define FROM_HEADER_CONCORD_MASTER_SETFILE_END_ADDR 0xAC
#define FROM_HEADER_CONCORD_MODE_SETFILE_START_ADDR 0xA8
#define FROM_HEADER_CONCORD_MODE_SETFILE_END_ADDR 0xAC
#define FROM_HEADER_PDAF_CAL_START_ADDR 0xB0
#define FROM_HEADER_PDAF_CAL_END_ADDR 0xB4

#define FROM_HEADER_CAL_DATA_START_ADDR 0x1000

/* Shading referenced section */
#define FROM_SHADING_LSC_I0_GAIN_ADDR 0x3006
#define FROM_SHADING_LSC_J0_GAIN_ADDR 0x3008
#define FROM_SHADING_LSC_A_GAIN_ADDR 0x300A
#define FROM_SHADING_LSC_K4_GAIN_ADDR 0x300E
#define FROM_SHADING_LSC_SCALE_GAIN_ADDR 0x3012
#define FROM_SHADING_LSC_GAIN_START_ADDR 0x3014
#define FROM_SHADING_LSC_GAIN_END_ADDR 0x49DB
#define FROM_SHADING_VER_START_ADDR 0x4FE0

/* Concord cal referenced section */
#define FROM_CONCORD_CAL_PDAF_START_ADDR 0x9000
#define FROM_CONCORD_CAL_PDAF_END_ADDR 0x91FF
#define FROM_CONCORD_XTALK_10_START_ADDR 0x9210
#define FROM_CONCORD_XTALK_10_END_ADDR 0xA1CF
#define FROM_CONCORD_XTALK_20_START_ADDR 0xA210
#define FROM_CONCORD_XTALK_20_END_ADDR 0xB1CF
#define FROM_CONCORD_XTALK_30_START_ADDR 0xB210
#define FROM_CONCORD_XTALK_30_END_ADDR 0xC1CF
#define FROM_CONCORD_XTALK_40_START_ADDR 0xC210
#define FROM_CONCORD_XTALK_40_END_ADDR 0xD1CF
#define FROM_CONCORD_XTALK_50_START_ADDR 0xD210
#define FROM_CONCORD_XTALK_50_END_ADDR 0xE1CF
#define FROM_CONCORD_XTALK_60_START_ADDR 0xE210
#define FROM_CONCORD_XTALK_60_END_ADDR 0xE20F
#define FROM_CONCORD_WCOEF_ADDR 0xF210

/* OEM referenced section */
#define FROM_OEM_AF_INF_ADDR 0x1000
#define FROM_OEM_AF_INF_ADDR 0x1008
#define FROM_OEM_VER_START_ADDR 0x1FE0

/* AWB referenced section */
#define FROM_AWB_VER_START_ADDR 0x2FE0

/* Companion Checksum referenced section */
#define FROM_CONCORD_XTALK_10_CHECKSUM_ADDR 0xF21A
#define FROM_CONCORD_XTALK_20_CHECKSUM_ADDR 0xF21E
#define FROM_CONCORD_XTALK_30_CHECKSUM_ADDR 0xF222
#define FROM_CONCORD_XTALK_40_CHECKSUM_ADDR 0xF226
#define FROM_CONCORD_XTALK_50_CHECKSUM_ADDR 0xF22A
#define FROM_CONCORD_XTALK_60_CHECKSUM_ADDR 0xF22E
#define FROM_SHADING_LSC_GAIN_CRC_ADDR 0x49DC
#define FROM_CONCORD_PDAF_CRC_ADDR 0x9200

/* ISP binary referenced section */
#define FROM_ISP_BINARY_SETFILE_START_ADDR 0x8000
#define FROM_ISP_BINARY_SETFILE_END_ADDR 0x3FFFFF

/* Checksum referenced section */
#define FROM_CHECKSUM_HEADER_ADDR 0xFFC
#define FROM_CHECKSUM_OEM_ADDR 0x1FFC
#define FROM_CHECKSUM_AWB_ADDR 0x2FFC
#define FROM_CHECKSUM_SHADING_ADDR 0x4FFC
#define FROM_CHECKSUM_PAF_CAL_ADDR 0x8FFC
#define FROM_CHECKSUM_CONCORD_CAL_ADDR 0xFFFC

/* etc section */
#define FIMC_IS_MAX_CAL_SIZE                (64 * 1024)
#define FIMC_IS_MAX_COMPANION_FW_SIZE		(200 * 1024)
#define FIMC_IS_FROM_ERASE_SIZE             (64 * 1024)
#define FIMC_IS_MAX_FW_SIZE                 (2750 * 1024)
#define FIMC_IS_MAX_SETFILE_SIZE            (1120 * 1024)
#define HEADER_CRC32_LEN                    (224)

#endif /* FIMC_IS_FROM_REAR_C1_2P2_V005_H */
