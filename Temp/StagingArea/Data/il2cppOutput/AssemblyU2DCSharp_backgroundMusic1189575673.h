#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// backgroundMusic
struct  backgroundMusic_t1189575673  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip backgroundMusic::chatter
	AudioClip_t1932558630 * ___chatter_2;

public:
	inline static int32_t get_offset_of_chatter_2() { return static_cast<int32_t>(offsetof(backgroundMusic_t1189575673, ___chatter_2)); }
	inline AudioClip_t1932558630 * get_chatter_2() const { return ___chatter_2; }
	inline AudioClip_t1932558630 ** get_address_of_chatter_2() { return &___chatter_2; }
	inline void set_chatter_2(AudioClip_t1932558630 * value)
	{
		___chatter_2 = value;
		Il2CppCodeGenWriteBarrier(&___chatter_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
