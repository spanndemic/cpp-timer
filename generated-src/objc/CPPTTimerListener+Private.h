// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from cpptimer.djinni

#include "timer_listener.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol CPPTTimerListener;

namespace djinni_generated {

class TimerListener
{
public:
    using CppType = std::shared_ptr<::cpptimer::TimerListener>;
    using ObjcType = id<CPPTTimerListener>;

    using Boxed = TimerListener;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

