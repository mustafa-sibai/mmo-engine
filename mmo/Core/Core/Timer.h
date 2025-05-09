#pragma once
#include <chrono>
#include "API.h"

class CORE_API Timer
{
public:
	Timer() noexcept;
	float Mark() noexcept;
	float Peek() const noexcept;

private:
	std::chrono::steady_clock::time_point last;
};