#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MusicPlayer
struct MusicPlayer_t3223126890;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MusicPlayer
struct  MusicPlayer_t3223126890  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct MusicPlayer_t3223126890_StaticFields
{
public:
	// MusicPlayer MusicPlayer::instance
	MusicPlayer_t3223126890 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(MusicPlayer_t3223126890_StaticFields, ___instance_2)); }
	inline MusicPlayer_t3223126890 * get_instance_2() const { return ___instance_2; }
	inline MusicPlayer_t3223126890 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(MusicPlayer_t3223126890 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
