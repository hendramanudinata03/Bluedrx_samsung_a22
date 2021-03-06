#ifndef __S6E3FC3_FREQ_H__
#define __S6E3FC3_FREQ_H__

#include <linux/types.h>
#include <linux/kernel.h>

#define TBL_ARR_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

#define DEFINE_FREQ_RANGE(_min, _max, _idx)	\
{							\
	.min = _min,			\
	.max = _max,			\
	.freq_idx = _idx,		\
}

#define DEFINE_FREQ_SET(_array)	\
{								\
	.array = _array,			\
	.size = TBL_ARR_SIZE(_array),	\
}

struct dynamic_freq_range {
	int	min;
	int max;
	int freq_idx;
};

struct df_freq_tbl_info {
	struct dynamic_freq_range *array;
	unsigned int size;
};

struct __packed ril_noti_info {
	u8 rat;
	u32 band;
	u32 channel;
};

enum {
	FREQ_RANGE_GSM850 = 1,
	FREQ_RANGE_EGSM900 = 2,
	FREQ_RANGE_DCS1800 = 3,
	FREQ_RANGE_PCS1900 = 4,
	FREQ_RANGE_WB01 = 11,
	FREQ_RANGE_WB02 = 12,
	FREQ_RANGE_WB03 = 13,
	FREQ_RANGE_WB04 = 14,
	FREQ_RANGE_WB05 = 15,
	FREQ_RANGE_WB06 = 16,
	FREQ_RANGE_WB07 = 17,
	FREQ_RANGE_WB08 = 18,
	FREQ_RANGE_WB09 = 19,
	FREQ_RANGE_WB10 = 20,
	FREQ_RANGE_WB11 = 21,
	FREQ_RANGE_WB12 = 22,
	FREQ_RANGE_WB13 = 23,
	FREQ_RANGE_WB14 = 24,
	FREQ_RANGE_WB15 = 25,
	FREQ_RANGE_WB16 = 26,
	FREQ_RANGE_WB17 = 27,
	FREQ_RANGE_WB18 = 28,
	FREQ_RANGE_WB19 = 29,
	FREQ_RANGE_WB20 = 30,
	FREQ_RANGE_WB21 = 31,
	FREQ_RANGE_WB22 = 32,
	FREQ_RANGE_WB23 = 33,
	FREQ_RANGE_WB24 = 34,
	FREQ_RANGE_WB25 = 35,
	FREQ_RANGE_WB26 = 36,
	FREQ_RANGE_WB27 = 37,
	FREQ_RANGE_WB28 = 38,
	FREQ_RANGE_WB29 = 39,
	FREQ_RANGE_WB30 = 40,
	FREQ_RANGE_WB31 = 41,
	FREQ_RANGE_WB32 = 42,
	FREQ_RANGE_TD1 = 51,
	FREQ_RANGE_TD2 = 52,
	FREQ_RANGE_TD3 = 53,
	FREQ_RANGE_TD4 = 54,
	FREQ_RANGE_TD5 = 55,
	FREQ_RANGE_TD6 = 56,
	FREQ_RANGE_BC0 = 61,
	FREQ_RANGE_BC1 = 62,
	FREQ_RANGE_BC2 = 63,
	FREQ_RANGE_BC3 = 64,
	FREQ_RANGE_BC4 = 65,
	FREQ_RANGE_BC5 = 66,
	FREQ_RANGE_BC6 = 67,
	FREQ_RANGE_BC7 = 68,
	FREQ_RANGE_BC8 = 69,
	FREQ_RANGE_BC9 = 70,
	FREQ_RANGE_BC10 = 71,
	FREQ_RANGE_BC11 = 72,
	FREQ_RANGE_BC12 = 73,
	FREQ_RANGE_BC13 = 74,
	FREQ_RANGE_BC14 = 75,
	FREQ_RANGE_BC15 = 76,
	FREQ_RANGE_BC16 = 77,
	FREQ_RANGE_BC17 = 78,
	FREQ_RANGE_BC18 = 79,
	FREQ_RANGE_BC19 = 80,
	FREQ_RANGE_BC20 = 81,
	FREQ_RANGE_BC21 = 82,
	FREQ_RANGE_LB01 = 91,
	FREQ_RANGE_LB02 = 92,
	FREQ_RANGE_LB03 = 93,
	FREQ_RANGE_LB04 = 94,
	FREQ_RANGE_LB05 = 95,
	FREQ_RANGE_LB06 = 96,
	FREQ_RANGE_LB07 = 97,
	FREQ_RANGE_LB08 = 98,
	FREQ_RANGE_LB09 = 99,
	FREQ_RANGE_LB10 = 100,
	FREQ_RANGE_LB11 = 101,
	FREQ_RANGE_LB12 = 102,
	FREQ_RANGE_LB13 = 103,
	FREQ_RANGE_LB14 = 104,
	FREQ_RANGE_LB15 = 105,
	FREQ_RANGE_LB16 = 106,
	FREQ_RANGE_LB17 = 107,
	FREQ_RANGE_LB18 = 108,
	FREQ_RANGE_LB19 = 109,
	FREQ_RANGE_LB20 = 110,
	FREQ_RANGE_LB21 = 111,
	FREQ_RANGE_LB22 = 112,
	FREQ_RANGE_LB23 = 113,
	FREQ_RANGE_LB24 = 114,
	FREQ_RANGE_LB25 = 115,
	FREQ_RANGE_LB26 = 116,
	FREQ_RANGE_LB27 = 117,
	FREQ_RANGE_LB28 = 118,
	FREQ_RANGE_LB29 = 119,
	FREQ_RANGE_LB30 = 120,
	FREQ_RANGE_LB31 = 121,
	FREQ_RANGE_LB32 = 122,
	FREQ_RANGE_LB33 = 123,
	FREQ_RANGE_LB34 = 124,
	FREQ_RANGE_LB35 = 125,
	FREQ_RANGE_LB36 = 126,
	FREQ_RANGE_LB37 = 127,
	FREQ_RANGE_LB38 = 128,
	FREQ_RANGE_LB39 = 129,
	FREQ_RANGE_LB40 = 130,
	FREQ_RANGE_LB41 = 131,
	FREQ_RANGE_LB42 = 132,
	FREQ_RANGE_LB43 = 133,
	FREQ_RANGE_LB44 = 134,
	FREQ_RANGE_LB45 = 135,
	FREQ_RANGE_LB46 = 136,
	FREQ_RANGE_LB47 = 137,
	FREQ_RANGE_LB48 = 138,
	FREQ_RANGE_LB65 = 155,
	FREQ_RANGE_LB66 = 156,
	FREQ_RANGE_LB67 = 157,
	FREQ_RANGE_LB68 = 158,
	FREQ_RANGE_LB69 = 159,
	FREQ_RANGE_LB70 = 160,
	FREQ_RANGE_LB71 = 161,
	FREQ_RANGE_MAX = 162,
};

