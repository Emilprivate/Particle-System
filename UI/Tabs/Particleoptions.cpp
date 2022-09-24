#include "Particleoptions.h"

int Particleoptions::amount = 0;

float Particleoptions::size = 64.0f, Particleoptions::mass = 15.0f, Particleoptions::friction = 0.8f, Particleoptions::startvelocity = 105.0f;

bool Particleoptions::addObj = false, Particleoptions::removeObj = false;

int particleRelated::particleAmount;

void Particleoptions::RenderTab() {
	ImGui::Text("Particle settings: ");
	ImGui::Spacing();
	ImGui::SliderFloat("Size", &Particleoptions::size, 5.0f, 150.0f);
	ImGui::Spacing();
	ImGui::SliderFloat("Mass", &Particleoptions::mass, 1.0f, 1000.0f);
	ImGui::Spacing();
	ImGui::SliderFloat("Friction", &Particleoptions::friction, 0.0f, 1.0f);
	ImGui::Spacing();
	ImGui::SliderFloat("Velocity", &Particleoptions::startvelocity, 100.0f, 1000.0f);
	ImGui::Spacing();

	ImGui::Separator();

	ImGui::Spacing();
	ImGui::SliderInt("Amount", &Particleoptions::amount, 0, 100);

	if (ImGui::Button("Add")) {
		Particleoptions::addObj = true;
	}

	ImGui::SameLine();
	ImGui::Dummy(ImVec2(-10.0f, 0.0f));
	ImGui::SameLine();

	if (ImGui::Button("Remove")) {
		Particleoptions::removeObj = true;
	}

	ImGui::SameLine();

	ImGui::Text("Amount of particles: %d", particleRelated::particleAmount);
}