#ifndef AIMBOT_HEADER
#define AIMBOT_HEADER

#include "../SDK/Player.h"
#include "../Utils/Utils.h"
class Aimbot
{
public:
	Aimbot() = default;

	void run();
	void setAimbot(bool state);
	[[nodiscard]] bool getAimbot() const;
private:
	bool enabled{ false };
	[[nodiscard]] Utils::Angle calcAngleTo(Utils::Vector3 dst);
};

#endif