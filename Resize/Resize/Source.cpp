/*�Ѧ�: https://gist.github.com/hunandy14/143d6036a846d1d53c9cff2be807cf1d */
/*
coder:Chang Ching Yao
date:20190902
distruption:Ū�gbmp file
*/
#include<stdlib.h>
#include <stdio.h>
#include <inttypes.h>
typedef unsigned char uch;

/*bmp�ɮ׵��c*/

#pragma pack(2)
struct BmpFileHeader
{
	uint16_t bfTybe;/*����bmp������*/
	uint32_t bfSize;/*��ڤW���ɮפj�p*/
	uint16_t bfReserved1;/*�ݫO�d�A�ȳ]�w��0*/
	uint16_t bfReserved2;/**/
	uint32_t bfOffBits;/*�������}�l��Ϲ��ƾڤ����������q�A�Ѧ��i���_�l��}*/
};