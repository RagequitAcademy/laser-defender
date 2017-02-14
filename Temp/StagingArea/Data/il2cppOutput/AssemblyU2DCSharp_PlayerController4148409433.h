#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

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
	// System.Single PlayerController::speed
	float ___speed_2;
	// System.Single PlayerController::padding
	float ___padding_3;
	// UnityEngine.GameObject PlayerController::projectile
	GameObject_t1756533147 * ___projectile_4;
	// System.Single PlayerController::firingRate
	float ___firingRate_5;
	// System.Single PlayerController::health
	float ___health_6;
	// UnityEngine.AudioClip PlayerController::playerFires
	AudioClip_t1932558630 * ___playerFires_7;
	// System.Single PlayerController::xmin
	float ___xmin_8;
	// System.Single PlayerController::xmax
	float ___xmax_9;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_padding_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___padding_3)); }
	inline float get_padding_3() const { return ___padding_3; }
	inline float* get_address_of_padding_3() { return &___padding_3; }
	inline void set_padding_3(float value)
	{
		___padding_3 = value;
	}

	inline static int32_t get_offset_of_projectile_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___projectile_4)); }
	inline GameObject_t1756533147 * get_projectile_4() const { return ___projectile_4; }
	inline GameObject_t1756533147 ** get_address_of_projectile_4() { return &___projectile_4; }
	inline void set_projectile_4(GameObject_t1756533147 * value)
	{
		___projectile_4 = value;
		Il2CppCodeGenWriteBarrier(&___projectile_4, value);
	}

	inline static int32_t get_offset_of_firingRate_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___firingRate_5)); }
	inline float get_firingRate_5() const { return ___firingRate_5; }
	inline float* get_address_of_firingRate_5() { return &___firingRate_5; }
	inline void set_firingRate_5(float value)
	{
		___firingRate_5 = value;
	}

	inline static int32_t get_offset_of_health_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___health_6)); }
	inline float get_health_6() const { return ___health_6; }
	inline float* get_address_of_health_6() { return &___health_6; }
	inline void set_health_6(float value)
	{
		___health_6 = value;
	}

	inline static int32_t get_offset_of_playerFires_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___playerFires_7)); }
	inline AudioClip_t1932558630 * get_playerFires_7() const { return ___playerFires_7; }
	inline AudioClip_t1932558630 ** get_address_of_playerFires_7() { return &___playerFires_7; }
	inline void set_playerFires_7(AudioClip_t1932558630 * value)
	{
		___playerFires_7 = value;
		Il2CppCodeGenWriteBarrier(&___playerFires_7, value);
	}

	inline static int32_t get_offset_of_xmin_8() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___xmin_8)); }
	inline float get_xmin_8() const { return ___xmin_8; }
	inline float* get_address_of_xmin_8() { return &___xmin_8; }
	inline void set_xmin_8(float value)
	{
		___xmin_8 = value;
	}

	inline static int32_t get_offset_of_xmax_9() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___xmax_9)); }
	inline float get_xmax_9() const { return ___xmax_9; }
	inline float* get_address_of_xmax_9() { return &___xmax_9; }
	inline void set_xmax_9(float value)
	{
		___xmax_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
