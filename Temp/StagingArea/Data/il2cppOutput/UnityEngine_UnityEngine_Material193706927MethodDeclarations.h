#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Shader
struct Shader_t2430389951;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t1827099467;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Shader2430389951.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_ComputeBuffer1827099467.h"

// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C"  void Material__ctor_m1897560860 (Material_t193706927 * __this, Shader_t2430389951 * ___shader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UnityEngine.Material::get_shader()
extern "C"  Shader_t2430389951 * Material_get_shader_m2320486867 (Material_t193706927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C"  void Material_SetColor_m650857509 (Material_t193706927 * __this, String_t* ___propertyName0, Color_t2020392075  ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
extern "C"  void Material_SetColor_m1191533068 (Material_t193706927 * __this, int32_t ___nameID0, Color_t2020392075  ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C"  void Material_INTERNAL_CALL_SetColor_m1364511001 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___self0, int32_t ___nameID1, Color_t2020392075 * ___color2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
extern "C"  void Material_SetVector_m3298399397 (Material_t193706927 * __this, String_t* ___propertyName0, Vector4_t2243707581  ___vector1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
extern "C"  void Material_SetTexture_m141095205 (Material_t193706927 * __this, String_t* ___propertyName0, Texture_t2243626319 * ___texture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
extern "C"  void Material_SetTexture_m58378708 (Material_t193706927 * __this, int32_t ___nameID0, Texture_t2243626319 * ___texture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
extern "C"  void Material_SetMatrix_m1387972957 (Material_t193706927 * __this, String_t* ___propertyName0, Matrix4x4_t2933234003  ___matrix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetMatrix(System.Int32,UnityEngine.Matrix4x4)
extern "C"  void Material_SetMatrix_m819317148 (Material_t193706927 * __this, int32_t ___nameID0, Matrix4x4_t2933234003  ___matrix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetMatrix(UnityEngine.Material,System.Int32,UnityEngine.Matrix4x4&)
extern "C"  void Material_INTERNAL_CALL_SetMatrix_m1389870997 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___self0, int32_t ___nameID1, Matrix4x4_t2933234003 * ___matrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C"  void Material_SetFloat_m1926275467 (Material_t193706927 * __this, String_t* ___propertyName0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C"  void Material_SetFloat_m953675160 (Material_t193706927 * __this, int32_t ___nameID0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetBuffer(System.String,UnityEngine.ComputeBuffer)
extern "C"  void Material_SetBuffer_m483625040 (Material_t193706927 * __this, String_t* ___propertyName0, ComputeBuffer_t1827099467 * ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Material::get_passCount()
extern "C"  int32_t Material_get_passCount_m1778920671 (Material_t193706927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
extern "C"  bool Material_SetPass_m2448940266 (Material_t193706927 * __this, int32_t ___pass0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
extern "C"  void Material_Internal_CreateWithShader_m4029381963 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___mono0, Shader_t2430389951 * ___shader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
