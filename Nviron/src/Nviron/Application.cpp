#include "hzpch.h"
#include "Application.h"

#include "Nviron/Events/ApplicationEvent.h"
#include "Nviron/Log.h"

#include <GLFW/glfw3.h>

namespace Nviron {
	Application::Application() {
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	Application::~Application() {

	}

	void Application::Run() {
		while (m_Running) {
			glClearColor(1, 0, 1, 1);
			glClear(GL_COLOR_BUFFER_BIT);
			m_Window->OnUpdate();
		}
	}
}
