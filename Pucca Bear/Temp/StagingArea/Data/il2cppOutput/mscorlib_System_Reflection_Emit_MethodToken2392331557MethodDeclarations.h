﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_MethodToken2392331557.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Reflection.Emit.MethodToken::.ctor(System.Int32)
extern "C"  void MethodToken__ctor_m3710649922 (MethodToken_t2392331557 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodToken::.cctor()
extern "C"  void MethodToken__cctor_m2370742108 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodToken::Equals(System.Object)
extern "C"  bool MethodToken_Equals_m1986642400 (MethodToken_t2392331557 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodToken::GetHashCode()
extern "C"  int32_t MethodToken_GetHashCode_m1919356356 (MethodToken_t2392331557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodToken::get_Token()
extern "C"  int32_t MethodToken_get_Token_m1317996739 (MethodToken_t2392331557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct MethodToken_t2392331557;
struct MethodToken_t2392331557_marshaled;

extern "C" void MethodToken_t2392331557_marshal(const MethodToken_t2392331557& unmarshaled, MethodToken_t2392331557_marshaled& marshaled);
extern "C" void MethodToken_t2392331557_marshal_back(const MethodToken_t2392331557_marshaled& marshaled, MethodToken_t2392331557& unmarshaled);
extern "C" void MethodToken_t2392331557_marshal_cleanup(MethodToken_t2392331557_marshaled& marshaled);