struct dynamic_freq_range m32_freq_range_GSM850[] = {
	DEFINE_FREQ_RANGE(0, 0, 2),
};

struct dynamic_freq_range m32_freq_range_EGSM900[] = {
	DEFINE_FREQ_RANGE(0, 0, 3),
};

struct dynamic_freq_range m32_freq_range_DCS1800[] = {
	DEFINE_FREQ_RANGE(0, 0, 2),
};

struct dynamic_freq_range m32_freq_range_PCS1900[] = {
	DEFINE_FREQ_RANGE(0, 0, 3),
};

struct dynamic_freq_range m32_freq_range_WB01[] = {
	DEFINE_FREQ_RANGE(10562, 10578, 1),
	DEFINE_FREQ_RANGE(10579, 10754, 0),
	DEFINE_FREQ_RANGE(10755, 10824, 1),
	DEFINE_FREQ_RANGE(10825, 10838, 0),
};

struct dynamic_freq_range m32_freq_range_WB02[] = {
	DEFINE_FREQ_RANGE(9662, 9773, 0),
	DEFINE_FREQ_RANGE(9774, 9843, 1),
	DEFINE_FREQ_RANGE(9844, 9938, 0),
};

struct dynamic_freq_range m32_freq_range_WB03[] = {
	DEFINE_FREQ_RANGE(1162, 1162, 0),
	DEFINE_FREQ_RANGE(1163, 1232, 1),
	DEFINE_FREQ_RANGE(1233, 1407, 0),
	DEFINE_FREQ_RANGE(1408, 1477, 1),
	DEFINE_FREQ_RANGE(1478, 1513, 0),
};

