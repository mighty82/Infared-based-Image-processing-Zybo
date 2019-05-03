/*
* !!! DO NOT EDIT THIS FILE MANUALLY !!!
* Generated by apb_slave_gen.pl on 08.04.19; 14:55
*    based on CSV reg. file: IR_FILTERS_regs.csv
*/


/* Register: cfg_img_width */
#define CFG_IMG_WIDTH_ADDR       0x0000
#define CFG_IMG_WIDTH_RST        0x00000000
#define CFG_IMG_WIDTH_FIELD_MASK  0x0000ffff
#define CFG_IMG_WIDTH_FIELD_SHIFT 0

/* Register: cfg_img_height */
#define CFG_IMG_HEIGHT_ADDR       0x0004
#define CFG_IMG_HEIGHT_RST        0x00000000
#define CFG_IMG_HEIGHT_FIELD_MASK  0x0000ffff
#define CFG_IMG_HEIGHT_FIELD_SHIFT 0

/* Register: cfg_stride */
#define CFG_STRIDE_ADDR       0x0008
#define CFG_STRIDE_RST        0x00000000
#define CFG_STRIDE_FIELD_MASK  0x0000ffff
#define CFG_STRIDE_FIELD_SHIFT 0

/* Register: cfg_map0_ba */
#define CFG_MAP0_BA_ADDR       0x000C
#define CFG_MAP0_BA_RST        0x00000000
#define CFG_MAP0_BA_FIELD_MASK  0xffffffff
#define CFG_MAP0_BA_FIELD_SHIFT 0

/* Register: cfg_map1_ba */
#define CFG_MAP1_BA_ADDR       0x0010
#define CFG_MAP1_BA_RST        0x00000000
#define CFG_MAP1_BA_FIELD_MASK  0xffffffff
#define CFG_MAP1_BA_FIELD_SHIFT 0

/* Register: cfg_map2_ba */
#define CFG_MAP2_BA_ADDR       0x0014
#define CFG_MAP2_BA_RST        0x00000000
#define CFG_MAP2_BA_FIELD_MASK  0xffffffff
#define CFG_MAP2_BA_FIELD_SHIFT 0

/* Register: cfg_map0_en */
#define CFG_MAP0_EN_ADDR       0x0018
#define CFG_MAP0_EN_RST        0x00000000
#define CFG_MAP0_EN_FIELD_MASK  0x00000001
#define CFG_MAP0_EN_FIELD_SHIFT 0

/* Register: cfg_map1_en */
#define CFG_MAP1_EN_ADDR       0x001C
#define CFG_MAP1_EN_RST        0x00000000
#define CFG_MAP1_EN_FIELD_MASK  0x00000001
#define CFG_MAP1_EN_FIELD_SHIFT 0

/* Register: cfg_map2_en */
#define CFG_MAP2_EN_ADDR       0x0020
#define CFG_MAP2_EN_RST        0x00000000
#define CFG_MAP2_EN_FIELD_MASK  0x00000001
#define CFG_MAP2_EN_FIELD_SHIFT 0

/* Register: cfg_max_burst_length */
#define CFG_MAX_BURST_LENGTH_ADDR       0x0024
#define CFG_MAX_BURST_LENGTH_RST        0x00000000
#define CFG_MAX_BURST_LENGTH_FIELD_MASK  0x000000ff
#define CFG_MAX_BURST_LENGTH_FIELD_SHIFT 0

/* Register: cfg_reverse_byte */
#define CFG_REVERSE_BYTE_ADDR       0x0028
#define CFG_REVERSE_BYTE_RST        0x00000000
#define CFG_REVERSE_BYTE_FIELD_MASK  0x00000001
#define CFG_REVERSE_BYTE_FIELD_SHIFT 0

/* Register: cfg_blk_en */
#define CFG_BLK_EN_ADDR       0x002C
#define CFG_BLK_EN_RST        0x00000000
#define CFG_BLK_EN_FIELD_MASK  0x00000001
#define CFG_BLK_EN_FIELD_SHIFT 0

