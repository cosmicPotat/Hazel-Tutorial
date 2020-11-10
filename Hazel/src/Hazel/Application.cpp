#include "Application.h"

#include "Hazel/Events/KeyEvent.h"
#include "Hazel/Events/ApplicationEvent.h"
#include "Hazel/Events/MouseEvent.h"
#include "Hazel/Log.h"

namespace Hazel {

	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		KeyPressedEvent e = KeyPressedEvent(1, 0);
		HZ_TRACE(e);

		AppRenderEvent r = AppRenderEvent();
		HZ_TRACE(r);

		MouseButtonPressedEvent m(1);
		HZ_TRACE(m);

		while (true)
		{

		}
	}

}