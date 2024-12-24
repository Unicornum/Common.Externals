
#pragma once

#define RMLUI_STATIC_LIB

#if BOOST_COMP_MSVC 
# pragma warning(push)
# pragma warning(disable: 4458)
# pragma warning(disable: 4996)
#endif

#if BOOST_COMP_GNUC
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#endif

#include <RmlUi\Core.h>
#include <RmlUi\Debugger.h>

#if BOOST_COMP_MSVC 
# pragma warning(pop)
#endif

#if BOOST_COMP_GNUC
# pragma GCC diagnostic pop
#endif
