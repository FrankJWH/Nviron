#include <Nviron.h>

class ExampleLayer : public Nviron::Layer {
public:
	ExampleLayer() : Layer("Example") {}

	void OnUpdate() override {
		NV_CLIENT_INFO("ExampleLayer::Update");
	}

	void OnEvent(Nviron::Event& event) override {
		NV_CLIENT_TRACE("{0}", event);
	}
};

class Sandbox : public Nviron::Application {
public:
	Sandbox() {
		PushLayer(new ExampleLayer());
		PushOverlay(new Nviron::ImGuiLayer());
	}

	~Sandbox() {
		
	}
private:
};

Nviron::Application* Nviron::CreateApplication() {
	return new Sandbox();
}
