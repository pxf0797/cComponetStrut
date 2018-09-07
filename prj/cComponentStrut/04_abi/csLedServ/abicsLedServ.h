/**************************************************************************
* @copyright    :Copyright(C), 2018, pxf, person.
* @file         :abicsLedServ.h
* @author       :pxf
* @version      :v1.0
* @date         :2018/09/07 22:42:51
* @brief        :组件csLedServ 抽象接口类型声明
* @others       :
* @history      :180907 pxf 初次建立
***************************************************************************/

#ifndef ABICSLEDSERV_H_
#define ABICSLEDSERV_H_

#include "..\abi.h"

/***********************************************************
* 组件抽象接口初始化
***********************************************************/
/*组件抽象接口初始化
* 输入: 无
* 输出: int16 0-成功,-1-失败
***********************************************/
int16 abicsLedServInit(void);


/***********************************************************
* 异步调度功能函数
***********************************************************/
/*异步调度功能函数
* 命名方式: 存放类+实际类+实际类功能
* 只有cas类型组件才有此函数
* 函数是组件抽象接口实例的一个功能
* 并且抽象接口实例由bsp进行调用而非组件
***********************************************/
//extern void csLedServ_abi_example(void);
//TODO


/***********************************************************
* 组件抽象接口实例
***********************************************************/
/*线程类抽象实例
***********************************************/
//extern isr timer;
//extern isr mainLoop;

/*时间测量类抽象实例
***********************************************/
//extern measure time;

/*GIO输入类抽象实例
***********************************************/
//extern gi err;

/*GIO输出类抽象实例
***********************************************/
//extern go led;


#endif /* ABICSLEDSERV_H_ */

/**************************** Copyright(C) pxf ****************************/
