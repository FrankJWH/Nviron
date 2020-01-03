#include <Nviron.h>

class Sandbox : public Nviron::Application {
public:
	Sandbox() {

	}

	~Sandbox() {
		
	}
private:
};

Nviron::Application* Nviron::CreateApplication() {
	return new Sandbox();
}
