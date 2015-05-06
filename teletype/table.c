#include "table.h"

// for i in range(0,128):
// print '%.f, ' % (i * 32768.0 / 120.0)

const int table_n[128] = {
	0, 273, 546, 819, 1092, 1365, 1638, 1911, 2185, 2458, 2731, 3004, 3277, 3550, 3823, 
	4096, 4369, 4642, 4915, 5188, 5461, 5734, 6007, 6281, 6554, 6827, 7100, 7373, 7646, 
	7919, 8192, 8465, 8738, 9011, 9284, 9557, 9830, 10103, 10377, 10650, 10923, 11196, 
	11469, 11742, 12015, 12288, 12561, 12834, 13107, 13380, 13653, 13926, 14199, 14473, 
	14746, 15019, 15292, 15565, 15838, 16111, 16384, 16657, 16930, 17203, 17476, 17749, 
	18022, 18295, 18569, 18842, 19115, 19388, 19661, 19934, 20207, 20480, 20753, 21026, 
	21299, 21572, 21845, 22118, 22391, 22665, 22938, 23211, 23484, 23757, 24030, 24303, 
	24576, 24849, 25122, 25395, 25668, 25941, 26214, 26487, 26761, 27034, 27307, 27580, 
	27853, 28126, 28399, 28672, 28945, 29218, 29491, 29764, 30037, 30310, 30583, 30857, 
	31130, 31403, 31676, 31949, 32222, 32495, 32768, 33041, 33314, 33587, 33860, 34133, 
	34406, 34679
};