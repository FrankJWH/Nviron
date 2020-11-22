#pragma once

#include "hzpch.h"

#include "Nviron/Core.h"
#include "Nviron/Events/Event.h"

/*
	Window module responsible for constructing and declaring a basic
	window structure including the properties that need to be set to
	have simple window to be set up and the interface for event system
	to attach to.
*/
namespace Nviron {

	// settings struct to define the core minumum attributes for a window
	// to be built. Consumed by window to set the properties
	struct WindowProps {
		std::string Title;
		unsigned int Width;
		unsigned int Height;

		WindowProps(const std::string& title = "Nviron Engine", unsigned int width = 1280, unsigned int height = 720)
			: Title(title), Width(width), Height(height) {}
	};

	//
	class NVIRON_API Window {
	public:
		// creates a callback func which returns void and takes a Event& param
		using EventCallbackFn = std::function<void(Event&)>;

		virtual ~Window() {}

		virtual void OnUpdate() = 0;

		virtual unsigned int GetWidth() const = 0;
		virtual unsigned int GetHeight() const = 0;

		// Window attributes
		virtual void SetEventCallback(const EventCallbackFn& callback) = 0;
		virtual void SetVSync(bool enabled) = 0;
		virtual bool IsVSync() const = 0;

		// platform dependent static function, must be impl per platform
		static Window* Create(const WindowProps& props = WindowProps());
	};
}
