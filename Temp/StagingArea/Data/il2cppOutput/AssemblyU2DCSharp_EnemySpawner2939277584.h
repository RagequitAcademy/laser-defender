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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemySpawner
struct  EnemySpawner_t2939277584  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject EnemySpawner::enemyPrefab
	GameObject_t1756533147 * ___enemyPrefab_2;
	// System.Single EnemySpawner::width
	float ___width_3;
	// System.Single EnemySpawner::height
	float ___height_4;
	// System.Single EnemySpawner::speed
	float ___speed_5;
	// System.Single EnemySpawner::padding
	float ___padding_6;
	// System.Single EnemySpawner::spawnDelay
	float ___spawnDelay_7;
	// UnityEngine.Vector3 EnemySpawner::moveVector
	Vector3_t2243707580  ___moveVector_8;
	// System.Single EnemySpawner::camXmin
	float ___camXmin_9;
	// System.Single EnemySpawner::camXmax
	float ___camXmax_10;

public:
	inline static int32_t get_offset_of_enemyPrefab_2() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___enemyPrefab_2)); }
	inline GameObject_t1756533147 * get_enemyPrefab_2() const { return ___enemyPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_enemyPrefab_2() { return &___enemyPrefab_2; }
	inline void set_enemyPrefab_2(GameObject_t1756533147 * value)
	{
		___enemyPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___enemyPrefab_2, value);
	}

	inline static int32_t get_offset_of_width_3() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___width_3)); }
	inline float get_width_3() const { return ___width_3; }
	inline float* get_address_of_width_3() { return &___width_3; }
	inline void set_width_3(float value)
	{
		___width_3 = value;
	}

	inline static int32_t get_offset_of_height_4() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___height_4)); }
	inline float get_height_4() const { return ___height_4; }
	inline float* get_address_of_height_4() { return &___height_4; }
	inline void set_height_4(float value)
	{
		___height_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_padding_6() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___padding_6)); }
	inline float get_padding_6() const { return ___padding_6; }
	inline float* get_address_of_padding_6() { return &___padding_6; }
	inline void set_padding_6(float value)
	{
		___padding_6 = value;
	}

	inline static int32_t get_offset_of_spawnDelay_7() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___spawnDelay_7)); }
	inline float get_spawnDelay_7() const { return ___spawnDelay_7; }
	inline float* get_address_of_spawnDelay_7() { return &___spawnDelay_7; }
	inline void set_spawnDelay_7(float value)
	{
		___spawnDelay_7 = value;
	}

	inline static int32_t get_offset_of_moveVector_8() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___moveVector_8)); }
	inline Vector3_t2243707580  get_moveVector_8() const { return ___moveVector_8; }
	inline Vector3_t2243707580 * get_address_of_moveVector_8() { return &___moveVector_8; }
	inline void set_moveVector_8(Vector3_t2243707580  value)
	{
		___moveVector_8 = value;
	}

	inline static int32_t get_offset_of_camXmin_9() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___camXmin_9)); }
	inline float get_camXmin_9() const { return ___camXmin_9; }
	inline float* get_address_of_camXmin_9() { return &___camXmin_9; }
	inline void set_camXmin_9(float value)
	{
		___camXmin_9 = value;
	}

	inline static int32_t get_offset_of_camXmax_10() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___camXmax_10)); }
	inline float get_camXmax_10() const { return ___camXmax_10; }
	inline float* get_address_of_camXmax_10() { return &___camXmax_10; }
	inline void set_camXmax_10(float value)
	{
		___camXmax_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
