/*參考: https://gist.github.com/hunandy14/143d6036a846d1d53c9cff2be807cf1d */
/*
coder:Chang Ching Yao
date:20190902
distruption:讀寫bmp file
*/
#include<stdlib.h>
#include <stdio.h>
#include <inttypes.h>
typedef unsigned char uch;

/*bmp檔案結構*/

#pragma pack(2)
struct BmpFileHeader
{
	uint16_t bfTybe;/*說明bmp的類型*/
	uint32_t bfSize;/*實際上的檔案大小*/
	uint16_t bfReserved1;/*需保留，值設定為0*/
	uint16_t bfReserved2;/**/
	uint32_t bfOffBits;/*說明文件開始到圖像數據之間的偏移量，由此可知起始位址*/
};