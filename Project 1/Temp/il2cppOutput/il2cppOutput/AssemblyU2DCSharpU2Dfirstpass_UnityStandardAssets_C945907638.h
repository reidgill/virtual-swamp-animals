﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_t_2147304447_0;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_t_1163416176_0;
// System.Collections.Generic.List`1<System.String>
struct List_1_t_293602512_0;

#include "mscorlib_System_Object_887538054.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct  VirtualInput_t945907638_0  : public Object_t
{
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualAxes
	Dictionary_2_t_2147304447_0 * ___m_VirtualAxes_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualButtons
	Dictionary_2_t_1163416176_0 * ___m_VirtualButtons_1;
	// System.Collections.Generic.List`1<System.String> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_AlwaysUseVirtual
	List_1_t_293602512_0 * ___m_AlwaysUseVirtual_2;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::<virtualMousePosition>k__BackingField
	Vector3_t_725341337_0  ___U3CvirtualMousePositionU3Ek__BackingField_3;
};