struct dynamic_freq_range m32_freq_range_WB04[] = {
	DEFINE_FREQ_RANGE(1537, 1553, 1),
	DEFINE_FREQ_RANGE(1554, 1729, 0),
	DEFINE_FREQ_RANGE(1730, 1738, 1),
};

struct dynamic_freq_range m32_freq_range_WB05[] = {
	DEFINE_FREQ_RANGE(4357, 4378, 0),
	DEFINE_FREQ_RANGE(4379, 4448, 1),
	DEFINE_FREQ_RANGE(4449, 4458, 0),
};

struct dynamic_freq_range m32_freq_range_WB07[] = {
	DEFINE_FREQ_RANGE(2237, 2331, 0),
	DEFINE_FREQ_RANGE(2332, 2337, 3),
	DEFINE_FREQ_RANGE(2338, 2365, 2),
	DEFINE_FREQ_RANGE(2366, 2401, 1),
	DEFINE_FREQ_RANGE(2402, 2563, 0),
};

struct dynamic_freq_range m32_freq_range_WB08[] = {
	DEFINE_FREQ_RANGE(2937, 2993, 1),
	DEFINE_FREQ_RANGE(2994, 3088, 0),
};

struct dynamic_freq_range m32_freq_range_LB01[] = {
	DEFINE_FREQ_RANGE(0, 57, 1),
	DEFINE_FREQ_RANGE(58, 408, 0),
	DEFINE_FREQ_RANGE(409, 548, 1),
	DEFINE_FREQ_RANGE(549, 599, 0),
};

struct dynamic_freq_range m32_freq_range_LB02[] = {
	DEFINE_FREQ_RANGE(600, 846, 0),
	DEFINE_FREQ_RANGE(847, 986, 1),
	DEFINE_FREQ_RANGE(987, 1199, 0),
};

struct dynamic_freq_range m32_freq_range_LB03[] = {
	DEFINE_FREQ_RANGE(1200, 1225, 0),
	DEFINE_FREQ_RANGE(1226, 1365, 1),
	DEFINE_FREQ_RANGE(1366, 1715, 0),
	DEFINE_FREQ_RANGE(1716, 1855, 1),
	DEFINE_FREQ_RANGE(1856, 1949, 0),
};

struct dynamic_freq_range m32_freq_range_LB04[] = {
	DEFINE_FREQ_RANGE(1950, 2007, 1),
	DEFINE_FREQ_RANGE(2008, 2358, 0),
	DEFINE_FREQ_RANGE(2359, 2399, 1),
};

struct dynamic_freq_range m32_freq_range_LB05[] = {
	DEFINE_FREQ_RANGE(2400, 2467, 0),
	DEFINE_FREQ_RANGE(2468, 2607, 1),
	DEFINE_FREQ_RANGE(2608, 2649, 0),
};

struct dynamic_freq_range m32_freq_range_LB07[] = {
	DEFINE_FREQ_RANGE(2750, 2962, 0),
	DEFINE_FREQ_RANGE(2963, 2974, 3),
	DEFINE_FREQ_RANGE(2975, 3031, 2),
	DEFINE_FREQ_RANGE(3032, 3102, 1),
	DEFINE_FREQ_RANGE(3103, 3449, 0),
};

struct dynamic_freq_range m32_freq_range_LB08[] = {
	DEFINE_FREQ_RANGE(3450, 3587, 1),
	DEFINE_FREQ_RANGE(3588, 3799, 0),
};

struct dynamic_freq_range m32_freq_range_LB12[] = {
	DEFINE_FREQ_RANGE(5010, 5124, 1),
	DEFINE_FREQ_RANGE(5125, 5146, 2),
	DEFINE_FREQ_RANGE(5147, 5179, 0),
};

struct dynamic_freq_range m32_freq_range_LB13[] = {
	DEFINE_FREQ_RANGE(5180, 5279, 0),
};

struct dynamic_freq_range m32_freq_range_LB14[] = {
	DEFINE_FREQ_RANGE(5280, 5379, 0),
};

struct dynamic_freq_range m32_freq_range_LB17[] = {
	DEFINE_FREQ_RANGE(5730, 5794, 1),
	DEFINE_FREQ_RANGE(5795, 5816, 2),
	DEFINE_FREQ_RANGE(5817, 5849, 0),
};

struct dynamic_freq_range m32_freq_range_LB18[] = {
	DEFINE_FREQ_RANGE(5850, 5999, 0),
};

struct dynamic_freq_range m32_freq_range_LB19[] = {
	DEFINE_FREQ_RANGE(6000, 6007, 0),
	DEFINE_FREQ_RANGE(6008, 6147, 1),
	DEFINE_FREQ_RANGE(6148, 6149, 0),
};

struct dynamic_freq_range m32_freq_range_LB20[] = {
	DEFINE_FREQ_RANGE(6150, 6156, 2),
	DEFINE_FREQ_RANGE(6157, 6449, 0),
};

struct dynamic_freq_range m32_freq_range_LB21[] = {
	DEFINE_FREQ_RANGE(6450, 6599, 0),
};

struct dynamic_freq_range m32_freq_range_LB25[] = {
	DEFINE_FREQ_RANGE(8040, 8286, 0),
	DEFINE_FREQ_RANGE(8287, 8426, 1),
	DEFINE_FREQ_RANGE(8427, 8689, 0),
};

struct dynamic_freq_range m32_freq_range_LB26[] = {
	DEFINE_FREQ_RANGE(8690, 8857, 0),
	DEFINE_FREQ_RANGE(8858, 8997, 1),
	DEFINE_FREQ_RANGE(8998, 9039, 0),
};

struct dynamic_freq_range m32_freq_range_LB28[] = {
	DEFINE_FREQ_RANGE(9210, 9406, 0),
	DEFINE_FREQ_RANGE(9407, 9533, 1),
	DEFINE_FREQ_RANGE(9534, 9546, 2),
	DEFINE_FREQ_RANGE(9547, 9659, 0),
};

struct dynamic_freq_range m32_freq_range_LB29[] = {
	DEFINE_FREQ_RANGE(9660, 9769, 0),
};

struct dynamic_freq_range m32_freq_range_LB30[] = {
	DEFINE_FREQ_RANGE(9770, 9869, 1),
};

struct dynamic_freq_range m32_freq_range_LB32[] = {
	DEFINE_FREQ_RANGE(9920, 10042, 0),
	DEFINE_FREQ_RANGE(10043, 10182, 1),
	DEFINE_FREQ_RANGE(10183, 10359, 0),
};

struct dynamic_freq_range m32_freq_range_LB34[] = {
	DEFINE_FREQ_RANGE(36200, 36277, 1),
	DEFINE_FREQ_RANGE(36278, 36349, 0),
};

struct dynamic_freq_range m32_freq_range_LB38[] = {
	DEFINE_FREQ_RANGE(37750, 37972, 0),
	DEFINE_FREQ_RANGE(37973, 37994, 3),
	DEFINE_FREQ_RANGE(37995, 38033, 2),
	DEFINE_FREQ_RANGE(38034, 38112, 1),
	DEFINE_FREQ_RANGE(38113, 38249, 0),
};

