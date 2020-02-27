#include "hzpch.h"

#include "Application.h"

#include "Nviron/Events/ApplicationEvent.h"
#include "Nviron/Log.h"

namespace Nviron {
	Application::Application() {

	}

	Application::~Application() {

	}

	void Application::Run() {
		WindowResizeEvent e(1280, 720);
		NV_CLIENT_TRACE(e); 
		while (true);
	}
}
