#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/FullScreenLayer.hpp>

namespace RED4ext
{
namespace ink { 
struct DebugLayer : ink::FullScreenLayer
{
    static constexpr const char* NAME = "inkDebugLayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk150[0x160 - 0x150]; // 150
};
RED4EXT_ASSERT_SIZE(DebugLayer, 0x160);
} // namespace ink
} // namespace RED4ext
