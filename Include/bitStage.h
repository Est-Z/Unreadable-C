#ifndef BITSTAGE_H_INCLUDED
#define BITSTAGE_H_INCLUDED


/**
*	�������Ϊ����Ƕ��������͵Ĳ�������ô����֮�»����ֽ�
*	�������Ϊ����Ƕ��ֽڵĲ�������ô����֮�»��� Bits
*/


/** 8λ���޷������� */
typedef unsigned char uint8_t;
/** 16λ���޷������� */
typedef unsigned short uint16_t;
/** 32λ���޷������� */
typedef unsigned int uint32_t;
/** 8λ���з������� */
typedef char int8_t;
/** 16λ���з������� */
typedef short int16_t;
/** 32λ�з������� */
typedef int int32_t;

#define BIT_CHAR 8

/**
* @brief ���ظ������ֵķ���
* @param [in] num ��Ҫ�жϵ���
*/
int32_t getSign1(int32_t num){
    int sign;
    // -1 0
    sign = -(num < 0);
    sign = -(int)((unsigned int)((int)num) >> (sizeof(int) * BIT_CHAR - 1));
    sign = num >> (sizeof(int32_t)*BIT_CHAR -1);
    // -1 0 1
    sign = ( num > 0 ) - ( num < 0 );
    return sign;
}
/**
* @brief ���ظ������ֵ�j����ֵ
* @param [in] num ��Ҫ�жϵ���
*/
int32_t abs(int32_t num){
    int mask = num >> (sizeof(int) * BIT_CHAR - 1);
    return (num + mask) ^ mask; //(num ^ mask) - mask
}


/**
* @brief ��תuint32_t
* @param [in] num ��Ҫ��ת����
* @retval ��ת�����
*/
uint32_t reverseBits(uint32_t n) {
    n = ((n & 0xffff0000) >> 16) | ((n & 0x0000ffff) << 16);
    n = ((n & 0xff00ff00) >>  8) | ((n & 0x00ff00ff) <<  8);
    n = ((n & 0xf0f0f0f0) >>  4) | ((n & 0x0f0f0f0f) <<  4);
    n = ((n & 0xcccccccc) >>  2) | ((n & 0x33333333) <<  2);
    n = ((n & 0xaaaaaaaa) >>  1) | ((n & 0x55555555) <<  1);
    return n;
}


#endif // BITSTAGE_H_INCLUDED
