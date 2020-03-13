#ifndef BITSTAGE_H_INCLUDED
#define BITSTAGE_H_INCLUDED


/**
*	如果你认为编程是对数据类型的操作、那么在它之下还有字节
*	如果你认为编程是对字节的操作、那么在它之下还有 Bits
*/









/**
* @brief 反转uint32_t
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
