#pragma once
#include "Hazel/Events/KeyEvent.h"

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, int** argv)
{
	Hazel::Log::Init();
	HZ_CORE_TRACE("Initialized Core Logger");
	HZ_CORE_WARN("Warining test!");
	HZ_INFO("Hello! Var={0}", 5);

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif