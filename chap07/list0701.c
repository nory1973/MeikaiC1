/*
	本書で想定する<limits.h>の一部
*/

#define UCHAR_MAX	255U				/* unsigned charの最大値 */
#define SCHAR_MIN	-128				/* signed charの最小値 */
#define SCHAR_MAX	+127				/* signed charの最大値 */
#define CHAR_MIN	0					/* charの最小値 */
#define CHAR_MAX	UCHAR_MAX			/* charの最大値 */
#define SHRT_MIN	-32768				/* short intの最小値 */
#define SHRT_MAX	+32767				/* short intの最大値 */
#define USHRT_MAX	65535U				/* unsigned shortの最大値 */
#define INT_MIN		-32768				/* intの最小値 */
#define INT_MAX		+32767				/* intの最大値 */
#define UINT_MAX	65535U				/* unsigned intの最大値 */
#define LONG_MIN	-2147483648L		/* long intの最小値 */
#define LONG_MAX	+2147483647L		/* long intの最大値 */
#define ULONG_MAX	4294967295UL		/* unsigned longの最大値 */
