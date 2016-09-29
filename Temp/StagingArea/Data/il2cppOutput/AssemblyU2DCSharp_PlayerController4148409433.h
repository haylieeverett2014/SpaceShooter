#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// Boundary
struct Boundary_t1794889402;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t4233889191 * ___rb_2;
	// System.Single PlayerController::speed
	float ___speed_3;
	// System.Single PlayerController::tilt
	float ___tilt_4;
	// Boundary PlayerController::boundary
	Boundary_t1794889402 * ___boundary_5;
	// UnityEngine.GameObject PlayerController::shot
	GameObject_t1756533147 * ___shot_6;
	// UnityEngine.Transform PlayerController::shotSpawn
	Transform_t3275118058 * ___shotSpawn_7;
	// System.Single PlayerController::fireRate
	float ___fireRate_8;
	// System.Single PlayerController::nextFire
	float ___nextFire_9;
	// UnityEngine.AudioSource PlayerController::audioSource
	AudioSource_t1135106623 * ___audioSource_10;

public:
	inline static int32_t get_offset_of_rb_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___rb_2)); }
	inline Rigidbody_t4233889191 * get_rb_2() const { return ___rb_2; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_2() { return &___rb_2; }
	inline void set_rb_2(Rigidbody_t4233889191 * value)
	{
		___rb_2 = value;
		Il2CppCodeGenWriteBarrier(&___rb_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_tilt_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___tilt_4)); }
	inline float get_tilt_4() const { return ___tilt_4; }
	inline float* get_address_of_tilt_4() { return &___tilt_4; }
	inline void set_tilt_4(float value)
	{
		___tilt_4 = value;
	}

	inline static int32_t get_offset_of_boundary_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___boundary_5)); }
	inline Boundary_t1794889402 * get_boundary_5() const { return ___boundary_5; }
	inline Boundary_t1794889402 ** get_address_of_boundary_5() { return &___boundary_5; }
	inline void set_boundary_5(Boundary_t1794889402 * value)
	{
		___boundary_5 = value;
		Il2CppCodeGenWriteBarrier(&___boundary_5, value);
	}

	inline static int32_t get_offset_of_shot_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___shot_6)); }
	inline GameObject_t1756533147 * get_shot_6() const { return ___shot_6; }
	inline GameObject_t1756533147 ** get_address_of_shot_6() { return &___shot_6; }
	inline void set_shot_6(GameObject_t1756533147 * value)
	{
		___shot_6 = value;
		Il2CppCodeGenWriteBarrier(&___shot_6, value);
	}

	inline static int32_t get_offset_of_shotSpawn_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___shotSpawn_7)); }
	inline Transform_t3275118058 * get_shotSpawn_7() const { return ___shotSpawn_7; }
	inline Transform_t3275118058 ** get_address_of_shotSpawn_7() { return &___shotSpawn_7; }
	inline void set_shotSpawn_7(Transform_t3275118058 * value)
	{
		___shotSpawn_7 = value;
		Il2CppCodeGenWriteBarrier(&___shotSpawn_7, value);
	}

	inline static int32_t get_offset_of_fireRate_8() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___fireRate_8)); }
	inline float get_fireRate_8() const { return ___fireRate_8; }
	inline float* get_address_of_fireRate_8() { return &___fireRate_8; }
	inline void set_fireRate_8(float value)
	{
		___fireRate_8 = value;
	}

	inline static int32_t get_offset_of_nextFire_9() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___nextFire_9)); }
	inline float get_nextFire_9() const { return ___nextFire_9; }
	inline float* get_address_of_nextFire_9() { return &___nextFire_9; }
	inline void set_nextFire_9(float value)
	{
		___nextFire_9 = value;
	}

	inline static int32_t get_offset_of_audioSource_10() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___audioSource_10)); }
	inline AudioSource_t1135106623 * get_audioSource_10() const { return ___audioSource_10; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_10() { return &___audioSource_10; }
	inline void set_audioSource_10(AudioSource_t1135106623 * value)
	{
		___audioSource_10 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
