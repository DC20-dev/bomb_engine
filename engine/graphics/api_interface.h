#pragma once

#include "api_bridge.h"

namespace BE_NAMESPACE
{
class IAPI
{
public:
    virtual ~IAPI() = default;

    inline virtual auto get_api() -> E_API = 0;

    virtual void draw_frame() {};
};
}  // namespace BE_NAMESPACE