struct dynamic_freq_range m32_freq_range_LB39[] = {
	DEFINE_FREQ_RANGE(38250, 38506, 0),
	DEFINE_FREQ_RANGE(38507, 38646, 1),
	DEFINE_FREQ_RANGE(38647, 38649, 0),
};

struct dynamic_freq_range m32_freq_range_LB40[] = {
	DEFINE_FREQ_RANGE(38650, 38769, 1),
	DEFINE_FREQ_RANGE(38770, 39119, 0),
	DEFINE_FREQ_RANGE(39120, 39141, 3),
	DEFINE_FREQ_RANGE(39142, 39259, 1),
	DEFINE_FREQ_RANGE(39260, 39610, 0),
	DEFINE_FREQ_RANGE(39611, 39639, 3),
	DEFINE_FREQ_RANGE(39640, 39649, 1),
};

struct dynamic_freq_range m32_freq_range_LB41[] = {
	DEFINE_FREQ_RANGE(39650, 39676, 3),
	DEFINE_FREQ_RANGE(39677, 39771, 1),
	DEFINE_FREQ_RANGE(39772, 40121, 0),
	DEFINE_FREQ_RANGE(40122, 40155, 3),
	DEFINE_FREQ_RANGE(40156, 40174, 2),
	DEFINE_FREQ_RANGE(40175, 40261, 1),
	DEFINE_FREQ_RANGE(40262, 40612, 0),
	DEFINE_FREQ_RANGE(40613, 40634, 3),
	DEFINE_FREQ_RANGE(40635, 40673, 2),
	DEFINE_FREQ_RANGE(40674, 40752, 1),
	DEFINE_FREQ_RANGE(40753, 41102, 0),
	DEFINE_FREQ_RANGE(41103, 41114, 3),
	DEFINE_FREQ_RANGE(41115, 41171, 2),
	DEFINE_FREQ_RANGE(41172, 41242, 1),
	DEFINE_FREQ_RANGE(41243, 41589, 0),
};

struct dynamic_freq_range m32_freq_range_LB42[] = {
	DEFINE_FREQ_RANGE(41590, 41849, 0),
	DEFINE_FREQ_RANGE(41850, 41905, 1),
	DEFINE_FREQ_RANGE(41906, 41989, 2),
	DEFINE_FREQ_RANGE(41990, 42339, 0),
	DEFINE_FREQ_RANGE(42340, 42403, 1),
	DEFINE_FREQ_RANGE(42404, 42479, 2),
	DEFINE_FREQ_RANGE(42480, 42830, 0),
	DEFINE_FREQ_RANGE(42831, 42901, 1),
	DEFINE_FREQ_RANGE(42902, 42970, 2),
	DEFINE_FREQ_RANGE(42971, 43320, 0),
	DEFINE_FREQ_RANGE(43321, 43400, 1),
	DEFINE_FREQ_RANGE(43401, 43457, 2),
	DEFINE_FREQ_RANGE(43458, 43460, 3),
	DEFINE_FREQ_RANGE(43461, 43589, 0),
};

struct dynamic_freq_range m32_freq_range_LB48[] = {
	DEFINE_FREQ_RANGE(55240, 55470, 0),
	DEFINE_FREQ_RANGE(55471, 55550, 1),
	DEFINE_FREQ_RANGE(55551, 55607, 2),
	DEFINE_FREQ_RANGE(55608, 55610, 3),
	DEFINE_FREQ_RANGE(55611, 55960, 0),
	DEFINE_FREQ_RANGE(55961, 56048, 1),
	DEFINE_FREQ_RANGE(56049, 56086, 2),
	DEFINE_FREQ_RANGE(56087, 56100, 3),
	DEFINE_FREQ_RANGE(56101, 56451, 0),
	DEFINE_FREQ_RANGE(56452, 56546, 1),
	DEFINE_FREQ_RANGE(56547, 56565, 2),
	DEFINE_FREQ_RANGE(56566, 56591, 3),
	DEFINE_FREQ_RANGE(56592, 56739, 0),
};

