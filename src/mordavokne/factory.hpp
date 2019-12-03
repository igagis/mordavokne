#pragma once

#include "application.hpp"

#include <utki/config.hpp>


namespace mordavokne{



/**
 * @brief Create application instance.
 * User needs to define this factory function to create his application instance.
 * @param argc - number of command line arguments, including the executable filename as 0th argument.
 * @param argv - array of command line arguments (0th argument is executable filename).
 * @return New application instance.
 */
#if M_OS == M_OS_WINDOWS
__declspec(dllexport)
#endif

std::unique_ptr<application> create_application(int argc, const char** argv);


//TODO: deprecated, remove createApp() function.
#if M_OS == M_OS_WINDOWS
__declspec(dllexport)
#endif
std::unique_ptr<application> createApp(int argc, const char** argv);


}