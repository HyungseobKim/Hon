#ifndef MOVECHARACTER
#define MOVECHARACTER
/******************************************************************************/
/*!
\headerfile   MoveCharacter.h
\author Kim Hyungseob
\par    email: hn02415@gmail.com
\date   2019/06/12

\copyright
All content 2019 DigiPen (USA) Corporation, all rights reserved.
********************************************************************/
#include "glm.hpp"

namespace BestFit
{
	constexpr float TimerFactor = 0.8f;
	constexpr float StartInMain = -0.08997995292586626f;
	constexpr float StartInCredit = 4.522f;
	constexpr float FinishInMain = 1.f;
	constexpr float FinishInCredit = 5.f;

	float GetY(float t, float FinishTime);
	float GetX(float y);
	float GetScale(float t, float StartTime, float FinishTime);
}

#endif