﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// UnityEngine.YieldInstruction
struct YieldInstruction_t3557331758;
struct YieldInstruction_t3557331758_marshaled;
// UnityEngineInternal.TypeInferenceRuleAttribute
struct TypeInferenceRuleAttribute_t471424957;
// System.String
struct String_t;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "UnityEngine_UnityEngine_YieldInstruction3557331758.h"
#include "UnityEngine_UnityEngine_YieldInstruction3557331758MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "mscorlib_System_Object837106420MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_MathfInternal681132919.h"
#include "UnityEngine_UnityEngineInternal_MathfInternal681132919MethodDeclarations.h"
#include "mscorlib_System_Threading_Interlocked3007803305MethodDeclarations.h"
#include "mscorlib_System_Single958209021.h"
#include "mscorlib_System_Boolean211005341.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAt471424957.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAt471424957MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules435505844.h"
#include "mscorlib_System_Enum2778772662MethodDeclarations.h"
#include "mscorlib_System_Enum2778772662.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Attribute498693649MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules435505844MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C"  void YieldInstruction__ctor_m539393484 (YieldInstruction_t3557331758 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t3557331758_marshal(const YieldInstruction_t3557331758& unmarshaled, YieldInstruction_t3557331758_marshaled& marshaled)
{
}
extern "C" void YieldInstruction_t3557331758_marshal_back(const YieldInstruction_t3557331758_marshaled& marshaled, YieldInstruction_t3557331758& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t3557331758_marshal_cleanup(YieldInstruction_t3557331758_marshaled& marshaled)
{
}
// System.Void UnityEngineInternal.MathfInternal::.cctor()
extern TypeInfo* MathfInternal_t681132919_il2cpp_TypeInfo_var;
extern const uint32_t MathfInternal__cctor_m2600550988_MetadataUsageId;
extern "C"  void MathfInternal__cctor_m2600550988 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MathfInternal__cctor_m2600550988_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t681132919_StaticFields*)MathfInternal_t681132919_il2cpp_TypeInfo_var->static_fields)->set_FloatMinNormal_0((1.17549435E-38f));
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t681132919_StaticFields*)MathfInternal_t681132919_il2cpp_TypeInfo_var->static_fields)->set_FloatMinDenormal_1((1.401298E-45f));
		float L_0 = ((MathfInternal_t681132919_StaticFields*)MathfInternal_t681132919_il2cpp_TypeInfo_var->static_fields)->get_FloatMinDenormal_1();
		il2cpp_codegen_memory_barrier();
		float L_1 = Interlocked_CompareExchange_m1066672614(NULL /*static, unused*/, (((MathfInternal_t681132919_StaticFields*)MathfInternal_t681132919_il2cpp_TypeInfo_var->static_fields)->get_address_of_FloatMinDenormal_1()), L_0, (0.0f), /*hidden argument*/NULL);
		((MathfInternal_t681132919_StaticFields*)MathfInternal_t681132919_il2cpp_TypeInfo_var->static_fields)->set_IsFlushToZeroEnabled_2((bool)((((float)L_1) == ((float)(0.0f)))? 1 : 0));
		return;
	}
}
// Conversion methods for marshalling of: UnityEngineInternal.MathfInternal
extern "C" void MathfInternal_t681132919_marshal(const MathfInternal_t681132919& unmarshaled, MathfInternal_t681132919_marshaled& marshaled)
{
}
extern "C" void MathfInternal_t681132919_marshal_back(const MathfInternal_t681132919_marshaled& marshaled, MathfInternal_t681132919& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngineInternal.MathfInternal
extern "C" void MathfInternal_t681132919_marshal_cleanup(MathfInternal_t681132919_marshaled& marshaled)
{
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern TypeInfo* TypeInferenceRules_t435505844_il2cpp_TypeInfo_var;
extern const uint32_t TypeInferenceRuleAttribute__ctor_m1168575159_MetadataUsageId;
extern "C"  void TypeInferenceRuleAttribute__ctor_m1168575159 (TypeInferenceRuleAttribute_t471424957 * __this, int32_t ___rule, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeInferenceRuleAttribute__ctor_m1168575159_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___rule;
		int32_t L_1 = L_0;
		Il2CppObject * L_2 = Box(TypeInferenceRules_t435505844_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, (Enum_t2778772662 *)L_2);
		TypeInferenceRuleAttribute__ctor_m2173394041(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C"  void TypeInferenceRuleAttribute__ctor_m2173394041 (TypeInferenceRuleAttribute_t471424957 * __this, String_t* ___rule, const MethodInfo* method)
{
	{
		Attribute__ctor_m2985353781(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule;
		__this->set__rule_0(L_0);
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C"  String_t* TypeInferenceRuleAttribute_ToString_m318752778 (TypeInferenceRuleAttribute_t471424957 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = __this->get__rule_0();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
