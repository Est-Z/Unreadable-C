#ifndef DEXYGEN_H_INCLUDED
#define DEXYGEN_H_INCLUDED


/**
* @file doxygen.h
* @brief ע�ͽ���ͷ�ļ�
* @details ����doygen�﷨
* @author Est
* @date 2020-3-10
* @version V0.1
*/


/** 8�ֽ��޷������� */
typedef unsigned char uint8_t;
/** 16�ֽ��޷������� */
typedef unsigned short uint16_t;
/** 32�ֽ��޷������� */
typedef unsigned int uint32_t;

/** ��С������ */
#define MIN_UINT 0
/** �� */
#define true 1
/** �� */
#define false 0

/**
* ȫ�ֱ�����Global \n
* ����Ҫע�;ֲ�����
*/
int Global = 0;

/** �ʺ���enum��struct��ע�� */
typedef enum color{
	red,	/**< ��ɫ */
	green,	/**< ��ɫ */
	blue,	/**< ��ɫ */
}RGB;

/**
* @brief �ж��Ƿ�Ϊ����
* @param [in] num ��Ҫ�жϵ���
* @return �����жϽ��
*   - -1 �������ʹ���
* @retval false Ϊż��
* @retval true Ϊ����
*/
int isOddNumber(uint8_t num){
	return ( num ^ 0x01 ) ? false : true;
}

/**
* �������� ִ�з� '@' or '\\'
* ָ�������  param��return��retval��note��pre��par��code��endcode��see��deprecated...
* �������ָ��� - ��#�� :: ��
*/

/**
* @brief �ж��Ƿ�Ϊż��
* @param [in] num ��Ҫ�жϵ���
* @return �����жϽ��
*   - -1 �������ʹ���
* @retval true Ϊż��
* @retval false Ϊ����
* @pre �������ͱ�����uint8_t
* @par ʾ��
* @code
 //��������
 typedef unsigned char uint8_t;
* @endcode
* @note ��ʵ���������������� �������ϸ��ж��������� QAQ
* @see ����:: isOddNumber
*/
int isEvenNumber(uint8_t num){
	if(sizeof(uint8_t) != sizeof(num)) return -1;
	return ( !isOddNumber(num) ) ? true : false;
}



#endif // DEXYGEN_H_INCLUDED
