/**************************************************************************
 *
 *         Copyright (c) 2014-2018 by iCatch Technology, Inc.
 *
 *  This software is copyrighted by and is the property of Sunplus
 *  Technology, Inc. All rights are reserved by Sunplus Technology, Inc.
 *  This software may only be used in accordance with the
 *  corresponding license agreement. Any unauthorized use, duplication,
 *  distribution, or disclosure of this software is expressly forbidden.
 *
 *  This Copyright notice MUST not be removed or modified without prior
 *  written consent of iCatch Technology, Inc.
 *
 *  iCatch Technology, Inc. reserves the right to modify this
 *  software without notice.
 *
 *  iCatch Technology, Inc.
 *  19-1, Innovation First Road, Science-Based Industrial Park,
 *  Hsin-Chu, Taiwan, R.O.C.
 *
 *  Author: peng.tan
 *  Email:  peng.tan@sunmedia.com.cn
 *
 **************************************************************************/

#ifndef __ICATCH_GL_ROTATION_H__
#define __ICATCH_GL_ROTATION_H__

/* -----------------------------------------------------------------------------
 * class &namespace definitions
 */
namespace com{ namespace icatchtek{ namespace pancam {

/**
 * The rotation.
 */
typedef enum ICatchGLRotation
{
    /** rotation 0 degrees, portrait.*/
    ICH_GL_ROTATION_0   = 0,
    /** rotation 90 degrees, landscape left.*/
    ICH_GL_ROTATION_90  = 1,
    /** rotation 180 degrees, portrait upside down.*/
    ICH_GL_ROTATION_180 = 2,
    /** rotation 270 degrees, landscape right.*/
    ICH_GL_ROTATION_270 = 3,
}ICatchGLRotation;

}}}

#endif

