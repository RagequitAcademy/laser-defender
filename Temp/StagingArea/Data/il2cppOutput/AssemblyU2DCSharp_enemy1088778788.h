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
// ScoreKeeper
struct ScoreKeeper_t1955354816;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// enemy
struct  enemy_t1088778788  : public MonoBehaviour_t1158329972
{
public:
	// System.Single enemy::health
	float ___health_2;
	// UnityEngine.GameObject enemy::projectile
	GameObject_t1756533147 * ___projectile_3;
	// System.Single enemy::shotsPerSecond
	float ___shotsPerSecond_4;
	// System.Int32 enemy::scoreValue
	int32_t ___scoreValue_5;
	// UnityEngine.AudioClip enemy::enemyFires
	AudioClip_t1932558630 * ___enemyFires_6;
	// UnityEngine.AudioClip enemy::enemyDies
	AudioClip_t1932558630 * ___enemyDies_7;
	// ScoreKeeper enemy::scoreKeeper
	ScoreKeeper_t1955354816 * ___scoreKeeper_8;

public:
	inline static int32_t get_offset_of_health_2() { return static_cast<int32_t>(offsetof(enemy_t1088778788, ___health_2)); }
	inline float get_health_2() const { return ___health_2; }
	inline float* get_address_of_health_2() { return &___health_2; }
	inline void set_health_2(float value)
	{
		___health_2 = value;
	}

	inline static int32_t get_offset_of_projectile_3() { return static_cast<int32_t>(offsetof(enemy_t1088778788, ___projectile_3)); }
	inline GameObject_t1756533147 * get_projectile_3() const { return ___projectile_3; }
	inline GameObject_t1756533147 ** get_address_of_projectile_3() { return &___projectile_3; }
	inline void set_projectile_3(GameObject_t1756533147 * value)
	{
		___projectile_3 = value;
		Il2CppCodeGenWriteBarrier(&___projectile_3, value);
	}

	inline static int32_t get_offset_of_shotsPerSecond_4() { return static_cast<int32_t>(offsetof(enemy_t1088778788, ___shotsPerSecond_4)); }
	inline float get_shotsPerSecond_4() const { return ___shotsPerSecond_4; }
	inline float* get_address_of_shotsPerSecond_4() { return &___shotsPerSecond_4; }
	inline void set_shotsPerSecond_4(float value)
	{
		___shotsPerSecond_4 = value;
	}

	inline static int32_t get_offset_of_scoreValue_5() { return static_cast<int32_t>(offsetof(enemy_t1088778788, ___scoreValue_5)); }
	inline int32_t get_scoreValue_5() const { return ___scoreValue_5; }
	inline int32_t* get_address_of_scoreValue_5() { return &___scoreValue_5; }
	inline void set_scoreValue_5(int32_t value)
	{
		___scoreValue_5 = value;
	}

	inline static int32_t get_offset_of_enemyFires_6() { return static_cast<int32_t>(offsetof(enemy_t1088778788, ___enemyFires_6)); }
	inline AudioClip_t1932558630 * get_enemyFires_6() const { return ___enemyFires_6; }
	inline AudioClip_t1932558630 ** get_address_of_enemyFires_6() { return &___enemyFires_6; }
	inline void set_enemyFires_6(AudioClip_t1932558630 * value)
	{
		___enemyFires_6 = value;
		Il2CppCodeGenWriteBarrier(&___enemyFires_6, value);
	}

	inline static int32_t get_offset_of_enemyDies_7() { return static_cast<int32_t>(offsetof(enemy_t1088778788, ___enemyDies_7)); }
	inline AudioClip_t1932558630 * get_enemyDies_7() const { return ___enemyDies_7; }
	inline AudioClip_t1932558630 ** get_address_of_enemyDies_7() { return &___enemyDies_7; }
	inline void set_enemyDies_7(AudioClip_t1932558630 * value)
	{
		___enemyDies_7 = value;
		Il2CppCodeGenWriteBarrier(&___enemyDies_7, value);
	}

	inline static int32_t get_offset_of_scoreKeeper_8() { return static_cast<int32_t>(offsetof(enemy_t1088778788, ___scoreKeeper_8)); }
	inline ScoreKeeper_t1955354816 * get_scoreKeeper_8() const { return ___scoreKeeper_8; }
	inline ScoreKeeper_t1955354816 ** get_address_of_scoreKeeper_8() { return &___scoreKeeper_8; }
	inline void set_scoreKeeper_8(ScoreKeeper_t1955354816 * value)
	{
		___scoreKeeper_8 = value;
		Il2CppCodeGenWriteBarrier(&___scoreKeeper_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