struct dynamic_freq_range m32_freq_range_LB66[] = {
	DEFINE_FREQ_RANGE(66436, 66493, 1),
	DEFINE_FREQ_RANGE(66494, 66844, 0),
	DEFINE_FREQ_RANGE(66845, 66984, 1),
	DEFINE_FREQ_RANGE(66985, 67334, 0),
	DEFINE_FREQ_RANGE(67335, 67335, 1),
};

struct dynamic_freq_range m32_freq_range_LB71[] = {
	DEFINE_FREQ_RANGE(68586, 68721, 0),
	DEFINE_FREQ_RANGE(68722, 68824, 1),
	DEFINE_FREQ_RANGE(68825, 68861, 2),
	DEFINE_FREQ_RANGE(68862, 68935, 0),
};

struct dynamic_freq_range m32_freq_range_TD1[] = {
	DEFINE_FREQ_RANGE(0, 0, 0),
};

struct dynamic_freq_range m32_freq_range_TD2[] = {
	DEFINE_FREQ_RANGE(0, 0, 3),
};

struct dynamic_freq_range m32_freq_range_TD3[] = {
	DEFINE_FREQ_RANGE(0, 0, 2),
};

struct dynamic_freq_range m32_freq_range_TD4[] = {
	DEFINE_FREQ_RANGE(0, 0, 1),
};

struct dynamic_freq_range m32_freq_range_TD5[] = {
	DEFINE_FREQ_RANGE(0, 0, 3),
};

struct dynamic_freq_range m32_freq_range_TD6[] = {
	DEFINE_FREQ_RANGE(0, 0, 1),
};

struct dynamic_freq_range m32_freq_range_BC0[] = {
	DEFINE_FREQ_RANGE(0, 0, 2),
};

struct dynamic_freq_range m32_freq_range_BC1[] = {
	DEFINE_FREQ_RANGE(0, 0, 3),
};

struct dynamic_freq_range m32_freq_range_BC10[] = {
	DEFINE_FREQ_RANGE(0, 0, 0),
};

