#ifndef DEXYGEN_H_INCLUDED
#define DEXYGEN_H_INCLUDED


/**
* @file doxygen.h
* @brief 注释讲解头文件
* @details 介绍doygen语法
* @author Est
* @date 2020-3-10
* @version V0.1
*/


/** 8字节无符号整数 */
typedef unsigned char uint8_t;
/** 16字节无符号整数 */
typedef unsigned short uint16_t;
/** 32字节无符号整数 */
typedef unsigned int uint32_t;

/** 最小正整数 */
#define MIN_UINT 0
/** 假 */
#define true 1
/** 真 */
#define false 0

/**
* 全局变量：Global \n
* 不需要注释局部变量
*/
int Global = 0;

/** 适合于enum，struct的注释 */
typedef enum color{
	red,	/**< 红色 */
	green,	/**< 率色 */
	blue,	/**< 蓝色 */
}RGB;

/**
* @brief 判断是否为奇数
* @param [in] num 需要判断的数
* @return 返回判断结果
*   - -1 数据类型错误
* @retval false 为偶数
* @retval true 为奇数
*/
int isOddNumber(uint8_t num){
	return ( num ^ 0x01 ) ? false : true;
}

/**
* 函数定义 执行符 '@' or '\\'
* 指令操作符  param、return、retval、note、pre、par、code、endcode、see、deprecated...
* 特殊符号指令符 - 、#、 :: 等
*/

/**
* @brief 判断是否为偶数
* @param [in] num 需要判断的数
* @return 返回判断结果
*   - -1 数据类型错误
* @retval true 为偶数
* @retval false 为奇数
* @pre 数据类型必须是uint8_t
* @par 示例
* @code
 //数据类型
 typedef unsigned char uint8_t;
* @endcode
* @note 其实这个函数是有问题的 并不能严格判断数据类型 QAQ
* @see 函数:: isOddNumber
*/
int isEvenNumber(uint8_t num){
	if(sizeof(uint8_t) != sizeof(num)) return -1;
	return ( !isOddNumber(num) ) ? true : false;
}



#endif // DEXYGEN_H_INCLUDED
