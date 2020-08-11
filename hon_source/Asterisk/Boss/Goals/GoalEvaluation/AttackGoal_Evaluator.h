#ifndef ATTACKGOAL_EVALUATOR_H
#define ATTACKGOAL_EVALUATOR_H
/*!*******************************************************************
\headerfile   AttackGoal_Evaluator.h
\author       Kim Hyungseob
\par          email: hn02415 \@ gmail.com
\date         2019/05/26
\brief
			  Header file for AttackGoal_Evaluator class.
\copyright
All content  2019 DigiPen (USA) Corporation, all rights reserved.
********************************************************************/
#include "Goal_Evaluator.h"

/*!*******************************************************************
\class AttackGoal_Evaluator
\brief
	   Define evaluator class for Goal_Attack.
********************************************************************/
class AttackGoal_Evaluator : public Goal_Evaluator
{
public:
	/*!*******************************************************************
	\brief
		   Default constructor.

	\param characterBias
		   New value for AI personality.
	********************************************************************/
	AttackGoal_Evaluator(double characterBias) : Goal_Evaluator(characterBias) {}

	/*!*******************************************************************
	\brief
		   Calculates desirability of the Goal_Attack.

	\param systemMgr
		   Pointer to system manager to use engine interface.

	\param entity
		   Id of entity in this state.

	\return double
			Score between 0 and 1 representing desirability of goal.
	********************************************************************/
	double CalculateDesirability(SystemManager* systemMgr, EntityId entity) override;

	/*!*******************************************************************
	\brief
		   Adds the Goal_Attack to the given entity's brain.

	\param brain
		   Pointer to Goal_Think.
	********************************************************************/
	void SetGoal(Goal_Think* brain) override;
};

#endif // !ATTACKGOAL_EVALUATOR_H