struct df_freq_tbl_info m32_dynamic_freq_set[FREQ_RANGE_MAX] = {
	[FREQ_RANGE_GSM850] = DEFINE_FREQ_SET(m32_freq_range_GSM850),
	[FREQ_RANGE_EGSM900] = DEFINE_FREQ_SET(m32_freq_range_EGSM900),
	[FREQ_RANGE_DCS1800] = DEFINE_FREQ_SET(m32_freq_range_DCS1800),
	[FREQ_RANGE_PCS1900] = DEFINE_FREQ_SET(m32_freq_range_PCS1900),
	[FREQ_RANGE_WB01] = DEFINE_FREQ_SET(m32_freq_range_WB01),
	[FREQ_RANGE_WB02] = DEFINE_FREQ_SET(m32_freq_range_WB02),
	[FREQ_RANGE_WB03] = DEFINE_FREQ_SET(m32_freq_range_WB03),
	[FREQ_RANGE_WB04] = DEFINE_FREQ_SET(m32_freq_range_WB04),
	[FREQ_RANGE_WB05] = DEFINE_FREQ_SET(m32_freq_range_WB05),
	[FREQ_RANGE_WB07] = DEFINE_FREQ_SET(m32_freq_range_WB07),
	[FREQ_RANGE_WB08] = DEFINE_FREQ_SET(m32_freq_range_WB08),
	[FREQ_RANGE_LB01] = DEFINE_FREQ_SET(m32_freq_range_LB01),
	[FREQ_RANGE_LB02] = DEFINE_FREQ_SET(m32_freq_range_LB02),
	[FREQ_RANGE_LB03] = DEFINE_FREQ_SET(m32_freq_range_LB03),
	[FREQ_RANGE_LB04] = DEFINE_FREQ_SET(m32_freq_range_LB04),
	[FREQ_RANGE_LB05] = DEFINE_FREQ_SET(m32_freq_range_LB05),
	[FREQ_RANGE_LB07] = DEFINE_FREQ_SET(m32_freq_range_LB07),
	[FREQ_RANGE_LB08] = DEFINE_FREQ_SET(m32_freq_range_LB08),
	[FREQ_RANGE_LB12] = DEFINE_FREQ_SET(m32_freq_range_LB12),
	[FREQ_RANGE_LB13] = DEFINE_FREQ_SET(m32_freq_range_LB13),
	[FREQ_RANGE_LB14] = DEFINE_FREQ_SET(m32_freq_range_LB14),
	[FREQ_RANGE_LB17] = DEFINE_FREQ_SET(m32_freq_range_LB17),
	[FREQ_RANGE_LB18] = DEFINE_FREQ_SET(m32_freq_range_LB18),
	[FREQ_RANGE_LB19] = DEFINE_FREQ_SET(m32_freq_range_LB19),
	[FREQ_RANGE_LB20] = DEFINE_FREQ_SET(m32_freq_range_LB20),
	[FREQ_RANGE_LB21] = DEFINE_FREQ_SET(m32_freq_range_LB21),
	[FREQ_RANGE_LB25] = DEFINE_FREQ_SET(m32_freq_range_LB25),
	[FREQ_RANGE_LB26] = DEFINE_FREQ_SET(m32_freq_range_LB26),
	[FREQ_RANGE_LB28] = DEFINE_FREQ_SET(m32_freq_range_LB28),
	[FREQ_RANGE_LB29] = DEFINE_FREQ_SET(m32_freq_range_LB29),
	[FREQ_RANGE_LB30] = DEFINE_FREQ_SET(m32_freq_range_LB30),
	[FREQ_RANGE_LB32] = DEFINE_FREQ_SET(m32_freq_range_LB32),
	[FREQ_RANGE_LB32] = DEFINE_FREQ_SET(m32_freq_range_LB32),
	[FREQ_RANGE_LB34] = DEFINE_FREQ_SET(m32_freq_range_LB34),
	[FREQ_RANGE_LB38] = DEFINE_FREQ_SET(m32_freq_range_LB38),
	[FREQ_RANGE_LB39] = DEFINE_FREQ_SET(m32_freq_range_LB39),
	[FREQ_RANGE_LB40] = DEFINE_FREQ_SET(m32_freq_range_LB40),
	[FREQ_RANGE_LB41] = DEFINE_FREQ_SET(m32_freq_range_LB41),
	[FREQ_RANGE_LB42] = DEFINE_FREQ_SET(m32_freq_range_LB42),
	[FREQ_RANGE_LB48] = DEFINE_FREQ_SET(m32_freq_range_LB48),
	[FREQ_RANGE_LB66] = DEFINE_FREQ_SET(m32_freq_range_LB66),
	[FREQ_RANGE_LB71] = DEFINE_FREQ_SET(m32_freq_range_LB71),
	[FREQ_RANGE_TD1] = DEFINE_FREQ_SET(m32_freq_range_TD1),
	[FREQ_RANGE_TD2] = DEFINE_FREQ_SET(m32_freq_range_TD2),
	[FREQ_RANGE_TD3] = DEFINE_FREQ_SET(m32_freq_range_TD3),
	[FREQ_RANGE_TD4] = DEFINE_FREQ_SET(m32_freq_range_TD4),
	[FREQ_RANGE_TD5] = DEFINE_FREQ_SET(m32_freq_range_TD5),
	[FREQ_RANGE_TD6] = DEFINE_FREQ_SET(m32_freq_range_TD6),
	[FREQ_RANGE_BC0] = DEFINE_FREQ_SET(m32_freq_range_BC0),
	[FREQ_RANGE_BC1] = DEFINE_FREQ_SET(m32_freq_range_BC1),
	[FREQ_RANGE_BC10] = DEFINE_FREQ_SET(m32_freq_range_BC10),
};

#endif /* __S6E3FC3_FREQ_H__ */
