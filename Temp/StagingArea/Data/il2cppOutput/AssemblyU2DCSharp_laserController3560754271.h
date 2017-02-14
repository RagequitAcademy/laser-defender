#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// laserController
struct  laserController_t3560754271  : public MonoBehaviour_t1158329972
{
public:
	// System.Single laserController::projectileSpeed
	float ___projectileSpeed_2;
	// System.Single laserController::damage
	float ___damage_3;

public:
	inline static int32_t get_offset_of_projectileSpeed_2() { return static_cast<int32_t>(offsetof(laserController_t3560754271, ___projectileSpeed_2)); }
	inline float get_projectileSpeed_2() const { return ___projectileSpeed_2; }
	inline float* get_address_of_projectileSpeed_2() { return &___projectileSpeed_2; }
	inline void set_projectileSpeed_2(float value)
	{
		___projectileSpeed_2 = value;
	}

	inline static int32_t get_offset_of_damage_3() { return static_cast<int32_t>(offsetof(laserController_t3560754271, ___damage_3)); }
	inline float get_damage_3() const { return ___damage_3; }
	inline float* get_address_of_damage_3() { return &___damage_3; }
	inline void set_damage_3(float value)
	{
		___damage_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
