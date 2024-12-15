
#pragma once
#include <gtest\gtest.hpp>

#if BOOST_COMP_MSVC
#pragma warning(push)
#pragma warning(disable: 4996)
#endif

#include <gmock\gmock.h>

#if BOOST_COMP_MSVC
#pragma warning(pop)
#endif

namespace mock::std
{

template<class T>
using is_function = ::std::is_function<T>;

} // namespace mock::std

namespace mock::alicorn::extension::std
{

template<class T>
using is_function = ::std::is_function<T>;

} // namespace mock::alicorn::extension::std

namespace alicorn::extension::std
{

template<class T>
using is_function = ::std::is_function<T>;

} // namespace alicorn::extension::std