/* Register: cfg_int_ack */
#define CFG_INT_ACK_ADDR       0x0030
#define CFG_INT_ACK_RST        0x00000000
#define CFG_INT_ACK_FIELD_MASK  0x00000001
#define CFG_INT_ACK_FIELD_SHIFT 0

/* Register: cfg_pix_corr_sel */
#define CFG_PIX_CORR_SEL_ADDR       0x0034
#define CFG_PIX_CORR_SEL_RST        0x00000000
#define CFG_PIX_CORR_SEL_FIELD_MASK  0x000000ff
#define CFG_PIX_CORR_SEL_FIELD_SHIFT 0

/* Register: cfg_sharp_sel */
#define CFG_SHARP_SEL_ADDR       0x0038
#define CFG_SHARP_SEL_RST        0x00000000
#define CFG_SHARP_SEL_FIELD_MASK  0x000000ff
#define CFG_SHARP_SEL_FIELD_SHIFT 0

/* Register: cfg_median_sel */
#define CFG_MEDIAN_SEL_ADDR       0x003C
#define CFG_MEDIAN_SEL_RST        0x00000000
#define CFG_MEDIAN_SEL_FIELD_MASK  0x000000ff
#define CFG_MEDIAN_SEL_FIELD_SHIFT 0

/* Register: cfg_smooth_sel */
#define CFG_SMOOTH_SEL_ADDR       0x0040
#define CFG_SMOOTH_SEL_RST        0x00000000
#define CFG_SMOOTH_SEL_FIELD_MASK  0x000000ff
#define CFG_SMOOTH_SEL_FIELD_SHIFT 0

/* Register: cfg_laplace_sel */
#define CFG_LAPLACE_SEL_ADDR       0x0044
#define CFG_LAPLACE_SEL_RST        0x00000000
#define CFG_LAPLACE_SEL_FIELD_MASK  0x000000ff
#define CFG_LAPLACE_SEL_FIELD_SHIFT 0

/* Register: cfg_output_sel */
#define CFG_OUTPUT_SEL_ADDR       0x0048
#define CFG_OUTPUT_SEL_RST        0x00000000
#define CFG_OUTPUT_SEL_FIELD_MASK  0x000000ff
#define CFG_OUTPUT_SEL_FIELD_SHIFT 0

/* Register: cfg_pix_corr_thr */
#define CFG_PIX_CORR_THR_ADDR       0x004C
#define CFG_PIX_CORR_THR_RST        0x00000000
#define CFG_PIX_CORR_THR_FIELD_MASK  0x000000ff
#define CFG_PIX_CORR_THR_FIELD_SHIFT 0

/* Register: cfg_sharp_coef */
#define CFG_SHARP_COEF_ADDR       0x0050
#define CFG_SHARP_COEF_RST        0x00000000
#define CFG_SHARP_COEF_FIELD_MASK  0x000000ff
#define CFG_SHARP_COEF_FIELD_SHIFT 0

/* Register: cfg_test_mode_en */
#define CFG_TEST_MODE_EN_ADDR       0x0054
#define CFG_TEST_MODE_EN_RST        0x00000000
#define CFG_TEST_MODE_EN_FIELD_MASK  0x00000001
#define CFG_TEST_MODE_EN_FIELD_SHIFT 0

/* Register: cfg_bkg */
#define CFG_BKG_ADDR       0x0058
#define CFG_BKG_RST        0x00000000
#define CFG_BKG_FIELD_MASK  0x00ffffff
#define CFG_BKG_FIELD_SHIFT 0

/* Register: cfg_eof_intr_ack */
#define CFG_EOF_INTR_ACK_ADDR       0x005C
#define CFG_EOF_INTR_ACK_RST        0x00000000
#define CFG_EOF_INTR_ACK_FIELD_MASK  0x00000001
#define CFG_EOF_INTR_ACK_FIELD_SHIFT 0

/* Register: cfg_sof_intr_ack */
#define CFG_SOF_INTR_ACK_ADDR       0x0060
#define CFG_SOF_INTR_ACK_RST        0x00000000
#define CFG_SOF_INTR_ACK_FIELD_MASK  0x00000001
#define CFG_SOF_INTR_ACK_FIELD_SHIFT 0