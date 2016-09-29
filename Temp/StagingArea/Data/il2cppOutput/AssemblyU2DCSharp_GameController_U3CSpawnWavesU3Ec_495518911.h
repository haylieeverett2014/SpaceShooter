#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// GameController
struct GameController_t3607102586;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/<SpawnWaves>c__Iterator2
struct  U3CSpawnWavesU3Ec__Iterator2_t495518911  : public Il2CppObject
{
public:
	// System.Int32 GameController/<SpawnWaves>c__Iterator2::<i>__0
	int32_t ___U3CiU3E__0_0;
	// UnityEngine.Vector3 GameController/<SpawnWaves>c__Iterator2::<spawnPosition>__1
	Vector3_t2243707580  ___U3CspawnPositionU3E__1_1;
	// UnityEngine.Quaternion GameController/<SpawnWaves>c__Iterator2::<spawnRotation>__2
	Quaternion_t4030073918  ___U3CspawnRotationU3E__2_2;
	// System.Int32 GameController/<SpawnWaves>c__Iterator2::$PC
	int32_t ___U24PC_3;
	// System.Object GameController/<SpawnWaves>c__Iterator2::$current
	Il2CppObject * ___U24current_4;
	// GameController GameController/<SpawnWaves>c__Iterator2::<>f__this
	GameController_t3607102586 * ___U3CU3Ef__this_5;

public:
	inline static int32_t get_offset_of_U3CiU3E__0_0() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator2_t495518911, ___U3CiU3E__0_0)); }
	inline int32_t get_U3CiU3E__0_0() const { return ___U3CiU3E__0_0; }
	inline int32_t* get_address_of_U3CiU3E__0_0() { return &___U3CiU3E__0_0; }
	inline void set_U3CiU3E__0_0(int32_t value)
	{
		___U3CiU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CspawnPositionU3E__1_1() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator2_t495518911, ___U3CspawnPositionU3E__1_1)); }
	inline Vector3_t2243707580  get_U3CspawnPositionU3E__1_1() const { return ___U3CspawnPositionU3E__1_1; }
	inline Vector3_t2243707580 * get_address_of_U3CspawnPositionU3E__1_1() { return &___U3CspawnPositionU3E__1_1; }
	inline void set_U3CspawnPositionU3E__1_1(Vector3_t2243707580  value)
	{
		___U3CspawnPositionU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U3CspawnRotationU3E__2_2() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator2_t495518911, ___U3CspawnRotationU3E__2_2)); }
	inline Quaternion_t4030073918  get_U3CspawnRotationU3E__2_2() const { return ___U3CspawnRotationU3E__2_2; }
	inline Quaternion_t4030073918 * get_address_of_U3CspawnRotationU3E__2_2() { return &___U3CspawnRotationU3E__2_2; }
	inline void set_U3CspawnRotationU3E__2_2(Quaternion_t4030073918  value)
	{
		___U3CspawnRotationU3E__2_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator2_t495518911, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator2_t495518911, ___U24current_4)); }
	inline Il2CppObject * get_U24current_4() const { return ___U24current_4; }
	inline Il2CppObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(Il2CppObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_5() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator2_t495518911, ___U3CU3Ef__this_5)); }
	inline GameController_t3607102586 * get_U3CU3Ef__this_5() const { return ___U3CU3Ef__this_5; }
	inline GameController_t3607102586 ** get_address_of_U3CU3Ef__this_5() { return &___U3CU3Ef__this_5; }
	inline void set_U3CU3Ef__this_5(GameController_t3607102586 * value)
	{
		___U3CU3Ef__this_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
