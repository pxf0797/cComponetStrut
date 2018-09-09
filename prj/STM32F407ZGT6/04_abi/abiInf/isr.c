/**************************************************************************
* @copyright    :Copyright(C), 2018, pxf, person.
* @file         :isr.c
* @author       :pxf
* @version      :v1.0
* @date         :2018/09/01 16:25:01
* @brief        :�߳̽ӿڳ����ඨ��
* @others       :
* @history      :180901 pxf ���ν���
***************************************************************************/

#include "../abi.h"

/***********************************************************
* �߳̽ӿڳ����ඨ��
***********************************************************/
/*�߳̽ӿڳ������ʼ������
* ����: cthis isr��ָ��
* ���: hisr cthis/OOPC_NULL
***********************************************/
hisr isr_init(hisr cthis, void (*isr)(void)){
    cthis->iIsr.isr = isr;

    return cthis;
}

/*�߳̽ӿڳ����๹�캯��
* ����: cthis isr��ָ��
* ���: hisr cthis/OOPC_NULL
***********************************************/
CC(isr){
    cthis->init = isr_init;
    return cthis;
}
/*�߳̽ӿڳ�������������
* ����: cthis isr��ָ��
* ���: OOPC_RETURN_DATATYPE OOPC_TRUE/OOPC_FALSE
***********************************************/
CD(isr){
    return OOPC_TRUE;
}

/**************************** Copyright(C) pxf ****************************/